#include <iostream>

int main()
{
    int start_num = 0;
    int end_num = 0;
    
    std::cout << "enter start and end number for print :" << std::endl;
    std::cin >> start_num;
    std::cin >> end_num;
    std::cout << "-----------------------------------" << std::endl;

    while (start_num <= end_num)
    {
        std::cout << start_num <<std::endl;
        ++start_num;
    }
}