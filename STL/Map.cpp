// 🚀 What is a map?
//  - A map is an associative container in STL.
//  - It stores data as key-value pairs (like a dictionary in Python).
//  - Keys are unique — you cannot have duplicate keys.
//  - Keys are automatically sorted in ascending order.
//  - Values can be anything (int, string, object, etc.).

// Internally, map is implemented as a balanced binary search tree (usually Red-Black Tree).

#include<iostream>
#include<map>
using namespace std;
int main(){
map<int,string> m;
m[0] = "Abdullah";
m[1] = "Rajab";
m[2] = "Andrew ";
m[3] = "Teritan";

// Access elements
cout<<m[0];
cout<<m.at(0);

// Erase elements
m.erase(1);

// Iterate over a map

for(auto it = m.begin(); it != m.end(); it++){
    cout<<it -> first <<" -> "<<it -> second<<" "<<endl;
}
for(auto &it:m){
    cout<<it.first<<" -> "<<it.second<<endl;
}
     return 0;
}