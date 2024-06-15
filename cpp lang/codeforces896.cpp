#include <bits/stdc++.h>
#define ll long long int
#define i64 int64_t
#define mod 1000000007
#define vi vector<int>
#define vll vector<11>
#define vvi vector<vector<int>>
#define vvll vector<vector<11>>
#define pi pair<int, int>
#define rep(i,a,b) for (int i=a;i<b;i++)
#define pb push_back
#define mp make_pair
#define len(s) (int)s.size()
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
int n,x=0;
cin>>n;
vi v(n);
for(int &i:v) {
cin>>i;
x^=i;
if(x==0){
cout<<1<<endl;
cout<<1<<' '<<n<<endl;


}
else if(n%2==0){
cout<<2<<endl;
cout<<1<<' '<<n<<endl;
cout<<1<<' '<<n<<endl;
}
else{
bool f=false;
for(int i=0;i<n;i++){
x=v[i];
int j=i+1;
for(;j<n;j++){
x^=v[j];
if(x==0 && (j-i)%2==0){
f=true;

break;
}
}
if(f){
if(i==0){
cout<<3<<endl;
cout<<<<' '<<j+1<<endl;
cout<<j+2<<' '<<n<<endl;
cout<<j+2<<' '<<n<<endl;
}
else{
cout<<5<<endl;
cout<<1<<' '<<i<<endl;
cout<<1<<' '<<i<<endl;
cout<<i+1<<' '<<j+1<<endl;
cout<<j+2<<' '<<n<<endl;
cout<<j+2<<' '<<n<<endl;