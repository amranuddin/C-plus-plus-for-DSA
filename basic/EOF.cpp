#include <iostream>
using namespace std; // akahne use korle baki line a bar bar use kora lage na.
int main()
{
    int a, b;
    while (cin >> a >> b) //use jotokkon input dibe totokkkon kaj korbe
    {
        int c = a + b;
        int d = a / b;
        cout << "The number are: " << a << " " << b << " and the total is: " << c << " the division is: " << d << endl;
    }
}
