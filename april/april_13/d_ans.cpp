#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) (x).begin(), (x).end()
const int mod = 1000000007, MAX = 200003, INF = 1 << 30;

int main()
{
    int N;
    int S;
    cin >> N >> S;

    ll cnt1 = 0, cnt2 = 0, cnt3 = 0;

    for (int i = 0; i < N; i++)
    {
        if (S[i] == "R")
            cnt1++;
        if (S[i] == "G")
            cnt2++;
        if (S[i] == "B")
            cnt3++;
    }

    ll ans = cnt1 * cnt2 * cnt3;

    for (int d = 1; d <= N; d++)
    {
        for (int m = 0; m < N; m++)
        {
            if (m - d < 0 || m + d >= N)
                continue;
            if (S[m - d] != S[m + d] && S[m] != S[m + d] && S[m - d] != S[m])
                ans--;
        }
    }

    cout << ans << endl;
}