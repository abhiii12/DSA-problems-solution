/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int t;
        cin>>t; 
        vector<int> scores(t);
    for(int i=0;i<t;i++){
        cin>>scores[i];
    }
       int highest =*std::max(scores.begin(),scores.end());
    
       cout<<highest<<endl;    
  }
  return 0;
}*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; // read the number of test cases

    while (t--) {
        int n;
        cin >> n; // read the number of scores for this test case

        vector<int> scores(n);
        for (int i = 0; i < n; i++) {
            cin >> scores[i]; // read each score and store in vector
        }

        // find the maximum score using the std::max_element function
        int max_score = *std::max_element(scores.begin(), scores.end());

        cout << max_score << endl; // print the maximum score for this test case
    }

    return 0;
}



