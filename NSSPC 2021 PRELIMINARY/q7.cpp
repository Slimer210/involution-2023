#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float p,r,t;
	cin >> p >> r >> t;
	
	cout << ceil(log(t/p)/log(1+r))<<endl;
}
