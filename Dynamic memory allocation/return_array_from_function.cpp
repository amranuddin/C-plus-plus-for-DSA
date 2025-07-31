#include <bits/stdc++.h>
using namespace std;

int * fun()
{
    int n;  // variable declare kora holo
    cin >> n; // input newa hocche
    int *a = new int[n]; //dynamic memorite array decalre holo ebong static memorite er adress store kora hocche
    for (int i = 0; i < n; i++)     // loop chaliye input newa hocche
    {
        cin >> a[i];
    }
    return a; //a return hocche
    // aikhane kaj hocche hewp memori teke tai automatic delete hoye zay ni
}
int main()
{
   int*p=fun();
   for (int i = 0; i< 5 ; i++)
    {
        cout << p[i] << " ";
    }
}
