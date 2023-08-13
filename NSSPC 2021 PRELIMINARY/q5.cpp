#include <iostream>
using namespace std;
int main() {
	int n,count=0;
	cin >>n;
	while (n--){
		int x;
		cin >> x;
		if (!(x%2))count++;
		
	}
	cout << count << endl;
}
