#include <iostream>
using std::cin, std::cout, std::endl;

double changedegree(double fahrenheit);

int main()
{
    double f_temperature {};
    cout << "-----Fahrenheit to Celsius conversion calculator-----" << endl << "Enter a temperature in Fahrenheit: ";
    cin >> f_temperature;
    double c_temperature {};
    c_temperature = changedegree(f_temperature);
    cout << f_temperature << " Fahrenheit = " << c_temperature << " Celsius" << endl;

    return 0;
}

double changedegree(double fahrenheit)
{
    double celsius {};
    celsius = (fahrenheit-32.0)/1.8;
    return celsius;
}
