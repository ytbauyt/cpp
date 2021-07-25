#include <iostream>
using namespace std;

int main()
{
    int iArray[]{1, 2, 3, 4, 5, 6, 7};

    for (auto _ : iArray)
    {
        cout << _ << endl;
    }

/**
cout:
1
2
3
4
5
6
7

reference: 
C++ textbook Control Structures through Objects
C++ Legal Identifiers
The first character must be one of the letters a through z, 
A through Z, or an underscore character (_).
**/

    return 0;
}