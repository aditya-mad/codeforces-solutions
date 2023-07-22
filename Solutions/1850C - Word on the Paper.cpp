#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        char input;
        string ans;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> input;
                if (input != '.')
                {
                    ans = ans + input;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}