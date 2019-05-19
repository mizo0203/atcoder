#include <iostream>
#include <string>

using namespace std;

int N, K;
string S;

int main() {

    while (cin >> N >> K >> S) {
        switch (S.at(K -1)) {
            case 'A':
                S.replace(K -1, 1, "a");
                break;
            case 'B':
                S.replace(K -1, 1, "b");
                break;
            case 'C':
                S.replace(K -1, 1, "c");
                break;
        }
        cout << S << endl;
    }
    return 0;
}
