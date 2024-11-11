/*
В этом задании вам нужно поработать с классом умных массивов, 
который вы реализовали в предыдущем задании. 
Сначала попробуйте создать два экземпляра вашего класса с различными элементами и присвоить один другому.
*/

#include <iostream>
#include <clocale>
#include "smart_array.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    smart_array arr(5);
    arr.add_element(1);
    arr.add_element(4);
    arr.add_element(155);

    smart_array new_array(2);
    new_array.add_element(44);
    new_array.add_element(34);

    arr = new_array;

    smart_array arr2 = arr;

    // Проверка присваивания
    for (int i{}; i < arr2.getSize(); ++i)
    {
        std::cout << "Элемент №" << i << " = " << arr2.get_element(i) << '\n';
    }

    return EXIT_SUCCESS;
}

