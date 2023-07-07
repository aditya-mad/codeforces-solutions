#include <stdio.h>
char name[1000];
int main()
{
    scanf("%s", &name);
    if (name[0] >= 97 && name[0] <= 122)
    {
        name[0] = name[0] - 32;
    }
    printf("%s", name);
}