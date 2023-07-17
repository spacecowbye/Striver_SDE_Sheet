//brute force solution
//generate all permutations, store them in sorted order and find the required one, no need to code this up
//will take too much time
//tc =>to generate all permutations will be n!*n

//better solution
//there is a function  in STL called next_permutation in which you can pass a list
//next_permutation(arr.begin(),arr.end())//modifies arr in place

//OPTIMAL SOLUTION
//next element tends to have longer prefix match
class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
         bool flag = true;
int index = -1;
for (int i = n - 2; i >= 0; i--) {
    if (arr[i] < arr[i + 1]) {
        flag = false;
        index = i;
        break;
    }
}
if (flag) {
    reverse(arr.begin(), arr.end());
   
} else {
    for (int i = n - 1; i > index; i--) {
        if (arr[i] > arr[index]) {
            swap(arr[i], arr[index]);
            break;
        }
    }
    reverse(arr.begin() + index + 1, arr.end());
   
}
    }
};