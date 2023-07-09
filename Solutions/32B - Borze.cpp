#include <iostream>
using namespace std;

int main()
{
    string ans = "", input;
    cin >> input;
    int size = input.size(), i = 0;

    while (i < size)
    {
        if (input[i] == '.')
        {
            ans += '0';
            i++;
        }
        else
        {
            if (input[++i] == '.')
                ans += '1';
            else
                ans += '2';
            i++;
        }
    }
    cout << ans;
}