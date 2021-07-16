#include <bits/stdc++.h>
using namespace std;
void print(set<string>s){
    for(auto value:s){
        cout<<value<<endl;
    }
}
int main() {
	set<string>s;
    s.insert("abc");//o(log(n)) insertion 
    s.insert("dfg");
    s.insert("tyh");
    auto it=s.find("abcd");//o(log(n))
    if(it!=s.end())
        cout<<(*it)<<endl;
    
 

	
}
