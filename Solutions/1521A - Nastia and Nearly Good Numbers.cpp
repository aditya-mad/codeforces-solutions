#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int num1, num2;
        cin >> num1 >> num2;

        if (num2 == 1)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        cout << (1LL * num1 * num2) << " " << num1 << " " << (1LL * num1 * num2) + num1 << endl;
    }
    return 0;
}
