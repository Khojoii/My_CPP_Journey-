# Day 7

## classes
***data structure*** : A logical grouping of data and operations on that data.
In C++ we define our own data structures by defining a class.

To use a class we need to know three things:
• What is its name?
• Where is it defined?
• What operations does it support?

> [!example] header
> for example : we created a class called `Sales_item`
> and we can use it with the header in out programm just like how we use iostream :
>  `#include "Sales_item.h"`


types of costume suffix for headers:
- `.h` : most common suffix
- `.H` : some programmers uses
- `.hpp` : for modern projects
- `.hxx` : less common
- no suffix : for standard libraries (e.g `<iostream>` or `<vector>`)

### class types
every class defines a type and the type must be the same name as the name of class.
then we can define a variable of a class type : `Sales_item item;`
like we say "item is an object of type `Sales_item`"
