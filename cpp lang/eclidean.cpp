#include<bits/stdc++.h>
using namespace std;
int main(){
int n;    
int x[n],y[n];
int high = 0;
for(int i = 0; i < n; i++){
for(int j = i+1; j < n; j++){ 
int dx = x[i] - x[j];
int dy = y[i] - y[j];
high = max(high, dx*dx + dy*dy);
}
}
cout << high << endl;
}