#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    for (; test--;)
    {
        int size;
        string s;
        cin >> size >> s;
        int i = 0, j = size - 1;
        while (i < j)
        {
            if ((s[i] == '0' && s[j] == '1') || (s[i] == '1' && s[j] == '0'))
                i++, j--, size -= 2;
            else
                break;
        }

        cout << size << endl;
    }

    return 0;
}
