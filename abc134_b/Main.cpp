#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <boost/range/algorithm.hpp>
#include <boost/integer/common_factor_rt.hpp>

using namespace std;

int N, D;
int main() {
    while (cin >> N >> D) {
        cout << (N + 2 * D) / (2 * D + 1)  << endl;
    }
    return 0;
}
