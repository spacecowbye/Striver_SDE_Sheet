//brute solution
//run a double for loop


//better solution
//simple hashing
//  vector <int> v;
//         int n = arr.size();
//         unordered_map<int,int> m;
//         for(int i=0;i<n;i++){
//             int rem = target-arr[i];
//             if(m.find(rem)!=m.end()){
//                v.push_back(i);
//                v.push_back(m[rem]);
//             }
//             m[arr[i]]=i;
//         }
//         return v;


//optimal solution
//sort the array, apply binary search, if lo + hi<target, we need more value, so incerement lo
//if lo +hi >target, we need a lesser value so decrement hi
