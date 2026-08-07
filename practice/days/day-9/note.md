# Day 9

## Member function
we can't add two books with different ISBN so before we process the input data we must validate the item's ISBNs:
```
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
```

in this code we validate the isbn by "comparing the isbn member of item1 & item2 objects with .(dot) operator".


> [!note] Member Function
> A member function is a functions that defined part of the class and sometimes they referred to as methods.

## dot " . " operator
this operator can be used only for class types.
`item1.isbn()   -> name_of_object . class_member_name ()` this code will call and give access to isbn function of item1 which.

## Call "()" Operator
we call a function with "()" the call operator is pair of parenthesis that enclosed a (possibly empty) list of arguments. we can call isbn function by `item.isbn()` to return the isbn value of it
