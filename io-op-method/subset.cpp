#include<bits/stdc++.h>

using namespace std;
void subset(string ip, string op){
    if(ip.length() ==0){
        cout<<op<<"\n";
        return;
    }
    string op1,op2;
    op1=op2=op;
    op2.push_back(ip[0]);

    ip.erase(ip.begin()+0);
    
    subset(ip, op1);
    subset(ip, op2);
}

int main(){
    string ip,op="";
    cin>>ip;
    subset(ip,op);
}
