
//WIP

class Solution {
public:
    int arrangeCoins(int n) {
        int s = n;
        int half = 0;
        int steps = 0;
        if ( s % 2 == 0){
            half = s / 2;
            while( s > 0){
                s = s - half;
                steps++;
                half--;
            }
        } else {
            half = s / 2 + 1;
            while( s > 0){
                s = s - half;
                steps++;
                half--;
            }
        }
        return steps;
    }
};