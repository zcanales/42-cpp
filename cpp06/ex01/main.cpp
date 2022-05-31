#include <iostream>
#include <string>
#include "Data.hpp"

int main(int argc, char **argv){

   (void)argv; 
   if (argc > 1)
      std::cout << "Thank you for the parameters but I don't need them 😜" << std::endl;
   Data *getConversion;
   uintptr_t raw; 

   std::cout << "------ [1️⃣]TEST - STRING CONVERSION ------" << std::endl;
   std::string s = "hola";
   Data *ptr = new Data(s);

   std::cout << "Before serialize: " << ptr->getDataString() << std::endl;
   raw = serialize(ptr);
   std::cout << "After serialize: " << raw << std::endl;   
   getConversion = deserialize(raw);
   std::cout << "After deserialize: " << getConversion->getDataString() << std::endl;
   delete ptr;

   std::cout << "------ [2️⃣]TEST - BOOL CONVERSION ------" << std::endl;
   ptr = new Data(true);

   std::cout << "Before serialize: " << ptr->getDataBool() << std::endl;
   raw = serialize(ptr);
   std::cout << "After serialize: " << raw << std::endl;   
   getConversion = deserialize(raw);
   
   std::cout << "After deserialize: " << getConversion->getDataBool() << std::endl;
   delete ptr;

   std::cout << "------ [2️⃣]TEST - INT CONVERSION ------" << std::endl;
   ptr = new Data(42);
   std::cout << "STATIC: " << "'" << static_cast<bool>(ptr->getDataInt()) << "'" <<std::endl;

   std::cout << "Before serialize: " << ptr->getDataInt() << std::endl;
   raw = serialize(ptr);
   std::cout << "After serialize: " << raw << std::endl;   
   getConversion = deserialize(raw);
   std::cout << "After deserialize: " << getConversion->getDataInt() << std::endl;
   delete ptr;
   


 return (0);   
}