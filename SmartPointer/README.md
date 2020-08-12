# Smart Pointer

```c++
#include<iostream>
#include<memory>

class Entity {
public:
	int X, Y;
	Entity(int x, int y)
		:X(x),Y(y)
	{
		std::cout << "Create Entity with paramter" << std::endl;
	}
	Entity() {
		X = 0;
		Y = 0;
		std::cout << "Create Entity" << std::endl;
	}

	~Entity() {
		std::cout << "Destory Entity" << std::endl;
	}

	void PrintLog() {
		std::cout << X << ", " << Y << std::endl;
	}
};

void testUniquePointer() {
	std::unique_ptr<Entity> entity_0;
	{
		std::unique_ptr<Entity> entity = std::make_unique<Entity>(10,11);
		entity->PrintLog();
		// unique don't allow copy
		// entity_0 = entity;
	}
	
}

void testSharedPointer() {
	{
		std::shared_ptr<Entity> entity_0;
		{
			std::shared_ptr<Entity> entity_1 = std::make_shared<Entity>(-1, 1);
			// shared pointer allow copy,but when reference count is zero, it will be destory 
            // each time you copy, the reference count will increase one
			entity_0 = entity_1;
			// week pth will not add reference count, so make sure you weak_ptr is alive
			std::weak_ptr<Entity> entity_weak_ptr = entity_1;
		}
	}
	// entity will be destory in the here
}

int main() {
	testSharedPointer();
	std::cin.get();
}
```

