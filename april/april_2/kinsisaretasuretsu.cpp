#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<stack>
#define REP(i, N) for(int i = 0; i < N; ++i)
#define REEP(i, N) for(int i = N - 1; i >= 0; --i)
#define ALL(a) (a).begin(),(a).end()
#define FOR(i,m,n) for(int i = m; i < n; ++i)
#define RFOR(i,m,n) for(int i = n - 1; i >= m; --i)
#define CIN(a) cin >> a
#define CIN2(a, b) cin >> a >> b
#define CIN3(a, b, c) cin >> a >> b >> c
#define COUT(a) cout << a << endl
#define COUT2(a, b) cout << a << " " << b << endl
#define COUT3(a, b, c) cout << a << " " << b << " " << c << endl
#define pb push_back
#define PB push_back
#define VINT(v, n) vector<int> v(n); REP(i, n) { v[i] = 0 }
#define VINT2(v, n, m) vector<vector<int> > v(n, vector<int>(m)); REP(i, n) { REP(j, m) { v[i][j] = 0 } }
#define VCHAR(v, n) vector<char>v(n)
#define MAX(a, b) a > b ? a : b
#define MIN(a, b) a < b ? a : b
#define CEIL(c, a, b) if(a % b == 0) { c = a / b;} else { c = a / b + 1;}
#define sp(n) setprecision(n)
#define INF 1000000000
#define MOD 1000000007
 
using namespace std;
typedef pair<int, int> P;
typedef long long ll;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int sizeA;
int sizeB;
ll sumA, sumB;
vector<int> comA;
vector<int> comB;

ll pow(int n, int t){
    ll les = 1;
    while (t != 0){
        les *= n;
        --t;
    }
    return les;
}

ll dfs(int s, vector<int> com){
    if (s == 0){
        return 1;
    } else{
        if (com[s-1]==0){
            return dfs(s - 1, com);
        }
        else if (com[s-1] < 4){
            return com[s-1] * pow(8, s-1) + dfs(s-1, com);
        }
        else if (com[s-1] == 4){
            return 4 * pow(8, s-1);
        }
        else if (com[s-1] < 9){
            return (com[s-1] - 1)*pow(8, s-1)+dfs(s-1, com);
        }
        else{
            return 8 * pow(8, s-1);
        }

    }
}

int main(){
    ll A, B;
    CIN2(A, B);
    --A;
    ll dA = A;
    ll dB = B;
    while (dA!=0){
        comA.pb(dA % 10);
        dA /= 10;
        ++sizeA;
    }
    while (dB != 0){
        comB.pb(dB%10);
        dB /= 10;
        ++sizeB;
    }

    sumA = dfs(sizeA, comA);
    sumB = dfs(sizeB, comB);
    COUT((B-A)-(sumB-sumA));
}