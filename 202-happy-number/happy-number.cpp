class Solution {
public:
   int getNext(int n) {
        int sum = 0;
        while(n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        for(int i = 0; i < 100; i++) { // arbitrary limit
            n = getNext(n);
            if(n == 1) return true;
        }
        return false;
    }
};