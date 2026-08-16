#include <iostream>

int main ()
{
    int *p1 , *p2;
    double v3 , *p3;
    int ival = 42;
    int *ival_pointer = &ival; // ival_pointer holds the address of ival; ival_pointer is a pointer to ival
    double dval;
    double *pd = &dval; // ok: initializer is the address of a double
    double *pd2 = pd; // ok: initializer is a pointer to double
    int *pi = pd; // error: types of pi and pd differ
    pi = &dval; // error: assigning the address of a double to a pointer to int

}