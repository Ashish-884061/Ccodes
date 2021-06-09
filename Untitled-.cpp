#include <iostream>
using namespace std;
int main()
{
    int R = 0, L, G, K;
    cin >> L >> G;
    int arr[L];
    for (int i = 0; i < L; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < L; i++)
    {
        for (int j = 1; i <= L; j++)
        {
            while (arr[i] == arr[j])
            {
                if (arr[i] > arr[j])
                {
                    K = arr[i] - arr[j];

                    R += K;
                    arr[i] -= R;
                }
                if (arr[i] < arr[j])
                {
                    K = arr[j] - arr[i];
                    G += K;
                    arr[i] += G;
                }
            }
        }
        if (i != L - 1 && G == 0 && R == 0)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
    }
    return 0;
}
