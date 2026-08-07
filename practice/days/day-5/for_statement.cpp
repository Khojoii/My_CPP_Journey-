# practice/days/day-5/for_statement.cpp

#include <iostream>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 10; ++i){
        sum += i;
    }
    std::cout << "this is sum from 1 to 10 with 'for loop' : " << sum;
}
