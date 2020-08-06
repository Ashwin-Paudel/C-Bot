// By: Searche Developers

#include <iostream>
#include <string>


int
main ()
{
  std::string name;
  std::string lastname;
  std::string middlename;

  std::cout << "What is your first name? ";
  getline (std::cin, name);
  std::cout << "Hello, " << name << "!\n";

  std::cout << "What is your middle name? ";
  getline (std::cin, middlename);
  if (middlename == "nil")
    {
    middlename = "Debbi";
        
    }
  else
    {

    }
  std::cout << "Hello, " << name << " " << middlename << "!\n";
  std::cout << "What is your last name? ";
  getline (std::cin, lastname);
  std::
    cout << "Hello, " << name << " " << middlename << " " << lastname <<
    "!\n";
}
