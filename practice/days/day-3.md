# Day 3

> [!info] Input / Output
> for defin any IO in c++ there is no built in statements 
> instead C++ use `#include <iostream>`

iostream is a standard library that provides 2 streams:
- input stream (istream)
- output stream (ostream)
A stream is a sequence of characters read from or
written to an IO device. The term stream is intended to suggest that the characters
are generated, or consumed, sequentially over time.

## iostream objects
this library has 4 objects to define :
1. cin -> for input (standard input)
2. cout -> for output (standard output)
3. cerr -> for warning and error messages 
4. clog -> for showing the general information of program

here is a simple program that adds up 2 given numbers:

```
#include <iostream>
int main(){
    std::cout << "adding 2 numbers"<< std::endl;
    int n1 = 0;
    int n2 = 0;
    std::cout << "enter the first number: " ;
    std::cin >> n1;
    std::cout << "enter the second number: " ;
    std::cin >> n2;
    std::cout << "the sum of " <<n1 << " and " << n2 << " is : " << n1+n2 << std::endl ;
}
```

- with `cout << "value"` we print the value in window
- `std::endl` is a special value called ***manipulator*** its for ending the line so that the user can not type any thing in front of this line
- and `cin >> variable` is receiving a value from user and store it into the variable (in this case n1 and n2)

## namespace
Namespaces allow us to avoid
inadvertent collisions between the names we define and uses of those same names
inside a library. All the names defined by the standard library are in the std
namespace.

> [!note] std
> The prefix `std::` indicates that the names cout and endl
> are defined inside the namespace named std

# comments
Comments help the human readers of our programs. They are typically
used to summarize an algorithm, identify the purpose of a variable, or clarify an
otherwise obscure segment of code. The compiler ignores comments, so they have no
effect on the program’s behavior or performance.

## Kinds of comments in C++
- single-line and paired : //
- multiple-lines comment : using /* and  */  the compiler ignores all the content between
