#include <iostream>
#include <string>

using namespace std;

string S;

int main() {
    int a, b;

    while (cin >> S) {
        a = atoi(S.substr(0, 2).c_str());
        b = atoi(S.substr(2, 2).c_str());

        if (1 <= a && a <= 12) {
            if (1 <= b && b <= 12) {
                cout << "AMBIGUOUS" << endl;
            } else {
                cout << "MMYY" << endl;
            }
        } else {
            if (1 <= b && b <= 12) {
                cout << "YYMM" << endl;
            } else {
                cout << "NA" << endl;
            }
        }
    }
    return 0;
}
