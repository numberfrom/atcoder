#include <cstdio>
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> C(N);
    for (int i = 0; i < N; i++)
    {
        cin >> C[i];
    }

    double res = 0.0;
    for (int i = 0; i < N; i++)
    {
        int S = 0;
        for (int j = 0; j < N; j++)
        {
            if (i != j && C[i] % C[j] == 0)
            {
                S++;
            }
        }
        if (S & 1)
        {
            res += 0.5;
        }
        else if (S)
        {
            res += (S + 2) / (2 * S + 2.0);
        }
        else
        {
            res += 1.0;
        }
    }

    cout << res << endl;
    return 0;
}