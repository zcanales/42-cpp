#include <iostream>
#include <string>
#include "Scalar.hpp"



int main(int argc, char** argv){
   
   if (argc == 2)
   {
      Scalar a(argv[1]);
      a.typeSearch();
      a.convertType();
   }
    else
      std::cout << "Incorrect argument: [./program][argument]"  << std::endl;

 return (0);   
}