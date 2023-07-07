#include <iostream>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        int size, z, temp, ans = -1;
        cin >> size >> z;

        for (int i = 0; i < size; i++)
        {
            cin >> temp;
            temp |= z;
            ans = (ans < temp) ? (temp) : (ans);
        }
        cout << ans << endl;
    }
    return 0;
}