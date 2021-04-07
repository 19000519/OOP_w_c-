#include <iostream>

using namespace std;

int main()
{
    int mark;
    cout << "enter a mark score" << endl;
    cin >> mark;

    if (mark >= 85 && mark <100)
    {
        cout << " distinction ";
    }

    else if (mark >= 60 && mark < 85)
    {
        cout << " first class";
    }

    else if (mark >= 50 && mark < 60)
    {
        cout << " second class";
    }

    else if( mark > 35 && mark < 50)
    {
        cout<< " third class";
    }
    else
        cout<< "fail";
    return 0;
}
