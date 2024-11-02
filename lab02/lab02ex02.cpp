#include <iostream>
#include <string>
#include <algorithm>

using std::cout, std::cin, std::endl, std::string;

int main ()
{
    string word;

    cout << "Enter a string: ";
    cin >> word;

    string word_copy = word;

    for (int i = 0; i < word.size()/2; ++i)
    {
        std::swap(word[i], word[word.size()-i-1]);
    }

    cout << "Manually reversed string: " << word << endl;

    reverse(word_copy.begin(), word_copy.end());

    cout << "Reversed with std::reverse(): " << word_copy << endl;

    return 0;
}