/*
 * Author:
 * Date:
 * Name:
 */
struct Literal {
    char variable;
    bool isNegated; 

    Literal(char var, bool neg) : variable(var), isNegated(neg) {}
};
class Problem9 {
public:
    bool ClauseSatisfied(const unordered_map<char, bool>& truthAssignment, const vector<Literal>& clause) {
        for (const Literal& literal : clause) {
            bool value = truthAssignment.at(literal.variable);
            if (literal.isNegated) {
                value = !value;
            }
            if (value) {
                return true;
            }
        }
        return false; 
    }
    bool CNFSatisfied(const vector<vector<Literal>>& cnfFormula, const unordered_map<char, bool>& truthAssignment) {
        for (const vector<Literal>& clause : cnfFormula) {
            if (!ClauseSatisfied(truthAssignment, clause)) {
                return false;
            }
        }
        return true;  
    }
};
