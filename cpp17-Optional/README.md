# C++ 17 的 Optional 类型

```c++
#include<iostream>
#include<string>
#include<fstream>
#include<optional>

std::optional<std::string> readFile(const std::string& path) {
	std::ifstream stream(path);
	if (stream) {
		std::string s = "data";
		return s;
	}
	else {
		return {};
	}
}

int main() {
	std::optional<std::string> content = readFile("data.txt");
	// getOrElse
	std::string c = content.value_or("Empty");
	if (content.has_value()) {
		std::cout << "Read file success" << std::endl;
	}
	else {
		std::cout << "Read File failure" << std::endl;
	}
	std::cout << c << std::endl;
	std::cin.get();
}
```

