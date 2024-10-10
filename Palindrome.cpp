//
// Created by Dru on 10/9/2024.
//

#include "Palindrome.h"

bool Palindrome::isPalindrome(const std::string &input)
{
    Stack<char> s;
    Queue<char> q;

    for(char ch : input)
    {
        if(std::isalpha(ch))
        {
            char lowerCh = std::tolower(ch);
            s.push(lowerCh);
            q.push(lowerCh);
        }
    }

    while(!s.isEmpty() && !q.isEmpty())
    {
        if(s.top() != q.top())
            return false;
        s.pop();
        q.pop();
    }
    return true;
}

void Palindrome::run()
{
    std::string input;
    std::cout << "Enter a string to check if it's a palindrome: ";
    std::getline(std::cin, input);

    if(isPalindrome(input))
    {
        std::cout << "'" << input << "' is a palindrome.\n";
    }
    else
    {
        std::cout << "'" << input << "' is not a palindrome.\n";
    }
}
