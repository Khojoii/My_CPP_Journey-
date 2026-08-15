#include <iostream>
int main()
{
    int a = 10;
    std::cout << "the Value of a is : " << a << std::endl;

    int &aRef = a;
    std::cout << "the Value of aRef is : " << aRef << std::endl;

    aRef = 1;

    std::cout << "we reassigne the Value of aRef so now it's  : " << aRef << std::endl;

    std::cout << "after we reassgine the aRef here is the value of a  : " << a << std::endl;

    int ival = 1.01;
    
}