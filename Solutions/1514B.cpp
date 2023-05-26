#include <iostream>
using namespace std;

int main()
{
    const long long int mod = 1e9 + 7;
    long long int test;
    cin >> test;
    for (; test--;)
    {
        long long int n, k, ans = 1;
        cin >> n >> k;

        for (long long int i = 0; i < k; i++)
        {
            ans = (ans * n) % mod;
        }
        cout << ans << endl;
    }
}