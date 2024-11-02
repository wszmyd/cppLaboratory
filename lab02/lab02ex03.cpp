#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>

using std::cout, std::cin, std::endl, std::string, std::remove_if, std::getline;

bool is_palindrome_manual(const string& sentence);
bool is_palindrome_reverse(const string& sentence);

int main()
{
    string sentence {};
    cout << "Enter a string: ";
    getline(cin, sentence);
    string sentence_copy {};

    for (char c : sentence)
    {
        if (isalnum(c))
        {
            sentence_copy += tolower(c);
        }
    }

    if (is_palindrome_reverse(sentence_copy))
    {
        cout << "This string is a palindrome!!!" << endl;
    }
    else
    {
        cout << "This string is not a palindrome!!!" << endl;
    }

    return 0;
}

bool is_palindrome_manual(const string& sentence)
{
    string sentence_copy = sentence;

    for (int i = 0; i < sentence_copy.length() / 2; ++i)
    {
        if (sentence_copy[i] != sentence_copy[sentence_copy.length()-i-1])
        {
            return false;
        }
    }
    return true;
}

bool is_palindrome_reverse(const string& sentence)
{                                                 
    string sentence_copy = sentence;
    string reversed_sentence_copy = sentence;
    std::reverse(reversed_sentence_copy.begin(), reversed_sentence_copy.end());

    if (sentence_copy == reversed_sentence_copy)
    {
        return true;
    }
    else
    {
        return false;
    }
}

