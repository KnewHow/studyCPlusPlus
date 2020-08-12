# String Magic

```c++

	// 不同字节长度表示的字符
	char* name = (char*)"Knewhow";
	const char* name0 = "Knewhow";
	const wchar_t* name1 = L"Knewo";
	const char16_t* name2 = u"KnewHow";
	const char32_t* name3 = U"KnewHow";

	// 标准库的字符串
	std::u32string str32 = U"KnewHow";
	
	using namespace std::string_literals;
	std::string str = "Hello"s + "world";

	std::string str1 = std::string("Hello") + "World";

	// 字符串换行
	const char* example = R"(Line1
Line2
Line3)";

	const char* ex = "Line1\n"
		"Line2\n"
		"Line3";

	std::cout << example << std::endl;
	std::cin.get();
```

