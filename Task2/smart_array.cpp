#include "smart_array.h"

smart_array::smart_array(int size) : arrSize{ size }, arr{ new int[arrSize] }
{}

void smart_array::add_element(int number)
{
	if (filledSize < arrSize)
	{
		arr[filledSize++] = number;
	}
	else
	{
		throw std::exception("Массив переполнен!");
	}
}

int smart_array::get_element(int index) const
{
	if ((index < 0) || (index >= arrSize))
	{
		throw std::exception("Обращение к некорректному индексу!");
	}
	return arr[index];
}

int smart_array::getSize() const
{
	return arrSize;
}

int* smart_array::getArray() const
{
	return arr;
}

smart_array::~smart_array()
{
	delete[] arr;
}

void smart_array::operator=(const smart_array& other)
{
	int* newArr = arr;
	arrSize = other.getSize();
	arr = new int[arrSize];
	
	for (int i{}; i < arrSize; ++i)
	{
		arr[i] = other.get_element(i);
	}

	delete[] newArr;
}