/****************************************************
TC1030 - Equipo 8
Proyecto Integrador
InvalidOptionException.hpp
*****************************************************/

#ifndef InvalidOptionException_hpp
#define InvalidOptionException_hpp

#include <iostream>


class InvalidOptionException: public std::exception {
  public:
    const char * what();
    std::string message(int _attempts);
};

#endif /* InvalidOptionException_hpp */