#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
typedef long long ll;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> p(n, k - q);
    rep(i, q)
    {
        int a;
        cin >> a;
        --a;
        p[a]++;
    }
    rep(i, n)
    {
        if (p[i] <= 0)
            puts("No");
        else
            puts("Yes");
    }
    return 0;
}