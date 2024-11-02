#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin, std::cout, std::endl;

int main()
{
    //initialize random number generator with current time
    srand(static_cast<unsigned int>(time(0)));
    //generate random number from 1 to 100
    int randomNumber = rand() % 100 + 1;
    int x {};

    do
    {
        cout << "Enter a nunmber: ";
        cin >> x;

        if (x == randomNumber)
        {
            cout << "Congratulations! The number is correct!" << endl;
        }
        else if (x > randomNumber)
        {
            cout << "the number is too high!" << endl;
        }
        else if (x < randomNumber)
        {
            cout << "the number is too low!" << endl;
        }
    } while(x != randomNumber);

    return 0;
}
