#include <iostream>
using namespace std;

int main()
{
    int ques, ans = 0;
    cin >> ques;

    for (; ques--;)
    {
        int num1, num2, num3;
        cin >> num1 >> num2 >> num3;

        if (num1 + num2 + num3 > 1)
        {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}
