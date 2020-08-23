# 多维数组

```c++
#include<iostream>

int main() {
	int* array = new int[5];

	// 二维数组
	int** a2d = new int*[5];
	for (int i = 0; i < 5; i++) {
		a2d[i] = new int[5];
	}

	// 对于一个正常的二维数组，我们可以用一维数组来扁平化保存,这样效率更高
	int* a2d_2 = new int[25];
	for (int x = 0; x < 5; x++) {
		for (int y = 0; y < 5; y++) {
			a2d_2[x + y * 5] = 0;
		}
	}
}
```

