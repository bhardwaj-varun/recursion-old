#include<bits/stdc++.h>
using namespace std;

void unique_subset(string ip, string op, set<string>& s){
    if(ip.length()==0){
        s.insert(op);
        return ;
    }
    string op1, op2;
    op1=op2=op;

    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);

    unique_subset(ip, op1, s);
    unique_subset(ip, op2, s);
}
int main(){
    set<string> s;
    string ip, op="";
    cin>>ip;
    unique_subset(ip, op, s);
    for(auto i : s){
        cout<<i<<"\n";
    }    
}