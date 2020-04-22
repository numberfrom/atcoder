#include <bits/stdc++.h>
using namespace std;
using Int = long long;
template <typename T1, typename T2>
inline void chmin(T1 &a, T2 b)
{
    if (a > b)
        a = b;
}
template <typename T1, typename T2>
inline void chmax(T1 &a, T2 b)
{
    if (a < b)
        a = b;
}

signed main()
{
    Int n, m;
    cin >> n >> m;
    using P = pair<Int, Int>;
    vector<P> vp;
    for (Int i = 0; i < n; i++)
    {
        Int a, b;
        cin >> a >> b;
        vp.emplace_back(a, b);
    }
    sort(vp.begin(), vp.end());
    Int ans = 0;
    for (auto p : vp)
    {
        Int cnt = min(m, p.second());
        ans += a.first * cnt;
        m -= cnt;
    }

    cout << ans << endl;
    return 0;
}