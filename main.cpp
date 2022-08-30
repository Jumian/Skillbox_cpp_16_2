#include <iostream>
#include "sstream"

int main() {
    std::string whole_part, fractional_part, number;
    std::stringstream ar;
    std::cout << "Input whole part of number:" ;
    std::cin>> whole_part;
    std::cout << "Input fractional part of number:" ;
    std::cin>> fractional_part;
    number=whole_part +"." + fractional_part;
    double result = std::stod(number);
    ar << result;
    std::cout <<ar.str() <<std::endl;
}
