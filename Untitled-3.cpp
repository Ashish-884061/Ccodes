#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int sum = 0;
    int candies[num];
    fill_n(candies, num, 1);
    int ranking[num];
    for (int i = 0; i < num; i++)
    {
        cin >> ranking[i];
    }
    for (int i = 0; i < num; i++)
    {
        if (i != num - 1 && ranking[i] > ranking[i + 1] && candies[i] <= candies[i + 1])
        {
            candies[i] = candies[i + 1] + 1;
        }
        if (i > 0 && ranking[i] > ranking[i - 1] && candies[i] <= candies[i - 1])
        {
            candies[i] = candies[i - 1] + 1;
        }
    }
    for (int i = 0; i < num; i++)
    {
        sum = sum + candies[i];
    }
    cout << sum;
    return 0;
}
