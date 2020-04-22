#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;

#define FOR(i, a, n) for (ll i = (ll)a; i < (ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define MOD 1000000007
#define INF (1LL << 25) //33554432
#define PI 3.14159265359
#define EPS 1e-12
//#define int ll

signed main(void)
{
    int a[4][4] = {0};
    REP(i, 4)
        REP(j, 4) cin >> a[i][j];
    REP(i, 4)
        REP(j, 4) cin >> a[i][j];

    REP(i, 4)
    FOR(j, 1, 4)
    {
        if (a[i][j] == a[i][j - 1])
        {
            cout << "CONTINUE" << endl;
            return 0;
        }
    }

    FOR(i, 1, 4)
    REP(j, 4)
    {
        if (a[i][j] == a[i - 1][j])
        {
            cout << "CONTINUE" << endl;
            return 0;
        }
    }

    cout << "GAMEOVER" << endl;

    return 0;
}