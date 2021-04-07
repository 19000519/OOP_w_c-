#include <iostream>

using namespace std;

int main()
{
    char op;
    double number1, number2;
    cout << "enter an two number: " << endl;
    cin>>number1 >> number2;

    cout<< "enter an operator(+, -, *, /):  "<<endl;
    cin >> op;

    switch(op)
    {
        case '+':
            cout<< number1 + number2 <<endl;
            break;
        case '-':
            cout<< number1 - number2 <<endl;
            break;
        case '*':
            cout<< number1 * number2 <<endl;
            break;
        case '/':
            cout<< number1 / number2 <<endl;
            break;
        default:
            cout<< "enter a valid operator" <<endl;

    }




    return 0;
}
