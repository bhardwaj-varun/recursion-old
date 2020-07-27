#include<bits/stdc++.h>

using namespace std;
int solve(int n, int k){
    if(n==1 && k==1)
        return 0;
    int mid = pow(2, n-2); // as length of nth row will be 2^(n-1)
    if(k<=mid){
        return solve(n-1,k);
    }
    else{
        return !solve(n-1, k-mid);
    }
}
int  main(){
    int n, k;
    cin>>n>>k;
    cout<<solve(n,k);
}