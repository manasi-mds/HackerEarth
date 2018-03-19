#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int N;
    cin>>N;
    int A[N],B[N],C[N];
    for(int i=0;i<N;i++) {
        cin>>A[i];
    }
    for(int i=0;i<N;i++) {
        cin>>B[i];
        C[i] = A[i]+B[i];
    }
    for(int i=0;i<N;i++) {
        cout<<C[i]<<" ";
    }

}