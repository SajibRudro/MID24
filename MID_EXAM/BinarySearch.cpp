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
    int LOC;
    cin>>LOC;
    int beg =0;
    int end =n-1;
    int mid =(beg+end)/2;
    while (beg<=end && A[mid]!=LOC){
        if (A[mid]<LOC){
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
        mid =(beg+end)/2;
    }
    if (A[mid]==LOC){
        cout<<mid<<end;
    }
}