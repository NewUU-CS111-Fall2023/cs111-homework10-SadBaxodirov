/*
 * Author:
 * Date:
 * Name:
 */

class Problem4 {
public:
    vector<int> multiply( vector<int> num1, vector<int> num2) {
        vector<int> result;
        for (int i=0;i<num2.size()-1;i++){
            result.insert(result.end(), num1.begin(),num1.end()-1);
        }
        result.push_back(1);
        return result;
    }
};
