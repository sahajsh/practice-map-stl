/*Unordered set in stl - order not matters unsorted hoty h but find krna h set m koi value present h ki nahi 
presence ka check krna hai bas 
Given N strings and Q queries in each query you have given a string print YES if string is present
else print NO
*/
//o(1) time complexity mein vrna log(n) hoti maps mein



#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        if(s.find(str)==s.end()){
            cout<<"no";
        }
        else{
            cout<<"yes"<<endl;
        }
    }
}
input and output
5
asd   yes
sdd   yes
uij   yes
uji
opk
3
asd
uji
opk

