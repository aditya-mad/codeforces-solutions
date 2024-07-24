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
        long long int n, k;
        cin >> n >> k;

        if ((n % 2LL == 0 || n % k == 0 || (n - k > 0 && (n - k) % 2LL == 0LL)))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}
