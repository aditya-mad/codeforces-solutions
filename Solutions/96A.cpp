#include <iostream>
using namespace std;

int main()
{
    string score;
    cin >> score;
    int ans = 1;
    char current = score[0];

    for (int i = 1; i < score.size(); i++)
    {
        if (score[i] == current)
        {
            ans++;
        }
        else
        {
            current = score[i];
            ans = 1;
        }
        if (ans == 7)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}