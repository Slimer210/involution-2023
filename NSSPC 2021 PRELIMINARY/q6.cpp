#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	int max_n=max(a,b);
	int min_n=min(a,b)-1;
	cout << (max_n*(max_n+1)/2) - (min_n*(min_n+1)/2)<< endl;
}
