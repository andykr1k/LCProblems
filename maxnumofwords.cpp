class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int spaces = 0;
        int highest = 0;
        for (int i = 0; i < sentences.size(); i++){
            for (int j = 0; j < sentences[i].size(); j++){
                if (sentences[i][j] == ' '){
                    spaces++;
                }
            }
            if (spaces > highest){
                highest = spaces;
            }
            spaces = 0;
        }
        return highest + 1;
    }
};