# Day 14
> [!note] What is an Object?
> C++ programmers tend to be cavalier in their use of the term object. Most
> generally, an object is a region of memory that can contain data and has a
> type.
> 	Some use the term object only to refer to variables or values of class types.
> Others distinguish between named and unnamed objects, using the term
> variable to refer to named objects. Still others distinguish between objects
> and values, using the term object for data that can be changed by the
> program and the term value for data that are read-only.

## initialers
when an object gets initialized it has a specific starter value in the moment that its created.
An initialer could be either a simple value or some complicated expression.
the moment that we define and initial an object(variable) it gets visible instantly thus C++ let us do something like this:
`int a = 0 , b = a , c = b`
in a single line we define 3 variable and split them by ( , ) and the moment we wrote `a = 0`
it gets visible to program and we can assign that variable to other variables but careful that you initial the variable in the right order.

> [!warning] Initialization is not assignment
> Initialization happens when a variable is given
> a value when it is created. Assignment obliterates an object’s current value
> and replaces that value with a new one.
## List initialization

c++ let us to define a variable int this four ways:
```
int units_sold = 0; regular way
int unit_sold = {0}; curly brackets
int units_sold{0}; curly brackets + no =
int units_sold(0);
```
**why its called List Initialization?**
in new version of c++ we can use curly brackets for initialize its a new feature.
before that we could restrictedly use curly brackets (e.g initializing an array)
now you can use {} almost anywhere.

### List initialization stops losing data
when we use {} for initing(shorter for initializing) the compiler gets Strict.
```
long double ld = 3.1415926536; 
int a{ld}, b = {ld}; // error: narrowing conversion required 
int c(ld), d = ld; // ok: but value will be truncated
```
why `a` and `b` returns an error?
because we're trying to initialize a `long double` type with `int` and this mean we are losing part of the data (the Decimal part)

and this error that stop us from doing such thing is called "Narrowing Conversion":
it occurs when trying to convert a larger/specificer value type into smaller type and cause data loss.