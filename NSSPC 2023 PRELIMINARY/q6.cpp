#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
using namespace std;

int main(){    
  double a,b,x,y;    
  cin >> a >> b >> x >> y;    
  double q = ((xb)-(ay))/(y-x);    
  if(q<0.0001) q=0;    
  if(isinf(q)) {        
    printf("-1");        
    return 0;    
  }    
  cout << ceil(q)<< endl;
}
