#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int A, B;

int main() {

    while (cin >> A >> B) {
        if (13 <= A) {
            cout << B << endl;
        } else if (6 <= A && A <= 12) {
            cout << (B / 2) << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}
