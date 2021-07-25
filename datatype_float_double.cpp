#include <iostream>
using namespace std;

int main() 
{
    double d1 = 3.1415;
    float f1 = d1; // convert to float from double
                   // reference control structures through objects textbook 
                   // do not mix apples and oranges
    ///solution 2
    ///d1 = static_cast<float>(d1);
    ///f1 = d1;    
    
    /// solution 1 
    ///if (f1 == d1)
    if (f1 == static_cast<float>(d1))
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
    /// output: not equal => equal

    float f2 = 3.1415;
    double d2 = f2; // convert to double from float 
                    // reference control structures through objects textbook
                    // do not mix apples and oranges
    if (d2 == f2)
        cout << "equal" << endl;
    else
        cout << "not equal" << endl;
    /// output: equal   

    return 0;
}