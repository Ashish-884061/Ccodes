#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[20];

    cin >> a;

    int n = strlen(a);

    int z = 0, o = 0;

    for (int i = 0; i < n; i++)

    {

        if (a[i] == 'Z' || a[i] == 'z')

        {

            z++;
        }

        else

        {

            o++;
        }
    }
    if (z * 2 == o)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}