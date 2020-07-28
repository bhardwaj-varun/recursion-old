#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    if(s.size() == 0 || s.size() == 1){
        return true;
    }

    char start = s[0];
    char end = s[s.size()-1]; 
    
    //smaller input
    s.erase(s.begin()+0);
    s.pop_back();

    bool result = isPalindrome(s);
    return result && (start == end);
}

int main(){
    string s;
    cin>>s;
    bool isPal = isPalindrome(s);
    if(isPal)
        cout<< "Palindrome";
    else
        cout<<"Not Palindrome";
}