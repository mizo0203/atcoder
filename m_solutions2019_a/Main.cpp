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
        cout << (N - 2) * 180 << endl;
    }

    return 0;
}
