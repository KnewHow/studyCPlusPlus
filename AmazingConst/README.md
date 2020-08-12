# Amazing Const

```c++
#include<iostream>
#include<string.h>

void DemoFunction() {
	const int* a = new int;
	
	// don't modify instance but could modify a
	// *a = 3; 
	a = nullptr;

	int* const b = new int;

	// don't modify b but could b instance
	*b = 12;
	// b = nullptr;

	// don't do anything
	const int* const c = new int;
	// c = nullptr;
	// *c = 13;
}

class Entity {
public:
	int X=10, Y;
	int* Z;
	mutable int A;

public:
	// int const method, you don't modify normal variable,But you can modify mutable
	int GetX() const {
		//X = 12;
		// Y = 13;
		A = 12;
		return X;
	}
	
	// in this method, you can't modify anything, and the value returned you also can't modify
	const int* const GetZ()const {
		return Z;
	}

	void Print(const Entity& e) {
		// you con't modify e and e properties
		// e = new Entity();
	}

	void Print(const Entity* e) {
		// you can modify e, but don't modify e instance
		e = nullptr;
		// e->X = 10;
	}
};

void PrintFunction(const Entity& e) {
	// you must make GetX method is const
	int x = e.GetX();
	std::cout << e.GetX() << std::endl;
}
```

