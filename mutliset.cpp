
#include <bits/stdc++.h>
using namespace std;
void print(multiset<string>s){
    for(auto value:s){
        cout<<value<<endl;
    }
}
int main() {
	multiset<string>s;
    s.insert("abc");//log(n) insertion 
    s.insert("dfg");
    s.insert("tyh");
    s.insert("abc");
    print(s);
    

	
}
abc do baar print hoga multiset mein
abc
abc
dfg
tyh
