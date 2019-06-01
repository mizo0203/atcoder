#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <boost/range/algorithm.hpp>
#include <boost/integer/common_factor_rt.hpp>

using namespace std;

string S;

int main() {

    while (cin >> S) {
        int cnt = 0;
        for (char c : S) {
            cnt += (c == 'x') ? 1 : 0;
        }
        cout << ((cnt > 7) ? "NO" : "YES") << endl;
    }

    return 0;
}
