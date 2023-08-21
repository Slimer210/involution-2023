#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main() {
    string s;
    cin >> s;
    string ts="0000";
    ts[0]=s[1];
    ts[1]=s[3];
    ts[2]=s[2];
    ts[3]=s[0];
    long long int ls=pow(stoi(ts), 4);
    string rs = to_string(ls);
    cout << rs.substr(rs.length()-6, 6) << endl;
}