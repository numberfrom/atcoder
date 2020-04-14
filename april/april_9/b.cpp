#include <iostream>
using namespace std;

int main()
{
    string E, O;
    cin >> E >> O;
    for (int i = 0; i < E.size(); i++)
    {
        cout << E[i];

        if (i < O.size())
        {
            cout << O[i];
        }
    }
    return 0;
}