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
        int temp = 1;

        while (temp * 2 < num)
        {
            temp *= 2;
        }

        for (int i = 1; i < temp; i++)
        {
            cout << i << " ";
        }

        cout << 0 << " ";

        for (int i = temp; i < num; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}