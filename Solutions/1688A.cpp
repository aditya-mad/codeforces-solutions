#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int num;
        cin >> num;
        int ans = (num & (-num));
        while ((num ^ ans) <= 0 || (num & ans) <= 0)
        {
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}