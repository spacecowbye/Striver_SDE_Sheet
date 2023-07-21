//naive solution
//generate all substrings
// class Solution {
// public:
//     int lengthOfLongestSubstring(string str) {
//         if(str.size()==0)
//       return 0;
//   int maxans = INT_MIN;
//   for (int i = 0; i < str.length(); i++) // outer loop for traversing the string
//   {
//     unordered_set < int > set;
//     for (int j = i; j < str.length(); j++) // nested loop for getting different string starting with str[i]
//     {
//       if (set.find(str[j]) != set.end()) // if element if found so mark it as ans and break from the loop
//       {
//         maxans = max(maxans, j - i);
//         break;
//       }
//       set.insert(str[j]);
//     }
//   }
//   return maxans;
//     }
// };
//optimal solution
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_map <char,int> m;
//         int left = 0;
//         int right = 0,len=0;
//         int n =s.size();
//         while (right < n) {
//             if (m.find(s[right]) != m.end()) {
//                 // Move the left pointer to the right of the first occurrence of the repeated character
//                 left = max(left, m[s[right]] + 1);
//             }
//             m[s[right]] = right;
//             len = max(len, right - left + 1);
//             right++;
//         }
//         return len;
//     }
// };