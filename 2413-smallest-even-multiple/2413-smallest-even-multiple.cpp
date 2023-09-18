class Solution {
public:
    int smallestEvenMultiple(int n) {       
        if(n%2==0) //If n is even return as it is
          return n;
        else
        return n*2;//If n is odd return n * 2
    }
};