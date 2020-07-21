#include<bits/stdc++.h>

using namespace std;

void insert(stack<int> &s, int elem){
    if(s.size()==0){
        s.push(elem);
        return;
    }
    int temp = s.top();s.pop();
    insert(s,elem);

    s.push(temp);
}

void reverse(stack<int> &s){
    if(s.size()==1){
        return;
    }
    int temp=s.top();s.pop(); 
    reverse(s);
    insert(s, temp);
}
int main(){
    int n, t;
    stack<int> s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        s.push(t);
    }
    reverse(s);

    for(int i=s.size(); i>0;i--){
        cout<<s.top()<<" ";
        s.pop();
    }
}