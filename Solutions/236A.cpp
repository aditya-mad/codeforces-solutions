#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    string name;
    cin >> name;

    unordered_set<char> memo;
    for (auto x : name)
    {
        memo.insert(x);
    }

    if (memo.size() & 1)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }

    return 0;
}