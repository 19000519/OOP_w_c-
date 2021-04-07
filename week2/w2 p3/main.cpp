#include <iostream>

using namespace std;

int main()
{
    int a , b, x;
    cout << "enter two numbers" << endl;
    cin >>a >>b;

    x = a + b;
    a = x - a;
    b = x - b;

    cout << "a = " << a <<endl;
    cout << "b = " << b;

    return 0;
}
