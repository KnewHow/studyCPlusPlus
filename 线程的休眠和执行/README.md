# 线程的执行和休眠

```c++
#include<iostream>
#include<thread>

bool is_Finish = false;

void DoWork() {
	using namespace std::literals::chrono_literals;

	// 获取当前线程ID
	std::cout << "Current Thread Id=" << std::this_thread::get_id() << std::endl;
	
	while (!is_Finish) {
		std::cout << "Do Work ..." << std::endl;
		// 线程休眠
		std::this_thread::sleep_for(1s);
	}
}


int main() {
	std::thread worker(DoWork);
	std::cin.get();
	is_Finish = true;
	worker.join();
	std::cout << "Current Thread Id=" << std::this_thread::get_id() << std::endl;
	std::cin.get();
}
```

