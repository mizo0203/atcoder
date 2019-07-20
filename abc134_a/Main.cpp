#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <boost/range/algorithm.hpp>
#include <boost/integer/common_factor_rt.hpp>

using namespace std;

int r;
int main() {

    while (cin >> r) {
        cout << 3 * r * r << endl;
    }

    return 0;
}
