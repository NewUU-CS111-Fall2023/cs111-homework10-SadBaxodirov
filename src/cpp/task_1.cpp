/*
 * Author:
 * Date:
 * Name:
 */

class Problem1 {
public:
    void problem1(int numbers[], int n) {
        int sum = 0;
        vector<int> result;
        for (int i = 0; i < n; i++) {
            if (numbers[i] != 0) {
                sum += numbers[i];
            }
            if (numbers[i] == 0) {
                result.push_back(sum);
                sum = 0;
            }
        }
        for (int i = 1; i < result.size(); i++)
            cout << result[i] << " ";
    }
};
