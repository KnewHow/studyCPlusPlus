# 箭头运算符重载和偏移

```c++
#include<iostream>

class Entity {
private:
	int x, y;
public:
	Entity(int x, int y)
		:x(x),y(y){}

	Entity()
	:x(0), y(0) {
		
	}

	void printLog() {
		std::cout << x << ", " << y << std::endl;
	}
};

class ScopePointer {
private:
	Entity* e;
public:
	ScopePointer(Entity* e)
		: e(e){}

	~ScopePointer() {
		delete e;
	}

	Entity* operator->() {
		return e;
	}
};

class Vector3 {
public:
	int x, y, z;
};

int main() {
	
	ScopePointer sp(new Entity(10, 11));

	// 重载-> 运算符来实现内部指针的方法调用
	sp->printLog();

	// 实现偏移
	int offset = (int)&((Vector3*)nullptr)->y;
	std::cout << "offset:" << offset << std::endl;
	std::cin.get();
}
```

