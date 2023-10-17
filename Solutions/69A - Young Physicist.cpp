#include <iostream>
using namespace std;

int main()
{
    int xcoord = 0, ycoord = 0, zcoord = 0, forces;
    cin >> forces;

    while (forces--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        xcoord += x;
        ycoord += y;
        zcoord += z;
    }

    cout << (xcoord == 0 && ycoord == 0 && zcoord == 0 ? "YES" : "NO");

    return 0;
}