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
    auto it=s.find("abcd");//o(log(n))//empty string will print in this.=s.end() hogya h
    if(it!=s.end())
        cout<<(*it)<<endl;
    
 

	
}
//////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
void print(set<string>s){
    for(auto string:s){
        cout<<string<<endl;
    }
}
int main() {
	set<string>s;
    s.insert("abc");//log(n) insertion 
    s.insert("dfg");
    s.insert("tyh");
    s.insert("abc"); abc ek hi baar print hoga baar baar nhi 
    print(s);
 
/*
abc print
dfg
tyh
*/
	
}

