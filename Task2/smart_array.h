#pragma once

#include <exception>

class smart_array
{
private:

	int arrSize{};	// Размер массива
	int* arr{ nullptr };	// Ссылка на динамический массив
	int filledSize{};

public:

	smart_array(int size);

	void add_element(int number);

	int get_element(int index) const;

	int getSize() const;

	int* getArray() const;

	~smart_array();

	void operator=(const smart_array& other);
};

