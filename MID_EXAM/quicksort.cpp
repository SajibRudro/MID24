#include <iostream>
using namespace std;

int partition_pic(int A[], int BEG, int END) {
    int LEFT = BEG, RIGHT = END, LOC = BEG;

    while (true) {
        while (A[LOC] <= A[RIGHT] && LOC != RIGHT) RIGHT--;
        if (LOC == RIGHT) return LOC;

        if (A[LOC] > A[RIGHT]) {
            int TEMP = A[LOC];
            A[LOC] = A[RIGHT];
            A[RIGHT] = TEMP;
            LOC = RIGHT;
        }

        while (A[LEFT] <= A[LOC] && LEFT != LOC) LEFT++;
        if (LOC == LEFT) return LOC;

        if (A[LEFT] > A[LOC]) {
            int TEMP = A[LOC];
            A[LOC] = A[LEFT];
            A[LEFT] = TEMP;
            LOC = LEFT;
        }
    }
}

void quicksort_pic(int A[], int BEG, int END) {
    if (BEG < END) {
        int LOC = partition_pic(A, BEG, END);
        quicksort_pic(A, BEG, LOC - 1);
        quicksort_pic(A, LOC + 1, END);
    }
}

int main() {
    int N;
    cin >> N;
    int A[2000];

    for (int i = 0; i < N; i++) cin >> A[i];

    quicksort_pic(A, 0, N - 1);

    for (int i = 0; i < N; i++) cout << A[i] << " ";
    cout << "\n";
    return 0;
}