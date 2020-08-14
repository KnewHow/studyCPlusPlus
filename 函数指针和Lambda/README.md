# 函数指针和Lambda

```c++
#include<iostream>
#include<vector>

void printMessage(int x) {
	std::cout << x << std::endl;
}

void printVector(std::vector<int> values, void(*printFun)(int)) {
	for (int v : values) {
		printFun(v);
	}
}

int sum(int a, int b) {
	return a + b;
}


int main() {
	void(*printFun)(int) = printMessage;
	std::vector<int> vs = { 1,2,3 };
	//printVector(vs, printMessage);
	printVector(vs, [](int v) {std::cout << v << std::endl; });
	int(*sumFun)(int, int) = sum;
	int r = sumFun(5, 2);
	printFun(r);
	std::cin.get();
}
```

