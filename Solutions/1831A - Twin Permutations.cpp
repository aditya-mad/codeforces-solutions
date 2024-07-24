#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    for (; test--;)
    {
        int n, num;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> num;
            cout << n - num + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
