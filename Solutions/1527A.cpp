#include <iostream>
using namespace std;

int main()
{
    long long int test;
    cin >> test;

    for (; test--;)
    {
        long long int num;
        cin >> num;
        while (num)
        {
            if ((num & (num - 1)) == 0)
            {
                cout << num - 1 << endl;
                break;
            }
            num = num & (num - 1);
        }
    }
    return 0;
}