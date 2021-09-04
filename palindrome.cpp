#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int i, int j){
    int flag =0;
    while(i<j){
        if(s[i++]!=s[j--]){
            flag++;
            break;
        }
    }
    if(flag== 0)
        cout<<"true"<<endl;
    else if(flag == 1)
        cout<<"false"<<endl;
}

int main(){
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    int n=s.size();
    int i=0;
    checkPalindrome(s,i,n-1);

return 0;
}
