#include<bits/stdc++.h>

using namespace std;

void insert(stack<int> &s, int temp){
    if(s.size()==0 || s.top() <= temp){
        s.push(temp);
        return;
    }

    int val = s.top();
    s.pop();
    insert(s, temp);
    s.push(val);
}
void sort(stack<int> &s){
    if(s.size()==1)
        return;
    int temp = s.top();
        s.pop();
    sort(s);
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
    
    sort(s);

    for(int i=0;s.size();i++){
        cout<<s.top()<<" ";
        s.pop();
    }

}