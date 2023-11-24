#include <iostream>
using namespace std;
void calculator(float a, float b)
{
    int x;
    do
    {
        cout << "1-add,2-sub,3-mul,4-div" << endl;
        float c;
        cin >> c;
        if (c == 1)
            cout << "its addition of two numbers" << endl
                 << a + b<<endl;

        else if (c == 2)
            cout << "its subtraction" << endl
                 << a - b<<endl;
        else if (c == 3)
            cout << "its multiplication" << endl
                 << a * b<<endl;
        else if (c == 4)

            if (b != 0)
                cout << "its division" << endl
                     << (float)a / b<<endl;

            else
                cout << "div by 0 or not defined"<<endl;
       
        cout << "enter 0 to exit" << endl;

        cin >> x;
    } while (x != 0);
}
main()
{
    float a, b, c;
    cout << "enter two numbers" << endl;
    cin >> a >> b;
    calculator(a, b);
}