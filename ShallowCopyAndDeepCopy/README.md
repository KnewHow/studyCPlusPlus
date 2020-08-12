# ShallowCopyAndDeepCopy

```c++
#include<iostream>

class String {
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	: m_Size(strlen(string)){
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}

	// copy function(deep copy)
	String(const String& other) {
		std::cout << "Do copy" << std::endl;
		this->~String();
		m_Size = other.m_Size;
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	}

	// default shallow copy
	/*String(const String& other)
		:m_Buffer(other.m_Buffer), m_Size(other.m_Size){}*/

	~String() {
		delete m_Buffer;
	}

	char& operator[](unsigned int index) {
		return m_Buffer[index];
	}


	friend std::ostream& operator<< (std::ostream& stream, const String& string);
};

// int print function, we should't copy, we should use const V&
std::ostream& operator<< (std::ostream& stream, const String& string) {
	stream << string.m_Buffer;
	return stream;
}

int main() {
	String first = "KnewHow";
	// in default, it will do shallow copy, copy same memory, it will bring some errors
	String second = first;
	second[2] = 'T';

	std::cout << first << std::endl;
	std::cout << second << std::endl;

	std::cin.get();
}
```

