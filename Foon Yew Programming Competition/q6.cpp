#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int sa, sb, sc, ra, rb, rc;
    cin >> sa >> sb >> sc >> ra >> rb >> rc;
    int a = floor(sa/ra);
    int b = floor(sb/rb);
    int c = floor(sc/rc); 

    int min_product = min(a,min(b,c));
    cout << min_product << " "<< sa-(ra*min_product)<< " " << sb-(rb*min_product) << " " <<sc-(rc*min_product) <<endl;
}