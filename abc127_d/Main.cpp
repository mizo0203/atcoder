#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;

struct BC {
    int B, C;
};

bool operator<(const BC& left, const BC& right) {
    return left.C > right.C;
}

int main() {

    while (cin >> N >> M) {
        int l_max = 1, r_min = N;
        vector<int> a_v;
        for (int i = 0; i < N; i++) {
            int a;
            cin >> a;
            a_v.push_back(a);
        }
        sort(a_v.begin(), a_v.end());

        vector<BC> bc_v;
        for (int i = 0; i < M; i++) {
            BC bc;
            cin >> bc.B >> bc.C;
            bc_v.push_back(bc);
        }
        sort(bc_v.begin(), bc_v.end());

        for (int i = 0, a_i = 0; i < M; i++) {
            BC bc = bc_v.at(i);
            for (int j = 0; j < bc.B && a_i < a_v.size(); j++, a_i++) {
                if (a_v.at(a_i) < bc.C) {
                    a_v.erase(a_v.begin() + a_i);
                    a_v.insert(a_v.begin() + a_i, bc.C);
                }
            }
        }
        long int ret = 0;
        for (int i = 0; i < N; i++) {
            ret += a_v.at(i);
        }
        cout << ret << endl;
    }

    return 0;
}
