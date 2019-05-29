#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int N, M;

int main() {

    while (cin >> N >> M) {
        int l_max = 1, r_min = N;
        int L[M], R[M];
        for (int i = 0; i < M; i++) {
            cin >> L[i] >> R[i];
            l_max = max(l_max, L[i]);
            r_min = min(r_min, R[i]);
        }
        int ret = r_min - l_max + 1;
        if (ret < 0) {
            ret = 0;
        }
        cout << ret << endl;
    }

    return 0;
}
