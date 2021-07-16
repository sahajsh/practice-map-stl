//m.find() returns iterator-- >yaha 3 present h to iterator milgya

#include <bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr:m){
        cout<<pr.first <<" "<<pr.second<<endl;
    }
}
int main() {
	map<int ,string>m;
    m[3]="ansk";//insert krny ki time complexity o(log(n))
    m[2]="ass";
    m[8]="ass";
    auto it= m.find(3);// o(log(n)) time complexity
    if(it==m.end()){
        cout<<"no";

    }else{
        cout<<(*it).first<<" "<<(*it).second;
    }
   // print(m);
  

	return 0;
}
//agar 7 daalengy to yaha no print hoga it return m.end()
--------------------------------------------------------------------------------------------------------------------
//m.erase()----->key input and iterator input

#include <bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr:m){
        cout<<pr.first <<" "<<pr.second<<endl;
    }
}
int main() {
	map<int ,string>m;
    m[3]="ansk";//insert krny ki time complexity o(log(n))
    m[2]="ass";
    m[8]="ass";
    auto it= m.find(3);// o(log(n)) time complexity
    m.erase(3);//o(log(n))
    print(m);
  

	return 0;
}
