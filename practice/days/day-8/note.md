# Day 8

after introducing classes ; the book is using `Sales_item.h` to show how to use classes.
> [!warning] class
> in chapter 1 of primer book we learn how to use a class not creating it. for doing that we need to reach chapter 7 to have requirement information and not be confused!

the purpose of the `Sales_item` class is to represent the total revenue , number of copies sold and average sales price for a book.

> [!important] Classes Define Behavior
> the author of the Sales_item class defines all the actions that can be
performed by objects of this class. That is, the Sales_item class defines
what happens when a Sales_item object is created and what happens
when the assignment, addition, or the input and output operators are applied
to Sales_items.
In general, the class author determines all the operations that can be used
on objects of the class type

for example :
- Use the input (>>) and output (<<) operators to read and write objects of type
`Sales_item`
- Use the assignment operator (=) to assign one `Sales_item` object to another.
- Use the addition operator (+) to add two Sales_item objects. The two objects
must refer to the same ISBN. The result is a new Sales_item object whose ISBN
is that of its operands and whose number sold and revenue are the sum of the
corresponding values in its operands.
-  Use the compound assignment operator (+=) to add one `Sales_item` object
into another.


this program is reading the ISBN , numbers of copies sold and sales price and then if we print our object it returns ISBN , numbers of copies sold, total revenue and average price:
```
int main()
{
Sales_item book;

std::cin >> book;

std::cout << book << std::endl;
return 0;
}
```

if we enter the input something like : `0-201-70353-X 4 24.99`
the output will be : `0-201-70353-X 4 99.96 24.99`
in simple way the input is ISBN(`0-201-70353-X`) copies sold(4) and sales price(24.99)
