#include <iostream>
#include <array>
#include <algorithm>
#include <vector>
using namespace std;
 
int main(){
    vector<int>v;
    vector<int>arr;
    int x;
    cin>>x;
    while (x--) {
        int i;
        cin>>i;
        v.push_back(i);
        arr.push_back(i);
    }
    int check = *min_element(v.begin(), v.end());
    int check2 = *max_element(v.begin(), v.end());
    arr.erase(remove_if(arr.begin(),arr.end(),[check](int a){return a==check;}));
    arr.erase(remove_if(arr.begin(),arr.end(),[check2](int a){return a==check2;}));
    int max=count(v.begin(),v.end(),check2);
    int min=count(v.begin(),v.end(),check);
    for(int i=0;i<min;i++){
        arr.insert(begin(arr),check);
    }
    for(int i=0;i<max;i++){
        arr.push_back(check2);
    }
    for(int i=0;i<x;i++){
        cout<<arr[i];
    }
}