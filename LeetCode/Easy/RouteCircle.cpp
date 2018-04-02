class Solution {
public:
    bool judgeCircle(string moves) {
        int R=0,L=0,U=0,D=0;
        for(auto c : moves){
            if(c=='R') R++;
            else if(c=='L') L++;
            else if(c=='U') U++;
            else D++;
        }
        if(R==L && U==D)
            return true;
        else
            return false;
        
    }
};
