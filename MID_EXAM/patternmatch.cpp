#include <iostream>
#include <string>
using namespace std;

int main() {
    string T, P;
    getline(cin, T);
    getline(cin, P);

    int S = (int)T.size();
    int R = (int)P.size();

    int INDEX = 0;
    int K = 0;
    int MAX = S - R;

    if (R == 0) {
        cout << 1;
        return 0;
    }

    while (K <= MAX) {
        int L = 0;
        while (L < R) {
            if (P[L] != T[K + L]) break;
            L++;
        }

        if (L == R) {
            INDEX = K + 1;
            break;
        }

        K = K + 1;
    }

    cout << INDEX;
    return 0;
}