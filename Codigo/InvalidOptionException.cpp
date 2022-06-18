/****************************************************
TC1030 - Equipo 8
Proyecto Integrador
InvalidOptionException.cpp
*****************************************************/

#include "InvalidOptionException.hpp"

const char * InvalidOptionException::what() {
    return "Exception: InvalidOptionException";
}

std::string InvalidOptionException::message() {
    return "Opción inválida";
}