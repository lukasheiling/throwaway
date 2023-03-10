#include <iostream>
#include <test.hpp>

int main(int argc, char ** argv) {
    std::cout << "2 equals 2 is " << equals(2,2) << std::endl;

    std::cout << "2 nonequals 2 is " << nonequals(2,2) << std::endl;
}