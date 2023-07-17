// class Solution {
// public:
//     int maxProfit(vector<int>& arr) {
//         int maxProfit = 0;
//         int minPrice = arr[0];

//         for (int i = 0; i < arr.size(); i++) {
//             minPrice = min(arr[i], minPrice);
//             int profit = arr[i] - minPrice;
//             maxProfit = max(maxProfit, profit);
//         }
//         return maxProfit;
    
//     }
// };