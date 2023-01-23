#include "Finding a substring in a string.h"

#include <iostream>

using namespace std;

int main()
{
    char *s = "parapapa";
    char *c = "pa";

    int i, n = 0;

    for (i = 1; n != -1; i++)
    {
        n = pos(s, c, i);

        if (n >= 0)
            cout << n << endl;
        else
            break;
    }
}