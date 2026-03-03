#include <iostream>
using namespace std;

void tower(int N, char BEG, char AUX, char END) {
    if (N == 1) {
        cout << BEG << " -> " << END << "\n";
        return;
    }
    tower(N - 1, BEG, END, AUX);
    cout << BEG << " -> " << END << "\n";
    tower(N - 1, AUX, BEG, END);
}

int main() {
    int N;
    cin >> N;
    tower(N, 'A', 'B', 'C');
    return 0;
}