#ifndef CSVEXEPTION_H
#define CSVEXEPTION_H
#include <iostream>
#include <string>
#include "exception"

class CSVExeption: public std::exception
{
public:
    CSVExeption(int str_err);
};


#endif // CSVEXEPTION_H
