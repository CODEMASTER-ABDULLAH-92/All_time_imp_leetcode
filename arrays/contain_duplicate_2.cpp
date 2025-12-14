
// TLE --> Time Limit Exceed


// #include<iostream>
// #include<vector>
// using namespace std;
// bool contain_duplicate_2(vector<int>& vec, int k){
//     for(int i = 0; i<vec.size(); i++){
//         for(int j = i; j<vec.size(); j++){
//             if (vec[i] == vec[j] && j - i == k)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }
// int main(){
//     vector<int> vec = {1,2,3,1,2,3};
//     int response = contain_duplicate_2(vec,2);
//     cout<<response<<" ";
//      return 0;
// }



// Optimal Solution 

// class Solution {
// public:
//     bool containsNearbyDuplicate(vector<int>& nums, int k) {
//         unordered_map<int, int> lastSeen;

//         for(int i = 0; i < nums.size(); i++){
//             if(lastSeen.count(nums[i]) > 0){
//                 if(i - lastSeen[nums[i]] <= k){
//                     return true;
//                 }
//             }
//             lastSeen[nums[i]] = i;
//         }
//         return false;
//     }
// };


#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
bool checkDuplicat(vector<int>& vec, int k){
    unordered_map<int,int> lastseen;
    for(int i = 0; i<vec.size(); i++){
        if (lastseen.count(vec[i]) > 0)
        {
            if(i - lastseen[vec[i]] <= k){
                return true;
            }
        }
        lastseen[vec[i]] = i;
    }
    return false;
}
int main(){

    return 0;
}