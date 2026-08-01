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