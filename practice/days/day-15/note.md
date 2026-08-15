# Day 15

## Separate Compilation

c++ supports a concept called **Separate Compilation** and it means that you can have separate files to run your main program like `main.cpp` `data_loader.cpp` `model.cpp`.
this is might be useless for simple programs but if we encounter a huge codebase or want to create a project we'll need to use this concept.

> [!important] When we separate a program into multiple files, we need a way to share code across those files
> `std::cout` that we use is defined in standard library somewhere else. but we can use them in our program.
> how the file knows what `std::cout` means?
> 

# Variable Declarations and Definitions
To support Separate Compilation c++ distinguishes between "declarations" and "definitions":
- A declaration makes a name known to the program.
- A definition creates the associated entity and allocates specific storage.
to declare a variable and not defining it , we use `extern` keyword and not provide an initializer:
```
extern int i; // declares but does not define i
int j; // declares and defines j
```
> [!note] note
> Any declaration that includes an explicit initializer is a definition:
> `extern double pi = 3.1416; // definition`

# Conventions for Variable Names

these are 4 rules that the book  suggested to have better identifier:
- An identifier should give some indication of its meaning.
- Variable names normally are lowercase :index, not Index or INDEX.
- Like Sales_item, classes we define usually begin with an uppercase letter.
- Identifiers with multiple words should visually distinguish each word, for
	example, student_loan or studentLoan, not studentloan.


# Scope
a Scope is a zone that names has a particular meaning and outside the scope that name either is not exists or referred to something different. 

> [!note] note
> The same name can refer to different entities in different scopes.

a scope is created by curly braces`{}` 



```
#include <iostream>

int main()
{
    int sum = 0;
    // sum values from 1 through 10 inclusive
    for (int val = 1; val <= 10; ++val)
        sum += val;   // equivalent to sum = sum + val
    std::cout << "Sum of 1 to 10 inclusive is "
              << sum << std::endl;
    return 0;
}
```

in this code above you see there is 3 names defined : `main` , `sum` and `val`.
- The name `main` is defined outside any curly braces. The name `main` like most
	names defined outside a function—has global scope.
- The name `sum` is defined within   the scope of the block that is the body of the main function.       It is accessible from its point of declaration throughout the rest of the main function but not      outside of it.****
- The variable `sum` has block scope. The name `val` is defined in the scope of the for
	statement. It can be used in that statement but not elsewhere in main.


## Nested Scopes
scopes can contain other scopes. The contained (or nested) scope is referred to as an `inner scope`, the containing scope is the `outer scope`.
 we can redefine Names that was defined in outer scopes in inner scopes and inner name will hide the same outer name.

```
#include <iostream>
int reused = 42;   // reused has global scope

int main()
{
    int unique = 0;   // unique has block scope
    
    // output #1: uses global reused; prints 42 0
    std::cout << reused << " " << unique << std::endl;
    
    int reused = 0;   // new, local object named reused hides global reused
    
    // output #2: uses local reused; prints 0 0
    std::cout << reused << " " << unique << std::endl;
    
    // output #3: explicitly requests the global reused; prints 42 0
    std::cout << ::reused << " " << unique << std::endl;
    
    return 0;
}
```
 the #3 output is using scope operator `(::)` when the left hand of the scope operator is empty it's a request to fetch the right hand name from the global scope.
 > [!warning] warning
> the book says : It is almost always a bad idea to define a local variable with the same name
> as a global variable that the function uses or might use.
