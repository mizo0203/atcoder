#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <boost/range/algorithm.hpp>
#include <boost/integer/common_factor_rt.hpp>

using namespace std;

int N, M;

int main() {

    while (cin >> N >> M) {
        int k[M];
        vector<vector<int>> s_v;
        for (int i = 0; i < M; i++) {
            cin >> k[i];
            int s[k[i]];
            for (int j = 0; j < k[i]; j++) {
                cin >> s[j];
            }
            s_v.push_back(vector<int> (s, s + k[i]));
        }
        int p[M];
        for (int i = 0; i < M; i++) {
            cin >> p[i];
        }

        int ret = 0;
        for (int i = 0; i < (1 << N); i++) {
            bool n[N];
            for (int j = 0; j < N; j++) {
                n[j] = i & (1 << j);               
            }
            int j;
            for (j = 0; j < M; j++) {
                int tmp = 0;
                for (int l = 0; l < k[j]; l++) {
                    if (n[s_v.at(j).at(l) - 1]) {
                        tmp++;
                    }
                }
                if (p[j] != tmp % 2) {
                    break;
                }
            }
            if (j == M) {
                ret++;
            }
        }
        cout << ret << endl;
    }

    return 0;
}
