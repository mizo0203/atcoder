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

int N, A, B, C, D;
string S;

int main() {

    while (cin >> N >> A >> B >> C >> D) {
        cin >> S;
        bool ret = true, rock = false;
        for (int i = A - 1; i < C - 1; i++) {
            if (S.at(i) == '#') {
                if (rock) {
                    ret = false;
                    break;
                } else {
                    rock = true;
                }
            } else {
                rock = false;
            }
        }
        rock = false;
        for (int i = B - 1; i < D - 1; i++) {
            if (S.at(i) == '#') {
                if (rock) {
                    ret = false;
                    break;
                } else {
                    rock = true;
                }
            } else {
                rock = false;
            }
        }
        if (D < C) {
            string substr = S.substr(B - 2, D - B + 3);
            ret &= substr.find("...") != string::npos;
        }
        cout << (ret ? "Yes" : "No") << endl;
    }

    return 0;
}
