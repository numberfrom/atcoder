#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int K;
    cin >> K;
    int ans = 0;
    for (int i = 1; i <= K; i++)
    {
        for (int j = 1; j <= K; j++)
        {
            for (int k = 1; k <= K; k++)
            {
                ans += gcd(gcd(i, j), k);
            }
        }
    }

    cout << ans << endl;
    return 0;
}