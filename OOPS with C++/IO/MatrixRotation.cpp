#include<bits/stdc++.h>
using namespace std;
int main(){
    int A[10][10], n, t; cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++)cin>>A[i][i];
        for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
            int temp = A[i][j];
            A[i][j] = A[n - 1 - j][i]; 
            A[n - 1 - j][i] = A[n - 1 - i][n - 1 - j]; 
            A[n - 1 - i][n - 1 - j] = A[j][n - 1 - i]; 
            A[j][n - 1 - i] = temp;
        }    }        
        for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << A[i][j] << " ";
        cout << '\n';    }    }
    return 0;}