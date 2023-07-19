// good question here
// there exists an edge case
// basically in the question we have to return x to power n, x is a double and n can be any integer
// first ask the interviewer if n can have negative values or no
// if n can simply loop through n, multiplying x with itself n times
// however if n is INT_MIN that vallue cannot be stored in a positive integer, so we need to be careful that we take an integer value
//so just take convert n to long long 
//OPTIMAL SOLUTION
// class Solution {
// public:
//     double myPow(double x, int n) {
//         double ans = 1.00;
//         long long power = n;
//         if (n<0){
//             power = -1*power;
//         }

//         while(power>0){
//             if(power%2==0){
//                 x = x*x;
//                 power = power/2;
//             }
//             else{
//                 ans = ans*x;
//                 power=power-1;
//             }
//         }
//         if(n<0){
//             return double(1.0)/ans;
//         }
//         return ans;

//     }
// };