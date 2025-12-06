// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> twoSum(vector<int>& vec, int target){
//     for(int i = 0; i < vec.size(); i++){
//         for(int j = i + 1; j < vec.size(); j++){
//             if (vec[i] + vec[j] == target){
//                 return {i, j};
//             }
//         }
//     }
//     return {};
// }

// int main()
// {
//     vector<int> vec = {2, 7, 11, 15};
//     vector<int> ans = twoSum(vec, 9);

//     if(!ans.empty()){
//         cout << ans[0] << " " << ans[1] << endl;
//     } else {
//         cout << "No Pair Found" << endl;
//     }

//     return 0;
// }



// optimal solution 

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;  // value -> index

    for (int i = 0; i < nums.size(); i++) {
        int needed = target - nums[i];

        if (map.find(needed) != map.end()) {
            return {map[needed], i};  // found the pair
        }

        map[nums[i]] = i;  // store value with its index
    }

    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    vector<int> ans = twoSum(nums, 9);

    if (!ans.empty()) {
        cout << ans[0] << " " << ans[1] << endl;
    } else {
        cout << "No pair found";
    }
}
