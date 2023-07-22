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
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;

        if (num1 + num2 >= 10 || num2 + num3 >= 10 || num1 + num3 >= 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}