#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int r, D, x;

int main() {

    while (cin >> r >> D >> x) {
        for (int i = 0; i < 10; i++) {
            x = r * x - D;
            cout << x << endl;
        }
    }

    return 0;
}
