#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
	vector<double>v;
	int n=7;
	while (n--){
		double x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	cout << fixed << setprecision(2) << (v[2]+v[3]+v[4])/3<<endl;
	
}
