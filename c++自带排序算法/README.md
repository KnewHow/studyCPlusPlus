# Cpp 自带的排序算法

```c++
#include<vector>
#include<iostream>
#include<algorithm>

int main() {
	std::vector<int> vs = { 3,1,4,2,5 };
	std::sort(vs.begin(), vs.end(), [](int a, int b) {
		return a > b;
	});
	for (int v : vs) {
		std::cout << v << std::endl;
	}
	std::cin.get();
}
```

