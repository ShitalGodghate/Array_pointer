#include <iostream>

using namespace std;

int
main ()
{

  int num[4];
  std::cout << "Enter elements: ";
  
  for (int i = 0; i <= 4; i++)
      std::cin >> num[i];
    
  std::cout << "You entered: ";
  for (int i = 0; i <= 4; i++)
      std::cout << *(num+i) << "\n";
}
