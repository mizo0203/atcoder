#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int N, K;
int g;

int coin(int i) {
    int cnt = 0;
    while (i < K) {
        i *= 2;
        cnt++;
        g = max(g, cnt);
    }
    return cnt;
}

int main() {

    while (cin >> N >> K) {
        double e = 0;
        int f = 0;
        g = 0;
        for (int i = 1; i <= N; i++) {
            int c = coin(i);
            double d = 1.0 / pow(2, c);
            f += pow(2, g - c);
            e += d;
        }
        cout << fixed << setprecision(12) << ((long double) f / (N * pow(2, g))) << endl;
    }

    return 0;
}
