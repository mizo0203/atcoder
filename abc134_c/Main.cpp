#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <boost/range/algorithm.hpp>
#include <boost/integer/common_factor_rt.hpp>

using namespace std;

int N;
int main() {
    while (cin >> N) {
        int A[N], max_i = 0, max_2nd_i = 0;
        cin >> A[0];
        cin >> A[1];
        if (A[0] < A[1]) {
            max_i = 1;
            max_2nd_i = 0;
        } else {
            max_i = 0;
            max_2nd_i = 1;
        }
        for (int i = 2; i < N; i++) {
            cin >> A[i];
            if (A[max_i] < A[i]) {
                max_2nd_i = max_i;
                max_i = i;
            } else if (A[max_2nd_i] < A[i]) {
                max_2nd_i = i;
            }
        }
        for (int i = 0; i < N; i++) {
            cout << A[(i == max_i) ? max_2nd_i : max_i]  << endl;
        }
    }
    return 0;
}
