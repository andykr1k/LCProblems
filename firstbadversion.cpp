///PROBLEM #278


int isBadVersion(int n){
    //Defined by Leetcode
}


//Find First False Return By isBadVersion function and return the version before
//Brute Force Method
class Solution {
public:
    int firstBadVersion(int n) {
        if ( !isBadVersion(n) ){
            return n + 1;
        }
        return firstBadVersion(n - 1);
    }
};

//Efficient Method
/*
Search through isBadVersion using Binary Search
low = 1
high = n
mid = low + high / 2
if mid > target
low = mid
mid = low + high / 2
else 
high = mid
mid = low + high / 2
*/