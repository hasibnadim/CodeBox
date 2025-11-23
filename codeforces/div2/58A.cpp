// #58A 
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, r = "hello";
    int count = 0;
    cin >> s;
    int n = s.length();
    for(int i = 0; i < n; i++){
        if(s[i] == r[count]){
            count++;
        }
        if(count == 5){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}