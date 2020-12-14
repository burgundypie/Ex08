#ifndef INCLUDE_MYSTRING_H_
#define INCLUDE_MYSTRING_H_

#include <string>
#include <cstring>
#include <sstream>

class MyString {
private:
	char* mystr;
	size_t size;

public:
	explicit MyString(const char* = nullptr);
	explicit MyString(std::string other);
	MyString(const MyString& other);
	MyString(MyString&& other);
	~MyString();
	size_t length() const;
	char* get() const;
	MyString operator+(const MyString& other);
	MyString operator-(const MyString& other);
	MyString operator*(const size_t value) const;
	MyString operator=(const MyString& other);
	MyString& operator=(MyString&& other);
	bool operator==(const MyString& other);
	bool operator!=(const MyString& other);
	bool operator<(const MyString& other);
	bool operator>(const MyString& other);
	bool operator<=(const MyString& other);
	bool operator>=(const MyString& other);
	MyString operator!();
	char& operator[](size_t i) const;
	int operator()(const char* substring);
	friend std::ostream& operator<<(std::ostream& os, MyString&);
	friend std::istream& operator>>(std::istream& is, MyString&);
};

#endif