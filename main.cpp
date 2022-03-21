#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string ch;
    int x=0;
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        cin>>ch;
        if((ch[0])=='+' || ch[ch.length()-1]=='+'){
            x++;
        }
        if(ch[0]=='-' || ch[ch.length()-1]=='-'){
            x--;
        }
        i++;
    }
    cout<<x;
    return 0;
}
