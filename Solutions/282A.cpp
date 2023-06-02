#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int ans = 0;
    for (; num--;)
    {
        string operation;
        cin >> operation;
        if (operation[1] == '+')
        {
            ans++;
        }
        else
        {
            ans--;
        }
    }

    cout << ans;
}