#include<bits/stdc++.h>

using namespace std;
/*
input:
3
output:
111
110
101
*/
void solve(int one, int zero, int n, string op){
    if(n==0){
        cout<<op<<endl;
        return;
    }
    string op1=op;
    op1.push_back('1');
    solve(one+1, zero, n-1, op1);

    if(one>zero){
        string op2=op;
        op2.push_back('0');
        solve(one, zero+1, n-1, op2);
    }
}
int main(){
    int n, one=0, zero=0;
    string op="";
    cin>> n;
    solve(one, zero, n, op);
}