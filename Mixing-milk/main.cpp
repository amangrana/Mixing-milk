/*
 ID: dearxia1
 PROG: milk
 LANG: C++
 */

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    //ofstream fout ("milk.out");
    //ifstream fin ("milk.in");
    int n, m, prc[5555] = {}, amnt[5555] = {}, low, high = 0, cost = 0, mark;
    cin >> n >> m;
    for (int i = 0; i < m; i ++)
    {
        cin >> prc[i] >> amnt[i];
        if (prc[i] > high)
            high = prc[i];
    }
    while (n > 0) {
        low = high;
        for (int i = 0; i < m; i ++) {
            if (prc[i] <= low && amnt[i] > 0) {
                mark = i;
                low = prc[i];
            }
        }
        if (n > amnt[mark]) {
            n -= amnt[mark];
            cost += prc[mark] * amnt[mark];
            amnt[mark] = 0;
        }
        else
        {
            cost += prc[mark] * n;
            break;
        }
    }
    cout << cost << '\n';
    return 0;
}
