#include <iostream>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int size, num, ans;
        cin >> size;
        cin >> num;
        ans = num;
        for (long long int i = 1; i < size; i++)
        {
            cin >> num;
            ans &= num;
        }
        cout << ans << endl;
    }

    return 0;
}