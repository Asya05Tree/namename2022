#include <iostream>
#include<string.h>
using namespace std;

void NumIsTrue (const char Word[])
{ 
    int countK = 0;
    for (int n = 0; n <= strlen(Word); n++)
    {
        for (int mm = 48; mm <= 57; mm++)
        {
            if (Word[n] == ((char)mm))
            {
                countK++;
            }
        }
    };
    if (countK == 1) cout << "Your text " << Word << " has only one number" << endl;
    else cout << "Sorry, but your text has not only one number" << endl;
};

int main()
{
    cout << " I will find the words with only 1 number\n";
    cout << " You have 20 symbols for ENGLISH Word \n";
    cout << "\nEnter 1st Word\t";
    char firstWord[20];
    cin >> firstWord;
    NumIsTrue(firstWord);
    cout << "\nEnter 2nd Word\t";
    char secondWord[20];
    cin >> secondWord;
    NumIsTrue(secondWord);
    cout << "\nEnter 3rd Word\t";
    char thirdWord[20];
    cin >> thirdWord;;
    NumIsTrue(thirdWord);
    cout << "\nEnter 4 Word\t";
    char fourWord[20];
    cin >> fourWord;
    NumIsTrue(fourWord);
    cout << "\nEnter 5 Word \t";
    char fiveWord[20];
    cin >> fiveWord;
    NumIsTrue(fiveWord);
}
