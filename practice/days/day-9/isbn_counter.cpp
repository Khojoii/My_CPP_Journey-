# practice/days/day-9/isbn_counter.cpp

#include <iostream>
#include "Sales_item.h"

int main()
{   
    Sales_item current_item;
    Sales_item process_item;

    std::cout << "Please enter transactions : " << std::endl;
    std::cin >> current_item;

    int counter = 1;

    while (std::cin >> process_item)
    {
        
        if (process_item.isbn() == current_item.isbn())
        {
            current_item = process_item;
            ++counter;
        }
        else
        {
            std::cout << "isbn : " << current_item.isbn() << " has " << counter << " transactions." << std::endl;
            current_item = process_item;
            counter = 1;
        }   
    }
    std::cout << "isbn : " << current_item.isbn() << " has " << counter << " transactions." << std::endl;

}
