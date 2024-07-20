#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, ans = 0, total = 0;
        string str;
        cin >> size >> str;

        str.push_back('#');

        for (int i = 0, count = 0; i <= size; i++)
        {
            if (str[i] == '.')
                count++, total++;
            else
                count = 0;
            ans = max(ans, count);
        }

        cout << (ans > 2 ? 2 : total) << endl;
    }

    return 0;
}
