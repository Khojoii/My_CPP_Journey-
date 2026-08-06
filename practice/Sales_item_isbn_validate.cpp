#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item1;
    Sales_item item2;

    std::cin >> item1;
    std::cin >> item2;
    if (item1.isbn() == item2.isbn())
    {
        Sales_item sum = item1 + item2;
        std::cout << sum;
        return 0; 
    }
    else
    {
        std::cerr << "input items must have same ISBN!!!" << std::endl;
        return -1;
    }




   
    
}


