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

int smart_array::get_element(int index)
{
	if ((index < 0) || (index >= arrSize))
	{
		throw std::exception("Обращение к некорректному индексу!");
	}
	return arr[index];
}

smart_array::~smart_array()
{
	delete[] arr;
}