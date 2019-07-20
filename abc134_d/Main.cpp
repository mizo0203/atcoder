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
        int a[N], box[N], M = 0;
        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }
        for (int i = N; i > 0; i--) {
            int ball = a[i - 1];
            for (int j = 2; i * j <= N; j++) {
                // cout << "DEBUG: i = " << i << ", " << (i * j - 1) << ", " << box[i * j - 1] << endl;
                ball += box[i * j - 1];
            }
            // cout << "DEBUG: " << i << " " << ball << endl;
            if (ball % 2 == 1) {
                box[i - 1] = 1;
                M++;
            } else {
                box[i - 1] = 0;
            }
        }
        cout << M << endl;
        if (M != 0) {
            for (int i = 0; i < N; i++) {
                if (box[i] == 1) {
                    cout << (i + 1) << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
