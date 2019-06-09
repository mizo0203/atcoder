#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <boost/range/algorithm.hpp>
#include <boost/integer/common_factor_rt.hpp>

using namespace std;

int P, Q, R;

int main() {

    while (cin >> P >> Q >> R) {
        cout << (P + Q + R - max(max(P, Q), R)) << endl;
    }

    return 0;
}
