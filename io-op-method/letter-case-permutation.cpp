#include<bits/stdc++.h>

using namespace std;
/*
input:
a1B2
output:
a1b2
a1B2
A1b2
A1B2
*/
void solve(string ip, string op){
    if(ip.length()==0){
        cout<<op<<endl;
        return;
    }
    if(isdigit(ip[0])){
        op.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip, op);
        return;
    }
    string op1, op2;
    op1=op2=op;
    op1.push_back(tolower(ip[0]));
    op2.push_back(toupper(ip[0]));

    ip.erase(ip.begin()+0);
    solve(ip, op1);
    solve(ip, op2);
    return;
}
int main(){
    string ip, op="";
    cin>>ip;
    solve(ip, op);
}