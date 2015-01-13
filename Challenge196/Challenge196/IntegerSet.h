#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class IntegerSet
{
public:
	IntegerSet() {}
	~IntegerSet() {}
	IntegerSet(std::vector<int> ints);

	void Insert(int _integer);
	bool Contains(int _integer);
	std::vector<int> GetVector();

	// Union
	IntegerSet operator+(const IntegerSet& _ints);

	// Intersection
	IntegerSet operator-(const IntegerSet& _ints);

	// Complement
	IntegerSet operator/(const IntegerSet& _ints);

	// Equals
	bool operator==(const IntegerSet& _ints);

private:
	std::vector<int> intSet;
};
