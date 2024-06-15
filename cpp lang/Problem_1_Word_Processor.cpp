/*#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<string> words(n);
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    int curr_line_len = 0;
    for (int i = 0; i < n; i++) {
        int word_len = words[i].length();
        if (curr_line_len + word_len + 1 > k) {
            cout << endl;
            curr_line_len = 0;
        }
        cout << words[i] << " ";
        curr_line_len += word_len + 1;
    }

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,K;
    cin>>N>>K;
    int wordlength = 0;
    for(int i=0;i<N;i++){
    string S;
    cin>>S;
    wordlength += S.length();

    if(wordlength <= K)
    {
    if(i!=0){
    cout<<" ";
    }cout<<S;
    }else{
        cout<<"\n"<<S;
        wordlength=S.length();
        }
    
  }
}

