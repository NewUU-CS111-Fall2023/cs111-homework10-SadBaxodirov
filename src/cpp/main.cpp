/*
 USE THIS FILE FOR YOUR TESTS,
 AUTOGRADER WILL NOT EXECUTE THIS FILE.
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include <vector>
using namespace std;
#include "task_1.cpp"
#include "task_2.cpp"
#include "task_3.cpp"
#include "task_4.cpp"
#include "task_5.cpp"
#include "task_6.cpp"
#include "task_7.cpp"
#include "task_8.cpp"
#include "task_9.cpp"
#include "task_10.cpp"
#include "task_11.cpp"

int main() {
    // write your code here
    cout<<"Problem 1"<<endl;
    Problem1 problem1;
    int n1;
    cout<<"Enter the number of elements: ";
    cin>>n1;
    int numbers1[n1];//0,3,1,0,4,5,2,0
    vector<int> result1;
    cout<<"Enter the numbers:";
    for (int i=0;i<n1;i++){
        cin>>numbers1[i];
    }
    problem1.problem1(numbers1,n1);

    cout<<"Problem 2"<<endl;
    Problem2 problem2;
    vector<int> numbers2;
    vector<int> result2;
    int n2;
    while(cin>>n2){
        numbers2.push_back(n2);
    }
    result2 = problem2.add(numbers2);
    for (int i:result2){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Problem 3"<<endl;
    Problem3 problem3;
    string value31;
    string value32;
    cout<<"Enter values: ";
    cin>>value31>>value32;
    cout<<problem3.problem3(value31,value32);

    cout<<"Problem 4"<<endl;
    Problem4 problem4;
    string value4;
    vector<int> num41;
    vector<int> num42;
    cout<<"Enter num1: ";
    cin>>value4;
    for (char i:value4){
        num41.push_back(i-'0');
    }
    cout<<"Enter num2: ";
    cin>>value4;
    for (char i:value4){
        num42.push_back(i-'0');
    }
    vector<int> result4 = problem4.multiply(num41,num42);
    for (int i:result4)
        cout<<i;
    cout<<endl;

    cout<<"Problem 5"<<endl;
    Problem5 problem5;
    int value5;
    vector<int> numbers5;
    cout<<"Enter numbers: ";
    while (cin>>value5){
        numbers5.push_back(value5);
    }
    if (problem5.Triplet(numbers5))
        cout<<"True";
    else
        cout<<"False";
    cout<<endl;

    cout<<"Problem 6"<<endl;
    Problem6 problem6;
    int N6;
    int K6;
    int counter6, from, to, weight;
    vector<vector<int>> times6;
    cout<<"Enter number of edges: ";
    cin>>counter6;
    cout<<"Enter from, to and weight values of each edge: ";
    for (int i=0;i<counter6;i++){
        cin>>from>>to>>weight;
        times6.push_back(vector<int>{from, to, weight});
    }
    cout<<"Enter n and k: ";
    cin>>N6>>K6;
    int result6 = problem6.time(times6, N6, K6);
    cout<<result6;

    cout<<"Problem 7"<<endl;
    Problem7 problem7;
    vector<int> answers7;
    int value7;
    while(cin>>value7){
        answers7.push_back(value7);
    }
    cout<<problem7.numberOfRabbits(answers7)<<endl;

    cout<<"Problem 8"<<endl;
    Problem8 problem8;
    vector<int> nums8;
    int value8;
    while (cin>>value8)
        nums8.push_back(value8);
    cout << (problem8.partition(nums8) ? "true" : "false") << endl;

    cout<<"Problem 9"<<endl;
    Problem8 problem9;
    vector<int> nums9;
    return 0;
}
