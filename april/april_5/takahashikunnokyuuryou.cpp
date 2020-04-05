#include <stdio.h>
#include <algorithm>
#define INF 123456789

using namespace std;

int N, B[21];

int f(int num)
{
    int num_max = -INF, num_min = INF;
    for (int i = 0; i < N; i++)
    {
        if (B[i] == num)
        {
            num_max = max(num_max, f(i + 2));
            num_min = min(num_min, f(i + 2));
        }
    }
    num_max = (num_max == -INF ? 0 : num_max);
    num_min = (num_min == -INF ? 0 : num_min);
    return (num_max + num_min + 1);
}

int main()
{
    scanf("%d", &N);
    for (int i = 0; i < N - 1; i++)
    {
        scanf("%d", &B[i]);
    }

    printf("%d\n", f(1));
    return 0;
}