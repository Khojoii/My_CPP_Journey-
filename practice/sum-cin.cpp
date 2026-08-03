#include <iostream>

int main()
{
    int i =0;
    int how_many_numbers = 0;
    int number = 0;
    int sum = 0;

    std::cout << "how many numbers do you wnat to sum?" << std::endl;
    std::cin >> how_many_numbers;

    --how_many_numbers;

    std::cout << "------Enter the numbers------" << std::endl;

    while (i <= how_many_numbers) //get numbers until they reach the number that user enters
    {
        std::cin >> number;
        sum += number;
        ++i;    
    }

    std::cout << "sum of your numbers is: " << sum;
}