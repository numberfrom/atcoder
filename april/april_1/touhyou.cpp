#include <cstdio>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int N;
    cin >> N;

    map<string, int> votes;
    for (int i = 0; i < N; i++)
    {
        char buf[64];
        cin >> buf;
        string S(buf);

        ++votes[S];
    }

    string res;
    int num = 0;
    for (auto &item : votes)
    {
        if (num < item.second)
        {
            res = item.first;
            num = item.second;
        }
    }

    cout << res.c_str << endl;
    return 0;
}