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
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
void print(set<string>s){
    for(auto value:s){
        cout<<value<<endl;
    }
}
int main() {
	set<string>s;
    s.insert("abc");//log(n) insertion 
    s.insert("dfg");
    s.insert("tyh");
    auto it=s.find("abcd");//o(log(n)) agar yaha abc hota to delete ho jata in output
    if(it!=s.end())
        s.erase(it);

print(s);
	/*
	abc
	dfg
	tyh
	*/
 ////s.erase value bhi input leta and iterator bhi input leta h

	
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//find unique strings using set in lexacial order set use krengy already sorted hota h
#include <bits/stdc++.h>
using namespace std;
int main(){
    set<string>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string str;
        cin>>str;
        s.insert(str);

    }
    for(auto value:s){
        cout<<value<<endl;
    }
    }
 /*input          output
 7
abc              abc
abc              rgf
rgf              egf
egf
rgf
egf
egf
