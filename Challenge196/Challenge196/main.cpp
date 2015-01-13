#include <iostream>
#include <string>

#include "IntegerSet.h"

using namespace std;

int main()
{
	vector<int> integers = { 1, 4, 7 };
	IntegerSet set1(integers);
	vector<int> integers2 = { -4, 7, 10 };
	IntegerSet set2(integers2);
	IntegerSet setsUnion = set1 + set2;
	IntegerSet setIntersection = set1 - set2;

	IntegerSet sameAsFirst({ 1, 4, 7 });

	bool isSame = (set1 == sameAsFirst);

	return 0;
}