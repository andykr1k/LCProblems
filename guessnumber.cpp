///PROBLEM #374

int guess(int x) {
    
}


class Solution {
public:
    int guessNumber(int n) {
        long int l = 0;
        long int r = n;
        long int guessed;
        while (guess(guessed) != 0 ){
            guessed = (l+r)/2;
            if (guess(guessed) > 0) {
                l = guessed + 1;
            }
            if (guess(guessed) < 0) {
                r = guessed - 1;
            }
        }
        return guessed;
    }
};