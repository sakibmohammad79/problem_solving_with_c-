#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int s_len = s.length();
    bool isPalindrom = true;
    for(int i = 0, j= s_len - 1; i<j; i++, j--){
        if(s[i] != s[j]){
            isPalindrom = false;
        }
    }
    if(isPalindrom){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}