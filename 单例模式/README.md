# 单例模式

```c++
#include<iostream>

class Singleton {
private:
	Singleton(){}
	static Singleton m_Instance;
	
public:
	static Singleton& Get() {
		return m_Instance;
	}
	// delete copy method, avoid Get result copied
	Singleton(const Singleton& s) = delete;
 };

Singleton Singleton::m_Instance;


int main() {
	Singleton& s = Singleton::Get();
	std::cin.get();
}
```

