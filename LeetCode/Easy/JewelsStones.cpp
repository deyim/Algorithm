/*
URL: https://leetcode.com/problems/jewels-and-stones
*/


/*
JAVA solution
public int numJewelsInStones(String J, String S) {
    return S.replaceAll("[^" + J + "]", "").length();
}

return S.replaceAll("[^"+J+"]", "").length();

replace every letter in S that is not in J into ""
문자 클래스 안의 문자를 제외한 나머지를 선택한다. 
예를 들면 [^abc]d는 ad, bd, cd는 포함하지 않고 ed, fd 등을 포함한다. 
[^a-z]는 알파벳 소문자로 시작하지 않는 모든 문자를 의미한다.
*/




class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int howMany=0;
        for(auto it = S.begin(); it != S.end(); it++){
            if(J.find(*it)!=std::string::npos){
                howMany++;
            }
        }
        return howMany;
    }
};

string stringToString(string input) {
    assert(input.length() >= 2);
    string result;
    for (int i = 1; i < input.length() -1; i++) {
        char currentChar = input[i];
        if (input[i] == '\\') {
            char nextChar = input[i+1];
            switch (nextChar) {
                case '\"': result.push_back('\"'); break;
                case '/' : result.push_back('/'); break;
                case '\\': result.push_back('\\'); break;
                case 'b' : result.push_back('\b'); break;
                case 'f' : result.push_back('\f'); break;
                case 'r' : result.push_back('\r'); break;
                case 'n' : result.push_back('\n'); break;
                case 't' : result.push_back('\t'); break;
                default: break;
            }
            i++;
        } else {
          result.push_back(currentChar);
        }
    }
    return result;
}

int main() {
    string line;
    while (getline(cin, line)) {
        string J = stringToString(line);
        getline(cin, line);
        string S = stringToString(line);
        
        int ret = Solution().numJewelsInStones(J, S);

        string out = to_string(ret);
        cout << out << endl;
    }
    return 0;
}