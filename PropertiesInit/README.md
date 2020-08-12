# Propertiese Init

```C++
#include<iostream>
#include<string>


class Example {
public:
	Example() {
		std::cout << "Create Example" << std::endl;
	}
	Example(int x) {
		std::cout << "Create Example" << "with " << x << std::endl;
	}
};

class Entity {
public:
	std::string m_Name;
	int m_Score;
	// it will default init
	Example example;

	// if example after ":", it will init once, 
	Entity()
		:m_Name("UnKnow"),m_Score(0), example(Example(8)){}

	// in this function, example will be init twice
	Entity(const std::string name)
		:m_Name(name), m_Score(0){
		example = Example(8);
	}
};

int main() {
	Entity e("KnewHow");
	std::cin.get();
}
```