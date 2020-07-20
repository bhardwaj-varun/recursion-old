#include<bits/stdc++.h>
using namespace std;

void print(int n){
    //base condition
    if(n==1){
        cout<<n<<" ";
        return;
    }
    //hypothesis
    print(n-1);
    //induction
    cout<<n<<" ";
}
int main(){
    int n;
    cin>>n;
    print(n);
}