//priority queue ki jgh multiset use krty hain do bar print krta h 
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
////////////////////////////////////important erase function in multiset ///////////////////////////////////

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
    auto it=s.find("abc");
    //if(it!=s.end()){
    //    s.erase(it);//phly abc ka iterator return krega //and dusre abc ko delete krdega -- abc dfg tyh print hoga 
    //}
   s.erase("abc");//ye saare abc ko delete krdega
    print(s);//phly abc ka iterator return krega find()
    

	
}
