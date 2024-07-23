#include <iostream>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    for (; test--;)
    {
        int size, num, ans = 0;
        cin >> size;

        for (int i = 0; i < size; i++)
        {
            cin >> num;
            ans += num % 2;
        }

        cout << (size == 1 || ans % 2 ? "NO\n" : "YES\n");
    }

    return 0;
}
