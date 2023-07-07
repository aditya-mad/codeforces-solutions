#include <iostream>
using namespace std;

int main()
{
    int t, ans = 0, police = 0;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;
        if (num < 0)
        {
            if (police <= 0)
            {
                ans -= num;
            }
            else
            {
                if (police > num)
                {
                    police += num;
                }
                else
                {
                    num += police;
                    ans -= num;
                }
            }
        }
        else
            police += num;
    }
    cout << ans;
    return 0;
}