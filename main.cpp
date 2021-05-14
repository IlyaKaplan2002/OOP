#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string" << endl;
    cin >> str;
    char search;
    cout << "Enter a symbol, which you want to search" << endl;
    cin >> search;
    int a = 0;

    for (int i = 0; i < str.size(); i++)
        if (str[i] == search)
        {
            a++;
        }
    cout << "Number of your symbols:" << a << endl;
    return 0;
}