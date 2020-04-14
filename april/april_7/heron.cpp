#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    xb -= xa;
    yb -= ya;
    xc -= xa;
    yc -= ya;

    return !printf("%.15f\n", abs(xb * yc - yb * xc) / 2.0)
}