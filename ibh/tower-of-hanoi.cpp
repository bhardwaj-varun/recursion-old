#include<bits/stdc++.h>

using namespace std;

void solve(int n, int s, int d, int h, int &count){
    ++count;
    if(n==1){
        printf("Moving plate %d from %d to %d\n",n , s, d);
        return;
    }
    solve(n-1, s, h, d, count);
    printf("Moving plate %d from %d to %d\n",n , s, d);
    solve(n-1, h, d, s, count);
}
int main(){
    int count=0, s=1, h=2, d=3;
    int n;
    cin>>n;
    solve(n, s, d, h,count);
    printf("Count: %d", count);
}