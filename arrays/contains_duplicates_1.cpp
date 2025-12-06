#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
bool contain_duplicate(vector<int>& vec){
    sort(vec.begin(), vec.end());
    for(int i = 0; i < vec.size() - 1; i++){
        if (vec[i] == vec[i+1])
        {
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> vec = {1,1,1,3,3,4,3,2,4,2};
    bool result = contain_duplicate(vec);
    cout<<result<<" ";
return 0;
}


// 🚀 Best Optimal Approach (O(n))

// bool contain_duplicate(vector<int>& vec) {
//     unordered_set<int> s;

//     for (int num : vec) {
//         if (s.count(num)) return true;
//         s.insert(num);
//     }
//     return false;
// }
