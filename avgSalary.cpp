#include <vector>
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
        double lowest = 5000000;
        double highest = 0;
        double count = 0;
        double sum = 0;
        for (int i = 0; i < salary.size(); i++){
            if (salary[i] < lowest){
                lowest = salary[i];
            }
        }
        for (int j = 0; j < salary.size(); j++){
            if (salary[j] > highest){
                highest = salary[j];
            }
        }
        
        for (int x = 0; x < salary.size(); x++){
            if ( salary[x] != lowest && salary[x] != highest){
                count++;
                sum = sum + salary[x];
            }
        }
        
        return(sum/count);
    }
};