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

        int size, num, odd = 0, even = 0;
        cin >> size;
        for (int i = 0; i < 2 * size; i++)
        {
            cin >> num;
            if (num % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if (odd == even)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
