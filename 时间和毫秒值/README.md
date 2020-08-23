# 时间和毫秒值

```c++
#include<iostream>
#include<chrono>

struct Timer {
	std::chrono::time_point<std::chrono::steady_clock> start, end;

	std::chrono::duration<float> duration;

	Timer() {
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer() {
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		float ms = duration.count() * 1000.0f;
		std::cout << "Duration" << ms << "ms " << std::endl;
	}
};

void Function() {
	Timer t;
	for (int i = 0; i < 1000; i++) {
		std::cout << "Hello-->" << i << std::endl;
	}
}


int main() {
	Function();
	std::cin.get();
}
```

