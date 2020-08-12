# Vector Copy

```c++
#include<iostream>
#include<vector>

struct Vertex {
private:
	int x, y, z;
public:
	Vertex(int x, int y, int z)
		:x(x), y(y), z(z) {
	}

	Vertex(const Vertex& v) {
		std::cout << "Do Copy" << std::endl;
		x = v.x;
		y = v.y;
		z = v.z;
	}
	
};

int main() {
	// no copy will find
	std::vector<Vertex> vs;
	// if we don't add this, it will copy 6 times, as vector expand, it will do copy
	vs.reserve(3);
	vs.emplace_back( 1, 2, 3 );
	vs.emplace_back( 4, 5, 6 );
	vs.emplace_back(7, 8, 9);

	// 3 time copys because copy from instance to vector
	vs.push_back(Vertex(1,2,3));
	vs.push_back(Vertex(4, 5, 6));
	vs.push_back(Vertex(7, 8, 9));
	std::cin.get();
}
```

