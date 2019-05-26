#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <boost/range/algorithm.hpp>
#include <boost/integer/common_factor_rt.hpp>

using namespace std;

struct Restaurant {
    int index;
    string S;
    int P;

    Restaurant(int i, string s, int p) {
        index = i;
        S = s;
        P = p;
    }

    bool operator<(const Restaurant &another) const {
        if (S == another.S) {
            return P > another.P;
        } else {
            return S < another.S;
        }
    };
};

int N;

int main() {

    while (cin >> N) {
        vector<Restaurant> info;
        for (int i = 1; i <= N; i++) {
            string s;
            int p;
            cin >> s >> p;
            info.push_back(Restaurant(i, s, p));
        }
        boost::sort(info);
        for (int i = 0; i < N; i++) {
            cout << info.at(i).index << endl;
        }
    }

    return 0;
}
