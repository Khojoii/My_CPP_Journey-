#include <iostream>

int main()
{
    int temp_number = 0;
    int start_num = 0;
    int end_num = 0;
    
    std::cout << "enter start and end number for print :" << std::endl;
    std::cin >> start_num;
    std::cin >> end_num;
    /*
    if the user enters a starting number greater than the ending number,
    swap them so the range is always processed correctly
    */

    if (start_num > end_num)
    {
        temp_number = start_num;
        start_num = end_num;
        end_num = temp_number;
    }

    std::cout << "------numbers------" << std::endl;

    while (start_num <= end_num)
    {
        std::cout << start_num <<std::endl;
        ++start_num;
    }
}