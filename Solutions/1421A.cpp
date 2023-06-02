#include <iostream>
using namespace std;

int main()
{
    long long int test;
    cin >> test;
    for (; test--;)
    {
        long long int num1, num2;
        cin >> num1 >> num2;

        long long int ans = (num1 & num2);

        cout << (num1 ^ ans) + (num2 ^ ans) << endl;
    }
}