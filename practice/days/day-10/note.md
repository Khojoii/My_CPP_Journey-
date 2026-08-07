# Day 10
## The bookstore program
the logic of this program is similar to isbn_counter that i wrote for exercise.
We need to read a file of
sales transactions and produce a report that shows, for each book, the total number
of copies sold, the total revenue, and the average sales price. We’ll assume that all
the transactions for each ISBN are grouped together in the input.
Our program will combine the data for each ISBN in a variable named total. We’ll
use a second variable named trans to hold each transaction we read. If trans and
total refer to the same ISBN, we’ll update total. Otherwise we’ll print total and
reset it using the transaction we just read:

```
#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total; // variable to hold data for the next transaction

    // read the first transaction and ensure that there are data to process
    if (std::cin >> total)
    {
        Sales_item trans; // variable to hold the running sum

        // read and process the remaining transactions
        while (std::cin >> trans)
        {
            // if we're still processing the same book
            if (total.isbn() == trans.isbn())
                total += trans; // update the running total
            else
            {
                // print results for the previous book
                std::cout << total << std::endl;
                total = trans; // total now refers to the next book
            }
        }
        std::cout << total << std::endl; // print the last transaction
    }
    else
    {
        // no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1; // indicate failure
    }
    return 0;
}
```


## Chapter summary
this was the last content of first chapter of the book.
in this chapter and 10 days i learned about Basics of c++ and compiler programming languages.
i learned how to define a variable , what is function, how to compile the code  ,how to deal with middle level programming languages , loops , conditions and so on. 
and i face my fear of oop of c++ but i realized that c++ primer book has a smooth flow so that it's so friendly with beginners.
at this point i done every single exercise of this chapter.