#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <boost/range/algorithm.hpp>
#include <boost/integer/common_factor_rt.hpp>

using namespace std;

int N, T;

int main() {

    while (cin >> N) {
        int W[N], ret = 100 * 100;
        for (int i = 0; i < N; i++) {
            cin >> W[i];
        }
        for (int i = 0; i < N; i++) {
            int left_sum = 0, right_sum = 0;
            for (int j = 0; j < i; j++) {
                left_sum += W[j];
            }
            for (int j = i; j < N; j++) {
                right_sum += W[j];
            }
            ret = min(ret, abs(left_sum - right_sum));
        }
        cout << ret << endl;
    }

    return 0;
}
