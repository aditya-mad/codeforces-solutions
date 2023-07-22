#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (; test--;)
    {
        int size;
        cin >> size;
        vector<int> words(size), quality(size);
        int ans = INT_MIN;

        for (int i = 0; i < size; i++)
        {
            cin >> words[i] >> quality[i];
        }

        for (int i = 0; i < size; i++)
        {
            if (words[i] <= 10 && (ans == INT_MIN || quality[i] > quality[ans]))
            {

                ans = i;
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}