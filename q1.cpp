//Name - Nikhil chauhan
//roll no -2010990493
//set 3#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
//Taking a given array from the example
int a[] = {1,2,3,4,5,6,7};
int n = sizeof(a)/sizeof(a[0]);

for(int i=1;i<n-1;i+=2){
if(a[i] < a[i-1] or a[i] < a[i+1]){
if(a[i-1] > a[i+1])
swap(a[i],a[i-1]);
else
swap(a[i],a[i+1]);
}
}

for(auto x:a)
cout<<x<<" ";

return 0;
}