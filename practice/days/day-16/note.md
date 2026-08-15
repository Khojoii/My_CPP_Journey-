# Day 16

## Compound Types

A compound type is a type that is defined in terms of another type.
compound types are more complicated than a simple base type- declarator declaration.
the declaration i've seen so far have declarators that are just variable names.

### References
A reference defines an alternative name for an object.

the reference type “refers to” another type.

#### Reference structure

we declare a reference by adding the `&` before the name that we are declaring:
```
int ival = 1024;
int &refVal = ival; // refVal refers to (is another name for) ival
int &refVal2; // error: a reference must be initialized
```

> [!note] Note
> A reference is not an object. Instead, a reference is just another name for an
> already existing object.

after we defined the reference all the operation we do with the reference , Actually we do with the main value:

```
#include <iostream>
int main()
{

    int a = 10;
    std::cout << "the Value of a is : " << a << std::endl; // output is 10

    int &aRef = a;
    std::cout << "the Value of aRef is : " << aRef << std::endl; // output is 10

    aRef = 1;
  

    std::cout << "we reassigne the Value of aRef so now it's  : " << aRef << std::endl; // output is 1

     std::cout << "after we reassgine the aRef here is the value of a  : " << a << std::endl; // output is 1

}
```


> [!warning] warning
> the type of the reference and the main object must be the same.
> and we can assign reference to only **objects** not to a literal or else.

```
int &refVal4 = 10; // error: initializer must be an object
double dval = 3.14;
int &refVal5 = dval; // error: initializer must be an int object
```
