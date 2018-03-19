#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void check_palindrome(string str) {
    int size = str.length();
    for(int i=0;i<size;i++) {
        if(str[i]!=str[size-i-1]) {
            cout<<"NO\n";
            return;
        }
    }
    if(size%2==0) {
        cout<<"YES EVEN\n";
    }

    else
        cout<<"YES ODD\n";
}

int main() {
    int T;
    cin>>T;
    for(int cnt=0;cnt<T;cnt++) {
        string str;
        cin>>str;
        check_palindrome(str);
    }
}