#include<bits/stdc++.h>

using namespace std;
// will use _ instead of space for vetter representation
/* input: 
   ABC
   output:
   A_B_C
   A_BC
   AB_C
   ABC
*/
void solve(string ip, string op){
    if(ip.length()==0){
        cout<<op<<"\n";
        return;
    }
    string op1, op2;
    op1 = op2 = op;

    op1.push_back('_');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);

    ip.erase(ip.begin()+0);
    solve(ip, op1);
    solve(ip, op2);
}

int main(){
    string ip, op="";
    cin>>ip;
    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip, op);
}