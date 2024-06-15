#include <iostream>

using namespace std;

int main() {
  int bb,ba,sb,sa,gb,ga,pb,pa;
  cin>>bb>>ba;
  cin>>sb>>sa;
  cin>>gb>>ga;
  cin>>pb>>pa;
  int gtp=pa-pb;
  cout<<gtp<<endl;
  int stg=ga+pa-gb-pb;
  cout<<stg<<endl;
  int bts=sa+ga+pa-sb-gb-pb;
  cout<<bts<<endl;
  return 0;
}
 