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

int A, B;

int main()
{
    while (cin >> A >> B)
    {
        if (abs(A - B) % 2 == 0)
        {
            cout << abs(A - B) / 2 + min(A, B) << endl;
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;
        }
    }

    return 0;
}
