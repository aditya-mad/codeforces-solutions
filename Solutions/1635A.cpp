#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, ans = 0, num;
        cin >> size;

        for (int i = 0; i < size; i++)
        {
            cin >> num;
            ans |= num;
        }

        cout << ans << endl;
    }
}