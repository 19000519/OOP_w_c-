#include <iostream>

using namespace std;

int main()
{
    int number, factorial = 1, i;
    cout << "enter any number" << endl;
    cin>>number;

    for(i = 1; i <= number; i++)
    {
        factorial = factorial*i;
    }

    cout<<"the factorial is " <<factorial<<endl;

    return 0;
}
