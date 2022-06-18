/****************************************************
TC1030 - Equipo 8
Proyecto Integrador
InvalidOptionException.cpp
*****************************************************/

#include "InvalidOptionException.hpp"

const char * InvalidOptionException::what() {
    return "Exception: InvalidOptionException";
}

std::string InvalidOptionException::message(int _attempts) {
    if (_attempts < 5) {
        return "Invalid option, please press C to continue next turn or E to end the game";
    } else {
        return "Invalid menu choice exceeded";
    }
}