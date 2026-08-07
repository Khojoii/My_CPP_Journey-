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
