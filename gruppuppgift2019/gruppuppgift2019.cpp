// gruppuppgift2019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cctype>
#include <ctype.h>

//I'm not sure which includes are really necessary

using namespace std;
//using std::cout;
//using std::cin;
//using std::endl;
//using std::string;



int main()
{
    string temp;
    string s;
    cout << "Enter a word : " << endl;
    cin >> s;
    int n;
    cout << "Enter an encryption key : " << endl;
    cin >> n;

    std::for_each(s.begin(), s.end(), [](char & c)
    {
        c = ::toupper(c);
    });

    cout << s << endl;

    for(int i = 0; i < s.length(); i++)
    {
        int j = (int)s[i];

        if(j + n < 90)
        {
            j += n;
            temp += (char)j;
        }
        else
        {
            j = j - 26 + n;
            temp += (char)j;
        }
        
    }

    cout << temp << endl;


    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
