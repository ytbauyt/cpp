#include <iostream>
using namespace std;

int main()
{
    // this program is to compute factorial 
    int n = 5;
    int product;
    int count;

    //cout << "n = ";
    // cin >> n;

    product = 1;
    count = 2;
    while(count <= n)
    {
        product = product * count;
        count = count + 1;
    }

    cout << n << "! = " << product << endl; 

    return 0;
}