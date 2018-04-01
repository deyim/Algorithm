class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> Morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<string> FoundString;
        
        for(auto it = words.begin(); it != words.end(); it++){
            string thisMorse ="";
            string word = *it;
            for(auto itt = word.begin(); itt != word.end(); itt++){
                thisMorse += Morse[*itt-'a'];
            }
           printf("%s\n", thisMorse); if(find(FoundString.begin(),FoundString.end(),thisMorse)!=FoundString.end()){
                FoundString.push_back(thisMorse);
            }
        }
        
        return FoundString.size();
    }
};