#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size;
        string language, ans = "";

        cin >> size >> language;

        for (int i = size - 1; i > -1; i--)
        {
            ans += language[i--];
            if (language[i + 1] == 'b' || language[i + 1] == 'c' || language[i + 1] == 'd')
            {
                ans += language[i--];
            }
            ans += language[i];
            ans += '.';
        }

        ans.pop_back();

        reverse(ans.begin(), ans.end());

        cout << ans << endl;
    }

    return 0;
}