#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cin.ignore();

    char c[100];
    string s;

    cin.getline(c, 100);
    cin >> s;

    // fgets(c,10,stdin);

    cout << c << "\n"
         << x << endl
         << s << endl;

    return 0;
}