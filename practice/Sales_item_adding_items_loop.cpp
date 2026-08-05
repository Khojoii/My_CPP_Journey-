#include <iostream>
#include "Sales_item.h"
/*this program is reading Sales_item objects (until end of line)
then sums every thing and store it into result which is a Sales_item object also.
*/
int main()
{
    Sales_item result;
    Sales_item input_item;
    while (std::cin >> input_item)
    {
        result += input_item;
    }
    std::cout <<"------ result ------" << std::endl;
    std::cout << result << " : total copies sold , total revenue , average sales " << std::endl;
    return 0;

}