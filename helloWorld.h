#include <iostream>
#include <string>

int main()
{
  std::string hw = "Hello World!";
  std::cout << "Hello World!" << std::endl;
  //std::cout << "Bye!" << std::endl;
  int i = 0;
  for ( char & c : hw ) {
	  i++;
  }
  std::cout << hw << "has " << i << " characters" << std::endl;
  return 1;
}
