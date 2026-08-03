#include <iostream>

int main()
{
    int value = 0, currentVal = 0;
    if (std::cin >> currentVal)
    {
        int count = 1;
        while (std::cin >> value)
        {
            if (value == currentVal)
            {
                count++;
            }
            else
            {
                std::cout << currentVal << " occurred " << count << " times" << std::endl;
                currentVal = value;
                count = 1;
            }
        }  


        std::cout << currentVal << " occurred " << count << " times" << std::endl;
    }
}