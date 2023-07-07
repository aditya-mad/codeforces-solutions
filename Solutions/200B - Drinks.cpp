#include <iostream>
using namespace std;

int main()
{

    int size, num;
    float ans = 0;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> num;
        ans += ((float)num / 100);
    }
    cout << ans / size * 100;

    return 0;
}