#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <cassert>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <bitset>
#include <string>
#include <algorithm>
#include <utility>
#define llint long long
#define inf 1e18
#define rep(x, s, t) for (llint(x) = (s); (x) < (t); (x)++)
#define Rep(x, s, t) for (llint(x) = (s); (x) <= (t); (x)++)
#define chmin(x, y) (x) = min((x), (y))
#define chmax(x, y) (x) = max((x), (y))

using namespace std;
typedef pair<llint, llint> P;

llint n, k;
string s;

int main(void)
{
    cin >> n >> k;
    cin >> s;

    string ans = s.substr(k - 1);
    string t = s.substr(0, k - 1);

    if ((n - k + 1) % 2)
        reverse(t.begin(), t.end());

    ans += t;

    cout << ans << endl;

    return 0;
}