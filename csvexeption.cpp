#include "csvexeption.h"

CSVExeption::CSVExeption(int str_err)
{
    std::cout << "Error occured at line" << str_err << std::endl;
    std::cout << "Reopen" << std::endl;
}
