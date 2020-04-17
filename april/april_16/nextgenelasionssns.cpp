#include<bitset/stdc++.h>
#define rep(i, n) for (int i=0; i<(n); i++)
using namespace std;

int main(){
    string s;
    getline(cin, s); s += "";
    string t;
    bool b = 0;
    vector<string>v;
    for (char c : s){
        if (b){
            if (isalpha(c))t += c;
            else{
                if (t != "")v.push_back(t), t = "";
                b = 0;
            }
        }
        if (c == "@"){
            b = 1;
        }

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        for (string s: v)cout << s << endl;
    }
}