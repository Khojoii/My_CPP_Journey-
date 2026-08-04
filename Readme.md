---
Author: M.Khojoii
---

> [!important] Functions
> Every C++ program contains one or more functions, one of which must be named
> main. The operating system runs a C++ program by calling main.


# function structure
1. return type
2. function name 
3. parameter (probably empty enclosed in parentheses)
4. function body

here is a simple function that do nothing but returning a value to OS

~~~
int main()
{
	return 0;
}
~~~
***return*** is a statement that terminate the function and pass the given value 

> [!note] semicolon
> Note the semicolon at the end of the return statement. Semicolons mark
> the end of most statements in C++. They are easy to overlook but, when
> forgotten, can lead to mysterious compiler error messages.

# types
types or data types are one of the most important concepts of every programming language
a type define 2 things:
1. the content of a data 
2. the operations that can be done with that data
these are the important types of c++:

| int    | stores integers (whole numbers), without decimals, such as 123 or -123                    |
| ------ | ----------------------------------------------------------------------------------------- |
| double | stores floating point numbers, with decimals, such as 19.99 or -19.99                     |
| char   | stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes |
| string | stores text, such as "Hello World". String values are surrounded by double quotes         |
| bool   | stores values with two states: true or false                                              |

## Variables
the data that we work with in a program are stored in variables and every variable has a type
here is how to define a variable: type -> var name -> = -> value
``int my_number = 222;``
# executing c++ program
c++ is a compiler language . it means that the code that we write must be compile in a language that the computer understands.
because of that we need to download a compiler like GCC

# Day03

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
**output :**
```
adding 2 numbers
enter the first number: 12345
enter the second number: 54321
the sum of 12345 and 54321 is : 66666
```

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

# Day 4

# flow control
in normal programs , statements will be executed sequntially that means the first statement of the code will be executed first and the second and so on. 
there is a concept called flow control that provide us to run statements diffrently.
## *While* statement
the while statement is a loop that runs until the given condition is becoming true.
### *while* structure
```
while (condition)
{
statement
}
```
here is a program that sum the numbers from 1 through the given number  inclusive:
```
#include <iostream>

int main(){
  int counter = 1;
  int result = 0;
  int repeat = 0;

  std::cout << "how many numbers do you want to sum up:" <<std::endl;
  std::cin >> repeat;

  while (counter <= repeat) //*loop is running until the counter is less-equle to the given number by user
  {
    std::cout <<result << " + " << counter << " = " << result+counter <<std::endl;
    result += counter;
    counter ++;
  }

  std::cout << "the sum of numbers 1 to " << repeat <<" is : " << result << std::endl;
}
```

# Day 5

## *for* statement
in *while* loop we must define a counter variable to control how many time or until when we want the loop to execute. this pattern is used so often that the language is offering an other statement called *for loop*.
### *for loop* structure
```
for (initial statement ; condition; expression)
{
	body code
}
```

1. **initial statement** is executed (one time) before the execution of the code block.

2. **condition** defines the condition for executing the code block.

3. **expression** is executed (every time) after the code block has been executed.

here is a for loop that will print the numbers 0 to 4:
```
for (int i = 0; i < 5; i++) {  
  cout << i << "\n";  
}
```

> [!hint] fun fact
> i just found out that if a body of a loop or "if statement"
> contains only one statement; you can remove the curly-brackets like this:
> ```
> for (int val = 1; val <= 10; ++val) 
> 	sum += val;
> ```
> (but it's not a good idea)


##  Difference Between for Loop and while Loop

| for Loop                                                                | while Loop                                                                   |
| ----------------------------------------------------------------------- | ---------------------------------------------------------------------------- |
| Initialization may be either in the loop statement or outside the loop. | Initialization is always outside the loop.                                   |
| Once the statement(s) is executed then increment is done.               | The increment can be done before or after the execution of the statement(s). |
| It is normally used when the number of iterations is known.             | It is normally used when the number of iterations is unknown.                |
| Condition is a relational expression.                                   | The condition may be an expression or non-zero value.                        |
| It is used when initialization and updation of conditions are simple.   | It is used for complex initialization.                                       |
| For loop is entry controlled loop.                                      | While loop is also entry controlled loop.                                    |
| The for loop is used when the number of iterations is known.            | The while loop is used when the number of iterations is unknown.             |
# Day 6

## *if / else* statement
Like most languages, C++ provides an if statement that supports conditional
execution.
### *if* structure
```
if (_condition_) 
{  
  // block of code to be executed if the condition is true
}
```


> [!example] Example
> ```
> int x = 20;
> int y = 18;
> if (x > y) // this will check if x is greater than y
> {
> 	cout << "x is greater than y";
> }
> ```
>

> [!warning] Warning
> C++ uses = for assignment and == for equality. Both operators can appear
> inside a condition. It is a common mistake to write = when you mean ==
> inside a condition.

#### *else*
the condition in *if* is not always true sometimes the condition is not goin to be true
when we are in this situation we use *else* and write a code block to execute when the if condition is not true.

> [!example] Example
> ```
> int x = 20;
> int y = 18;
> if (x > y) // this will check if x is greater than y
> {
> 	cout << "x is greater than y";
> }
> else
> {
> 	cout << "y is greater than x";
> }
> ```


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