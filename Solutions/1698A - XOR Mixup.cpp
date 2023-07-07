#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (; test--;)
    {
        int size, num;
        cin >> size >> num;
        cout << num << endl;

        for (int i = 1; i < size; i++)
        {
            cin >> num;
        }
    }
    return 0;
}