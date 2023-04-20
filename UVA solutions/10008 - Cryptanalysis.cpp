#include <iostream>
#include <algorithm>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int k;
    cin >> k;
    cin.ignore();
    multiset<char> charset;
    vector<pair<int, char>> charlist;
    while (k--) {
        string s;
        getline(cin, s);
        s.erase(remove_if(s.begin(), s.end(), [](char c) {
            return isspace(c) || ispunct(c) || isdigit(c);
        }), s.end());
        transform(s.begin(), s.end(), s.begin(), [](char c) { return toupper(c);});
        for (char c : s) { charset.insert(c); }
    }
    for (auto it = charset.begin(); it != charset.end();) {
            auto cnt = charset.count(*it);
            charlist.push_back({charset.count(*it), *it});
            advance(it, cnt);
    }
    sort(charlist.begin(), charlist.end(), greater());
    for (auto p:charlist) {
        printf("%c %d\n", p.second, p.first);
    }



    charset.clear();

}