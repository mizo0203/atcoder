#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int A, P;


int main() {

    while (cin >> A >> P) {
        cout << (A * 3 + P) / 2 << endl;
    }

    return 0;
}
