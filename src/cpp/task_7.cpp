/*
 * Author:
 * Date:
 * Name:
 */
#include <unordered_map>
class Problem7 {
public:
    int numberOfRabbits(vector<int> answers) {
        unordered_map<int, int> count;
        for (int answer : answers) {
            count[answer]++;
        }
        int minRabbits = 0;
        for (const auto& entry : count) {
            int groupSize = entry.first + 1;
            int rabbitsInGroup = entry.second;
            minRabbits += (groupSize + rabbitsInGroup - 1) / groupSize * groupSize;
        }
        return minRabbits;
    }
};
