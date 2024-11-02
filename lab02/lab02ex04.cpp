#include <iostream>
#include <string>
#include <cctype>

using std::cin, std::cout, std::endl, std::string;

int main()
{
    cout << "Enter a sentence: ";
    string sentence {};
    std::getline(cin, sentence);
    cout << "Enter a char: ";
    string letter;
    std::getline(cin, letter);
    char uppercase_letter = std::toupper(letter[0]);

    for (int i = 0; i < sentence.length(); ++i)
    {
        if(std::islower(sentence[i]))
        {
            sentence[i] = std::toupper(sentence[i]);
        }
    }

    int sum = 0;

    for (int i = 0; i < sentence.length(); ++i)
    {
        if (sentence[i] == uppercase_letter)
        {
            sum ++;
        }
    }
    
    cout << "The letter '" << letter << "' appears " << sum << " times in this sentence." << endl;

    return 0;
}