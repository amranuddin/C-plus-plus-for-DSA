#include <iostream>
#include <algorithm> // eita akta header file onk mathematical code kora zay
using namespace std;
int main()

{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int l = max(a, b); //just max(a,b) likhe dile maximum valu pawa zabe. tobe ekta variavble a seta store kore rakha lagobe
     int i = min(a, b);
    cout << "the max is: "
         << l << "\n"
         << "The minimum is " << i<< endl;
    // akta variable a sei man stpre kore rakha লাগবে

    int o = max({a, b, c, d}); 
    int p = min({a, b, c,d});//ekivabe onk variable ar para zay tobe third bracket use kora lagbe.
    cout << "The maximum number is: " << o << endl<< "THe minimum number is:"<<p;
}