#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <boost/range/algorithm.hpp>
#include <boost/integer/common_factor_rt.hpp>
#define MAX 100000000

using namespace std;

int N;

int main()
{
    while (cin >> N)
    {
        int p, cnt = 0;
        for (int i = 1; i <= N; i++)
        {
            cin >> p;
            if (p != i)
            {
                cnt++;
            }
        }
        if (cnt == 0 || cnt == 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
