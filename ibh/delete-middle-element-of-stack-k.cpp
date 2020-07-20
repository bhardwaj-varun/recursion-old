#include<bits/stdc++.h>

using namespace std;

void solve(stack<int> &s, int k){
    if(k==1){
        s.pop();
        return;
    }
    int temp=s.top();
    s.pop();
    solve(s,k-1);
    s.push(temp);
}
void delmid(stack<int> &s){
    if(s.size() == 0 )
        return ;
    int k = s.size()/2 +1;
    solve(s, k);
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