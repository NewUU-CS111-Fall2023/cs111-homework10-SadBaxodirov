/*
 * Author:
 * Date:
 * Name:
 */

class Problem3 {
public:
    int problem3(string n1, string n2){
        int result = 0;
        if (n1.size()>n2.size())
            result= 1;
        else if(n1.size()<n2.size())
            result= 11;
        else {
            for (int i=0;i<n1.size();i++) {
                if(n1[i]==n2[i]) {
                    continue;
                }
                else if (n1[i]-'0'>n2[i]-'0'){
                    result= 1;
                }
                else {
                    result= 11;
                }
            }
        }
        return result;
    }
};
