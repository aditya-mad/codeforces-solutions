#include <iostream>
using namespace std;

int main()
{
    int test = 1;
    cin >> test;

    for (; test--;)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (a + c % 2 > b ? "First\n" : "Second\n");
    }
    return 0;
}
