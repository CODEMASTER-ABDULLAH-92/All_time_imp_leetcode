// #include <iostream>
// #include <vector>
// #include <climits>
// using namespace std;
// int best_time_to_buy_and_sell_stocks(vector<int> &vec)
// {
//     int min_value = INT_MAX;
//     int max_profit = 0;
//     for (auto i = 0; i < vec.size(); i++){
//         if (min_value > vec[i])
//         {
//             min_value = vec[i];
//         }else if (max_profit < vec[i] - min_value)
//         {
//             max_profit = vec[i] - min_value;
//         }
//     }   
//     return max_profit;
// }
// int main()
// {

//     vector<int> vec = {7, 1, 5, 3, 6, 4};
//     int result = best_time_to_buy_and_sell_stocks(vec);
//     cout << result << endl;
//     return 0;
// }
