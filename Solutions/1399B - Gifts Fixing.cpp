#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        long long ans = 0;
        int size;
        cin >> size;
        vector<int> oranges(size), candies(size);

        for (int i = 0; i < size; i++)
            cin >> candies[i];
        for (int i = 0; i < size; i++)
            cin >> oranges[i];

        int mino = *min_element(oranges.begin(), oranges.end());
        int minc = *min_element(candies.begin(), candies.end());

        for (int i = 0; i < size; i++)
        {
            ans += oranges[i] - mino + candies[i] - minc - min(oranges[i] - mino, candies[i] - minc);
        }
        cout << ans << endl;
    }

    return 0;
}
