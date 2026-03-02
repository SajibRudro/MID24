#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int M, N, P;
    cin >> M >> N >> P;
    vector<vector<int>> A(M, vector<int>(P));
    vector<vector<int>> B(P, vector<int>(N));
    vector<vector<int>> C(M, vector<int>(N, 0));
    for (int i = 0; i < M; i++)
    {
        for (int k = 0; k < P; k++)
        {
            cin >> A[i][k];
        }
    }
    for (int k = 0; k < P; k++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> B[k][j];
        }
    }
    for (int i = 0; i < M; i++)
    {

        for (int j = 0; j < N; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < P; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}