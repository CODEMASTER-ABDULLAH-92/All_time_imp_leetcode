// 🚀 What is a vector in C++?
// vector is a dynamic array provided by STL.
// It can grow and shrink in size automatically.
// 👉 Think of vector as an array that can resize itself.

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     // vector<int> vec;
//     // vector<int> vec(4);
//     // vector<int> vec = {1,2,3,4}
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     vec.push_back(5);

//     for (auto i : vec)
//     {
//         cout << i << " ";
//     }

//     vec.pop_back();
//     cout << "\nSize: " << vec.size() << endl;
//     cout << "Capacity: " << vec.capacity() << endl;
//     // size() = actual number of elements
//     // capacity() = memory allocated (may be larger than size)

//     vec.erase(vec.begin() + 2); // remove element at index 2
//     return 0;
// }





// | Function        | Meaning             |
// | --------------- | ------------------- |
// | `push_back(x)`  | Insert at end       |
// | `pop_back()`    | Remove last         |
// | `size()`        | How many elements   |
// | `capacity()`    | Storage allocated   |
// | `clear()`       | Remove all elements |
// | `empty()`       | Check if empty      |
// | `erase()`       | Remove element(s)   |
// | `insert()`      | Insert at position  |
// | `begin()/end()` | Iterators           |
// | `front()`       | First element       |
// | `back()`        | Last element        |


#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    // ----------------
    // Insert at end
    // ----------------
    
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    
    // ----------------
    // Remove at end
    // ----------------
    vec.pop_back();
    
    // ----------------
    // Check The size of vector
    // ----------------
    
    cout<<"Size of the vector: "<<vec.size();
    
    // ----------------
    // capacity of Vector
    // ----------------
    cout<<"\ncapacity of the vector: "<<vec.capacity();
    
    // ----------------
    // clear
    // ----------------
    // vec.clear();
    
    // ----------------
    // Empty
    // ----------------
    // vec.empty();
    
    // ----------------
    // erase
    // ----------------
    // vec.erase(vec.begin(), vec.begin() + 2);
    for (auto it = vec.begin(); it != vec.end(); it++){
        cout<<"\n"<<*it<<" ";
    }
     return 0;
}
