#include <iostream>
#include <algorithm>
#include <vector>

using ll = long long;
using namespace std;

int main()
{
    ll n, k;
    cin >> n >> k;
    ll a = n % k;
    ll ans = min(a, k - a);
    cout << ans << endl;
    return 0;
}