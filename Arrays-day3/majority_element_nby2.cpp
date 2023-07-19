//use moore's voting algorithm for optimal solution


//Brute force solution
//iterate through all the elements


//Better solution
//use hashing

//optimal solution
// int majorityElement(vector<int>& arr) {
//         int el=arr[0];
//         int n=arr.size();
//         int count = 0;
//         for(int i =0;i<n;i++){
//             if(el==arr[i]){
//                 count++;
//             }
//             else if(el!=arr[i]&&count==0){
//                 el=arr[i];
//             }
//             else{
//                 count--;
//             }
//         }
//         return el;
//     }