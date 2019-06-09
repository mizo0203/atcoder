#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <boost/range/algorithm.hpp>
#include <boost/integer/common_factor_rt.hpp>

using namespace std;

int N, M, ret;
bool b[100001];
int dp[100001];

int step(int s) {
    if (b[s]) {
        return 0;
    }
    if (s == N) {
        return 1;
    }
    long long int ret = dp[s + 1];
    if (s + 2 != N + 1) {
        ret += dp[s + 2];
    }
    return ret % 1000000007;
}

int main() {

    while (cin >> N >> M) {
        for (int i = 0; i <= N; i++) {
            b[i] = false;
        }
        for (int i = 0; i < M; i++) {
            int a;
            cin >> a;
            b[a] = true;
        }
        for (int i = 0; i <= N; i++) {
            dp[N - i] = step(N - i);
        }

        cout << dp[0] << endl;
    }

    return 0;
}

