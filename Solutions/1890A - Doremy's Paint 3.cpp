#include <iostream>
#include <unordered_map>
#include <cstdlib>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size, num;
        cin >> size;
        unordered_map<int, int> memo;
        for (int i = 0; i < size; i++)
        {
            cin >> num;
            memo[num]++;
        }

        if (memo.size() > 2)
            cout << "No\n";
        else if (memo.size() == 1)
            cout << "Yes\n";
        else
        {
            auto i = memo.begin();
            num = i->second;
            i++;
            num = num - i->second >= 0 ? num - i->second : i->second - num;

            cout << (num == 1 || num == 0 ? "Yes\n" : "No\n");
        }
    }

    return 0;
}