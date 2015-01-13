#include "IntegerSet.h"

IntegerSet::IntegerSet(std::vector<int> _ints)
{
	for (int& i : _ints)
	{
		if (!(std::binary_search(intSet.begin(), intSet.end(), i)))
		{
			intSet.push_back(i);
		}
	}
}

void IntegerSet::Insert(int integer)
{
	if (!Contains(integer))
	{
		intSet.push_back(integer);
		std::sort(intSet.begin(), intSet.end());
	}
}

bool IntegerSet::Contains(int _integer)
{
	return (std::binary_search(intSet.begin(), intSet.end(), _integer));
}

std::vector<int> IntegerSet::GetVector()
{
	return this->intSet;
}

// Union:
IntegerSet IntegerSet::operator+(const IntegerSet& _ints)
{
	IntegerSet set;
	IntegerSet temp;

	temp = _ints;

	for (int i : intSet)
	{
		set.Insert(i);
	}

	for (int i : temp.GetVector())
	{
		set.Insert(i);
	}

	return set;
}

// Intersection : Returns all common ints
IntegerSet IntegerSet::operator-(const IntegerSet& _ints)
{
	IntegerSet set;
	IntegerSet temp = _ints;

	for (int i : intSet)
	{
		if (temp.Contains(i))
		{
			set.Insert(i);
		}
	}

	return set;
}

IntegerSet IntegerSet::operator/(const IntegerSet& _ints)
{
	// Not sure what to do here...
}

bool IntegerSet::operator==(const IntegerSet& _ints)
{
	IntegerSet temp = _ints;
	return intSet == temp.GetVector();
}