/*
 * Author:
 * Date:
 * Name:
 */
/*
 Q0,# -> Q1,same, Left
 Q0,0 -> Q0,1, Right
 Q0,1 -> Q0,same, Right
 Q1,# -> Q2,same, Right
 Q1,1 -> Q1,same, Left
 Q2,1 -> Q3,#, Right
 Q3,1 -> Halt,#, Stay
*/
class Problem2 {
public:
    vector<int> add(vector<int> numbers){
        vector<int> result;
        for(int i:numbers){
            if(i!=0){
                result.push_back(i);
            }
        }
        result.pop_back();
        return result;
    }
};
