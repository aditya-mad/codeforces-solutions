// #include <bits.stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    for (; test--;)
    {
        int one, two, cap;
        cin >> one >> two >> cap;
        int ans = 0;

        float mid = one + two;
        mid /= 2;

        cout << ceil((mid - min(one, two)) / cap) << endl;
    }

    return 0;
}