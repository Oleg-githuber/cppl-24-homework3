#pragma once

#include <exception>

class smart_array
{
private:

	int arrSize{};	// ������ �������
	int* arr{ nullptr };	// ������ �� ������������ ������
	int filledSize{};

public:

	smart_array(int size);

	void add_element(int number);

	int get_element(int index);

	~smart_array();
};

