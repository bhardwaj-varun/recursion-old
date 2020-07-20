#include<bits/stdc++.h>

using namespace std;

void solve(stack<int> &s, int n){
    if(s.size() == n){
        s.pop();
        return;
    }
    int temp=s.top();
    s.pop();
    solve(s,n);
    s.push(temp);
}
void delmid(stack<int> &s){
    if(s.size() == 0 )
        return ;
    int n = s.size() - s.size()/2;
    solve(s, n);
}
int main(){
    int n,t;
    cin>>n;
    stack<int> s;
    for(int i;i<n;i++){
        cin>>t;
        s.push(t);
    }
    delmid(s);
    for(int i=s.size(); i>0;i--){
          cout<<s.top()<<" ";
          s.pop();
    }   

}