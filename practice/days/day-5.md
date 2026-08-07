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

1. **initial statement** is executed (one time) before the execution of the code block.

2. **condition** defines the condition for executing the code block.

3. **expression** is executed (every time) after the code block has been executed.

here is a for loop that will print the numbers 0 to 4:
```
for (int i = 0; i < 5; i++) {  
  cout << i << "\n";  
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
