#include <iostream>
#include "sstream"
#include "cstdio"

int main() {
    std::string whole_part, fractional_part, number;
    char buf[100];
    std::stringstream ar;
    std::cout << "Input whole part of number:" ;
    std::cin>> whole_part;
    std::cout << "Input fractional part of number:" ;
    std::cin>> fractional_part;
    number=whole_part +"." + fractional_part;
    double result = std::stod(number);
    std::sprintf(buf, "Result: %.10lf\n", result);
    std::cout <<buf <<std::endl;
}
