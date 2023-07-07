#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int num;
        cin >> num;

        if (num & 1)
            cout << (num >> 1) << endl;
        else
            cout << (num >> 1) - 1 << endl;
    }
    return 0;
}