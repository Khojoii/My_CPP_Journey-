# Day 17
# Pointers
A pointer is a compound type that "points to" another **type** .
here are some notes about pointer:
- Like references, pointers are used to indirect access to other object. 
- But unlike references pointers are known as an object.
- Pointers can be copied and assigned.
- pointers can be defined uninitialized.
- pointers can point to several different object in their lifetime.

> [!warning] warning
> the book warned us that be careful when we dealing with pointers because : *"Debugging problems due to pointer* *errors bedevil even experienced programmers."*
## How to define
we can define a pointer by adding the "`*`" before the name and The `*` must be repeated for each pointer variable:
```
int *ip1, *ip2; // both ip1 and ip2 are pointers to int
double dp, *dp2; // dp2 is a pointer to double; dp is a double
```
## Pointers holds address
a pointer can hold the address of the object that is "pointing to" with `&`(address-of operator):
```
int ival = 42;
int *p = &ival; // p holds the address of ival; p is a pointer to ival
```

in this code above we define a pointer named `p` and point it to `int` and initialize it to int object named ival.

> [!note] note
> the pointer and the object that it's pointing to , must have the same type
> ```
double dval;
double *pd = &dval; // ok: initializer is the address of a double
double *pd2 = pd; // ok: initializer is a pointer to double
int *pi = pd; // error: types of pi and pd differ
pi = &dval; // error: assigning the address of a double to a pointer to int
> ```
