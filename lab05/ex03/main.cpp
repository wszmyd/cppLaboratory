#include <iostream>
#include "ComplexNumber.hpp"

int main()
{
    // Creating ComplexNumber objects
    ws::jpo::ComplexNumber <char> c1('a', 'b');
    ws::jpo::ComplexNumber <char> c2('a', 'b');

    // Displaying initial values
    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;

    // Adding two complex numbers
    ws::jpo::ComplexNumber sum = c1 + c2;
    std::cout << "c1 + c2: " << sum << std::endl;

    // Adding and assigning
    ws::jpo::ComplexNumber c5 = c1;
    c5 += c2;
    std::cout << "c1 += c2: " << c5 << std::endl;

    // Adding a real number to a complex number
    ws::jpo::ComplexNumber sumReal = c1 + 2.0;
    std::cout << "c1 + 2.0: " << sumReal << std::endl;

    // Adding and assigning a real number to a complex number
    ws::jpo::ComplexNumber c7 = c1;
    c7 += 2.0;
    std::cout << "c1 += 2.0: " << c7 << std::endl;

    // Subtracting two complex numbers
    ws::jpo::ComplexNumber diff = c1 - c2;
    std::cout << "c1 - c2: " << diff << std::endl;

    // Subtracting and assigning
    ws::jpo::ComplexNumber c6 = c1;
    c6 -= c2;
    std::cout << "c1 -= c2: " << c6 << std::endl;

    // Subtracting a real number from a complex number
    ws::jpo::ComplexNumber diffReal = c1 - 2.0;
    std::cout << "c1 - 2.0: " << diffReal << std::endl;

    // Subtracting and assigning a real number from a complex number
    ws::jpo::ComplexNumber c8 = c1;
    c8 -= 2.0;
    std::cout << "c1 -= 2.0: " << c8 << std::endl;

    // Multiplying two complex numbers
    ws::jpo::ComplexNumber prod = c1 * c2;
    std::cout << "c1 * c2: " << prod << std::endl;

    // Multiplying and assigning
    ws::jpo::ComplexNumber c3 = c1; // copy of c1
    c3 *= c2;
    std::cout << "c1 *= c2: " << c3 << std::endl;

    // Dividing two complex numbers
    ws::jpo::ComplexNumber div = c1 / c2;
    std::cout << "c1 / c2: " << div << std::endl;

    // Dividing and assigning
    ws::jpo::ComplexNumber c4 = c1; // copy of c1
    c4 /= c2;
    std::cout << "c1 /= c2: " << c4 << std::endl;

    // Checking comparison operators
    std::cout << "c1 == c2: " << (c1 == c2 ? "true" : "false") << std::endl;
    std::cout << "c1 != c2: " << (c1 != c2 ? "true" : "false") << std::endl;

    return 0;
}