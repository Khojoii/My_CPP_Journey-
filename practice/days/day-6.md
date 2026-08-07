# Day 6

## *if / else* statement
Like most languages, C++ provides an if statement that supports conditional
execution.
### *if* structure
```
if (_condition_) 
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
