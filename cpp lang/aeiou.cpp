#include<bits/stdc++.h>
using namespace std;

    int count_vowels(string str){
      int count=0;
      for(char c:str){
        if(c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'){
            count++;
        }
      }
      return count;
    } 
    int main(){
        int num;
        cin>>num;

        cin.ignore();
        for(int i=0;i<num;i++){
            string sentence;
            getline(cin,sentence);
            int num_vowels=count_vowels(sentence);
            cout<<num_vowels<<endl;
        }
        return 0;
    }