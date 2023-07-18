//brute force solution
//take two variables repeating = -1, and missing = -1,
//an array with n size will have numbers from 1 to n, for every number in 1 to n
//we run a loop to check its count
//if count = 0, missing = element, if count ==2 , repeating = element
//break out of loop when missing!=-1 and repeating != -1


// BETTER SOLUTION
//use hashing
//we will need a hash array of size n+1


//Optimal solution
//finding using sumn and sumn2 and osumn and osumn2


// pair<int,int> missingAndRepeating(vector<int> &arr, int n)
// {
// 	// Write your code here 
// 	long long sumn=0;
// 	long long sumn2=0;
// 	long long osumn=((long long )n)*(n+1)/2;
// 	long long osumn2=((long long) n)*(n+1)*(2*n+1)/6;
// 	for(int i=0;i<n;++i){
// 		sumn+=arr[i];
// 		sumn2+=arr[i]*arr[i];

// 	}	
// 	int x = ((sumn2-osumn2)/(sumn-osumn)+(sumn-osumn))/2;
// 	int y = x-sumn+osumn;
// 	return make_pair(y,x);
// }
