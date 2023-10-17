#include <iostream>
using namespace std;

int main()
{
    int size, time;
    string line;
    cin >> size >> time >> line;

    while (time--)
    {
        for (int i = 1; i < size; i++)
        {
            if (line[i - 1] == 'B' && line[i] == 'G')
            {
                swap(line[i - 1], line[i]);
                i++;
            }
        }
    }

    cout << line;
    return 0;
}
