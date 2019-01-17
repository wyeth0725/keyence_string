#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    int d = n - 7;
    for( int i = 0; i + d <= n; i++ ){
        string t = "";
        for( int j = 0; j < i; j++ ) t += s[j];
        for( int j = i + d; j < n; j++ ) t += s[j];
        if( t == "keyence" ){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}