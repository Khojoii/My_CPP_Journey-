# types (again!!!)

we know that a type defines identity of variable and what operations can we do with it.
c++ has two kind of type:
1. Primitive/Built-in types : this type is defined by c++ itself like (int,char,float,double and so on)
2. Custome types : c++ allows you to define your own type like `Sales_item` in previous notes. the standard library (std) is also using custom types term to build custom types like : string or vector ....

## Primitive types
primitive types has to kinds:
1. Arithmetic types:
	- characters like `char`
	- integers like `int`,`long`,`short`
	- boolean types like `bool`
	- floating-point numbers like `float`,`double`
2. special type : **void**
	- the `void` type has no associated value (that means you can't create a `void` type variable)
	- they usually used for functions that doesn't need to return anything

## Arithmetic types Table

| Types                        | Meaning                          | Minimum Size          |
| ---------------------------- | -------------------------------- | --------------------- |
| bool                         | boolean                          | NA                    |
| char                         | character                        | 8 bits                |
| wchar_t                      | wide character                   | 16 bits               |
| char16_t                     | Unicoe character                 | 16 bits               |
| char32_t                     | Unicode character                | 32 bits               |
| short                        | short integer                    | 16 bits               |
| long                         | long integer                     | 32 bits               |
| long long                    | (more) long integer              | 64 bits               |
| float                        | single-precision floating-point  | 6 significant digits  |
| double                       | double-precision floatin-point   | 10 significant digits |
| <center>long double</center> | extened-precision floating-point | 10 significant digits |

the bool type is just represent : `true` or `false`


## How computer stores the data
in the lowest level of computer; everything is just zeroes and ones like :100001011101011
the smallest measurable memory unit is `bit` and the smallest memory unit that can be addressed is byte which is 8 bit (in most machines).
> [!tip] "word" unit
> CPU is designed to proccess the data chunk by chunk (not bit by bit)
> so the "word" contains few bytes and word is the base unit that CPU works with.


on a 32-bit system word is 4 bytes
on a 64-bit system word is 8 bytes
## Signed and Unsigned Types
Except for bool and the extended character types , the integral types may be signed or unsigned(they are signed by default).
a signed type can contain negative and positive numbers including zero but an unsigned type can only contain greater than or equal numbers to zero.
we can represent a type as unsigned by `unsigned type-name` (e.g `unsigned int a = 2`)

## Deciding which Type to Use
C++/C is designed to let the programmer get close to hardware and memory.
sometimes it can get confusing and complex to decide to use which data type.
the advise that the book gives is: " **Most programmers can (and should) ignore these
complexities by restricting the types they use** "
a few rules that can be useful:
- Use an unsigned type when you know that the values cannot be negative.
- Use int for integer arithmetic. short is usually too small and, in practice,
	long often has the same size as int. If your data values are larger than
	the minimum guaranteed size of an int, then use long long.
- Do not use plain char or bool in arithmetic expressions. Use them only to
	hold characters or truth values. Computations using char are especially
	problematic because char is signed on some machines and unsigned on
	others. If you need a tiny integer, explicitly specify either signed char or
	unsigned char.
- Use double for floating-point computations; float usually does not have
	enough precision, and the cost of double-precision calculations versus
	single-precision is negligible. In fact, on some machines, double-precision
	operations are faster than single. The precision offered by long double
	usually is unnecessary and often entails considerable run-time cost.