#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    string str;
    cin >> "Enter a string" >> str;
    char search;
    cin >> "Enter a symbol, which you want to search" >> search;
    int a = 0;

    for (int i = 0; i < str.size(); i++)
        if (str[i] == search)
        {
            a++;
        }
    cout << a << endl;
    return 0;
}