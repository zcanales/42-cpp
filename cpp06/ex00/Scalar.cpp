/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcanales <zcanales@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:22:45 by zcanales          #+#    #+#             */
/*   Updated: 2022/02/24 14:22:46 by zcanales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"
#include <iostream>
#include <cstdlib>
#include <limits>
#include <iomanip>
// ************************************************************************** //
//                    		 Constuctor/Destructor                            //
// ************************************************************************** //
Scalar::Scalar(void)  {
   init();
    std::cout << "(ScalarConv) default constructor called" << std::endl;
}

Scalar::Scalar(std::string input) : _input(input), _len(input.length()) {
   init();
    std::cout << "(ScalarConv) parameter constructor called" << std::endl;
}

Scalar::~Scalar(void){
    std::cout << "(ScalarConv) default destructor called" << std::endl;
}
void Scalar::init(void)
{
   _type = "Unknown";
   _idxDecimal = 0;
   _idxFloat = 0;
   _idxNumber = 0;
   _idxNegative = 0;
   _idxPositive = 0;
}
// ************************************************************************** //
//                    		Getters                                             //
// ************************************************************************** //
std::string Scalar::getType(void) const{
   return(_type);
}
// ************************************************************************** //
//                    		Overload                                           //
// ************************************************************************** //
Scalar &Scalar::operator=(Scalar const & raw){
	std::cout << "Assignation operator called" << std::endl;
   if (this != &raw)
   {
      _type = raw._type;
      _input = raw._input;
      _len = raw._len;
      _idxDecimal = raw._idxDecimal;
      _idxFloat = raw._idxFloat;
      _idxNumber = raw._idxNumber;
      _idxNegative = raw._idxNegative;
      _idxPositive = raw._idxPositive;
   }
	return (*this);
};
std::ostream & operator<<(std::ostream &o, Scalar const &rhs){
   o << "Input type: " << rhs.getType() << std::endl;
   return (o);
}

// ************************************************************************** //
//                    		 FindType                                          //
// ************************************************************************** //


void Scalar::findSpecialCommands()
{
   std::string array [8] = {"nan", "nanf", "inf", "+inf", "-inf", "+inff", "-inff", "inff"};
   int i;

   i = -1;
   while (++i < 8)
   {
     if (!_input.compare(array[i]))
         _type = array[i];
   }
}
void Scalar::findLimit(){
   int long lg;

   lg = std::atol(_input.c_str());
   if (lg >  std::numeric_limits<int>::max() || lg < std::numeric_limits<int>::min())
      _type = "impossible";

}

void Scalar::sortType()
{
   if (_type == "impossible")
      _type = "impossible";
   else if (_idxNumber == 0 && _len == 1)
      _type = "char";
   else if (_idxDecimal == 0)
      _type = "int";
   else if (_idxDecimal == 1 && !_idxFloat)
      _type = "double";
   else if (_idxDecimal == 1  && _idxFloat == 1)
      _type = "float";
   else 
      _type = "impossible";
   findSpecialCommands();
   if (_type == "int" || _type == "float" || _type == "double")
      findLimit();
}
void Scalar::checkImposibleConvertion(){
   int myLen;

   myLen = _idxNumber + _idxDecimal + _idxFloat +_idxNegative + _idxPositive;
   if (_idxNegative || _idxPositive)
   {
      if (_input.find("-") != 0 && _input.find("+") != 0) 
            _type = "impossible";
      else if (_idxNegative > 1 || _idxPositive > 1)
            _type = "impossible";
      else if ((_idxPositive +  _idxNegative) > 1)
            _type = "impossible";
   }
   if (_idxFloat)
   {
       if (!_idxDecimal && _len != 1)
            _type = "impossible";
       else if (_input.find("f") != (_input.length() - 1))
            _type = "impossible";
   }
   if (myLen != _len && _len > 1)
            _type = "impossible";
}

void Scalar::findChar(std::string s , int *idx, std::string input)
{
   int pos;
   pos = -1;
   while (std::string::npos != input.find(s, ++pos))
   {
      pos = input.find(s,pos);
      *idx += 1;
   }
}
void Scalar::typeSearch()
{
   int i = -1;
   std::string array_number[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
   while (++i < 10)
      findChar(array_number[i], &_idxNumber, _input);
   findChar("f", &_idxFloat, _input);
   findChar(".", &_idxDecimal, _input);
   findChar("-", &_idxNegative, _input);
   findChar("+", &_idxPositive, _input);
   checkImposibleConvertion();
   sortType();
}

// ************************************************************************** //
//                    		 CONVERT TYPE                                      //
// ************************************************************************** //
void Scalar::convertFromChar()
{
   char ch = _input[0];

   std::cout << "Char: "  << "'" << static_cast<char>(ch)  << "'" << std::endl;
   std::cout << "Int: " << static_cast<int>(ch) << std::endl;
   std::cout << "Float: " << static_cast<float>(ch) << ".0f" << std::endl;
   std::cout << "Double: " << static_cast<double>(ch) << ".0" <<std::endl;
}

void Scalar::convertFromInt(){
   int in =  std::atoi(_input.c_str());
   if ((in >= 0 && in < 32) || in == 127)
      std::cout << "Char: " << "Non displayable" <<std::endl;
   else if (in < 0 || in > 127)
      std::cout << "Char: " << "impossible" <<std::endl;
   else
      std::cout << "Char: " << "'" << static_cast<char>(in) << "'" <<std::endl;

   std::cout << "Int: " << static_cast<int>(in) << std::endl;
   std::cout << "Float: " << static_cast<float>(in)  << "." << std::setfill ('0') << std::setw (2) << "f" << std::endl; 
   std::cout << "Double: " << static_cast<double>(in) << ".0" <<std::endl;
}

void Scalar::convertFromFloat(){
   float fl =  std::stof(_input.c_str());
   if ((fl >= 0 && fl < 32) || fl == 127)
      std::cout << "Char: " << "Non displayable" <<std::endl;
   else if (fl < 0 || fl > 127)
      std::cout << "Char: " << "impossible" <<std::endl;
   else
      std::cout << "Char: " << "'" << static_cast<char>(fl) << "'" <<std::endl;
   std::cout << "Int: " << static_cast<int>(fl) << std::endl;
    if (_input.find(".f") == _input.length() - 2)
    {
      
       std::cout << "Float: " << static_cast<float>(fl) << ".0f" << std::endl;
      std::cout << "Double: " << static_cast<double>(fl) << ".0" << std::endl;
    }
    else
    {
      std::string sub = _input.substr(_input.find(".") + 1, _input.length() - 1);
      int idxZero = 0;
      findChar("0", &idxZero, sub);
      if (static_cast<unsigned int>(idxZero) == sub.size() - 1)
      {
         std::cout << "Float: " << static_cast<float>(fl) << ".0f" <<std::endl;
         std::cout << "Double: " << static_cast<double>(fl) << ".0" <<std::endl;
      }
      else
      {
         std::cout << "Float: " << static_cast<float>(fl) << "f" <<std::endl;
         std::cout << "Double: " << static_cast<double>(fl) << std::endl;
      }
      

    }
}
void Scalar::convertFromDouble(){
   double db =  std::stod(_input.c_str());
   if ((db >= 0 && db < 32) || db == 127)
      std::cout << "Char: " << "Non displayable" <<std::endl;
   else if (db < 0 || db > 127)
      std::cout << "Char: " << "impossible" <<std::endl;
   else
      std::cout << "Char: " << "'" << static_cast<char>(db) << "'" <<std::endl;

   std::cout << "Int: " << static_cast<int>(db) << std::endl;
   if (_input.find(".") == _input.length() - 1)
   {
   
      std::cout << "Float: " << static_cast<float>(db)  << ".0f" << std::endl;
      std::cout << "Double: " << static_cast<double>(db) << ".0" << std::endl;
   }
   else 
   {
      std::string sub = _input.substr(_input.find(".") + 1, _input.length());
      int idxZero = 0;
      findChar("0", &idxZero, sub);
      if (static_cast<unsigned int>(idxZero) == sub.size() )
      {
         std::cout << "Float: " << static_cast<float>(db) << ".0f" <<std::endl;
         std::cout << "Double: " << static_cast<double>(db) << ".0" <<std::endl;
      }
      else
      {
         std::cout << "Float: " << static_cast<float>(db)  << "f" << std::endl;
         std::cout << "Double: " << static_cast<double>(db) << std::endl;
      }
   }     
}
void Scalar::convertFromSpecial(){
  std::cout << "Char: " << "impossible" << std::endl;
  std::cout << "Int: " << "impossible" << std::endl;
  if (_type == "nan" || _type == "nanf")
  {
      std::cout << "Float: " << "nanf" << std::endl;
      std::cout << "Double: " << "nan" << std::endl;
  }
  else if (_type[_type.length() - 1] == 'f' && _type[_type.length() - 2] == 'f')
  {
      std::cout << "Float: " << _type << std::endl;
      std::cout << "Double: " << _type.substr(0, _type.length() - 1 ) << std::endl;
  }
  else
  {
      std::cout << "Float: " << _type << "f" << std::endl;
      std::cout << "Double: " << _type << std::endl;
  }
}
void Scalar::convertType(void){
   if (_type == "char")
      convertFromChar();
   else if (_type == "int")
      convertFromInt();
   else if (_type == "float")
      convertFromFloat();
   else if (_type == "double")
      convertFromDouble();
   else if (_type == "impossible")
   { 
      std::cout << "Char: " << "impossible" << std::endl;
      std::cout << "Int: " << "impossible" << std::endl;
      std::cout << "Float: " << "impossible" << std::endl;
      std::cout << "Double: " << "impossible" << std::endl; 
   }
   else
      convertFromSpecial();
}