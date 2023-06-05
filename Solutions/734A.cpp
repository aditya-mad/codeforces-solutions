#include <iostream>
using namespace std;

int main()
{
    int size, anton, danik;
    string scores;

    cin >> size >> scores;

    for (auto x : scores)
    {
        if (x == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton";
    }
    else if (danik > anton)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }

    return 0;
}