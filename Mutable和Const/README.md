# Mutable 和 Const

```c++
#include<iostream>
#include<string>

class Person {
public:
	std::string name;
	int age;
	Person(std::string name, int age)
		:name(name), age(age){}
};

class Entity {
public:
	// you can't modify person propertiese, but in const method
	// you still modify person self
	mutable const Person* person;

	std::string GetName() const {
		person = new Person("KnewHow", 123);
		return person->name;
	}
};



int main() {

}
```

