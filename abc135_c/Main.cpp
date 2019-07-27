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
        int A[N + 1], B[N];
        for (int i = 0; i < N + 1; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }
        long long int sum = 0;
        for (int i = N; i > 0; i--)
        {
            sum += min(A[i], B[i - 1]);
            B[i - 1] -= min(A[i], B[i - 1]);
            sum += min(A[i - 1], B[i - 1]);
            A[i - 1] -= min(A[i - 1], B[i - 1]);
        }
        cout << sum << endl;
    }

    return 0;
}
