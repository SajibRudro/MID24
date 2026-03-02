#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
     for (int k = 0; k<n-1; k++)
    {
        int PTR=0;
        for (int i=0;i<n-k-1;i++){
            if (A[PTR]>A[PTR+1]){
                int temp = A[PTR];
                A[PTR]=A[PTR+1];
                A[PTR+1]=temp;

            }
            PTR=PTR+1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<A[i];
    }

}