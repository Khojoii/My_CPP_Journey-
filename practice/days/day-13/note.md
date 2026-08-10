# Day 13

# Literals

a value like 42 , x ,y is known as a Literal.
every literal has a type and .the form and the way that written is determine its type.
c++ let us to write "20" in 3 ways:
`20 -> decimal`
`024 -> octal`
`0x14 -> Hexadecimal`
and each of this 3 ways is representing the literal 20.

- Decimal Literals are always `signed`
- Octal/Hex literals can be either `signed` or `Unsigned`
- no literal can be `short` directly
- if the number is larger than the biggest type like `long long` the compiler will return an error

## Character and string Literals
here is an example:
```
'a'  //character Literal(single quotation )
"hello world!" //string Literal(double quotation check)
```

for a single character we use single quotation and for **zero** or more  characters we use double quotation  and its called "String".

> [!info] String
> a String is an array of constant `char`s
> The compiler appends a null character "(\0)" to every string literal.
> so the size of a string is one more than the characters in string.
> the string "A" is an array of two characters


## Escape sequences

some characters like backspace, return, control keys .... are  nonprintable.
unlike nonprintable characters , characters like quotations , back slash and question mark has special meaning.
we can not use these directly. instead we use an escape sequence to represent them.

newline : \n
vertical tap \v
backslash : \\\
carriage return : \r
horizontal tab : \t
backspace : \b
question mark : \\?
formfeed : \f
alert(bell) : \a
double quote : \\"
single quote : \\'

