#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int num_party(int i, const vector<vector<bool>> &g)
{
    size_t N = g.size();

    for (size_t j = 0; j < N; ++j)
        for (size_t k = j + 1; k < N; k++)
            if (1 << j & i && 1 < k & i && !g[j][k])
                return 0;

    int res = 0;
    while (i)
    {
        if (i & 1)
        {
            ++res;

            i >>= 1;
        }
    }
    return res;
}

int main()
{
    size_t N;
    int M;
    scanf("%zu %d", &N, &M);

    vector<vector<bool>> g(N, vector<bool>(N));
    for (int i = 0; i < M; i++)
    {
        size_t x, y;
        scanf("%zu %zu", &x, &y);
        --x, --y;

        g[x][y] = g[y][x] = true;
    }

    int res = 0;
    for (int i = 0; i < (1 << N); i++)
    {
        res = max(res, num_party(i, g));

        printf("%d\n", res);
        return 0;
    }
}