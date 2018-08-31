#include <iostream>
#include <vector>
#include "vector_util.h"
#include "kakao_blind3_2017_4.cpp"

using namespace std;

int main() {
    vector<string> testCases = {
            "ABCDEFG",
            "CC#BCC#BCC#BCC#B",
            "ABC"
    };
    vector<vector<string>> testCases2 = {
            {"12:00,12:14,HELLO,CDEFGAB", "13:00,13:05,WORLD,ABCDEF"},
            {"03:00,03:30,FOO,CC#B", "04:00,04:08,BAR,CC#BCC#BCC#B"},
            {"12:00,12:14,HELLO,C#DEFGAB", "13:00,13:05,WORLD,ABCDEF"},
    };
//    vector<int> testCases3 = {
//            2, 2, 2
//    };
//    vector<int> testCases4 = {
//            1, 1, 2
//    };

    int numCases = testCases.size();
    for (int i = 0; i < numCases; i++) {
//        cout << (solution(testCases[i]) ? "true" : "false") << endl;
//        cout << testCases[i] << endl;
//        cout << solution(testCases[i]) << endl;
        cout << solution(testCases[i], testCases2[i]) << endl;
//        cout << solution(testCases[i], testCases2[i], testCases3[i]) << endl;
//        cout << solution(testCases[i], testCases2[i], testCases3[i], testCases4[i]) << endl;
//        cout << solution(testCases[i], testCases2[i]) << endl;

//        solution(testCases[i]);
//        vector<string> result = solution(testCases[i]);
//        vector<string> result = solution(testCases[i], testCases2[i]);
//        vector<string> result = solution(testCases[i], testCases2[i], testCases3[i]);
//        for(int i=1; i<=result.size(); i++) {
//            cout << i << "\t";
//        }
//        printVector(result, ", ");

//        vector<vector<int>> result = solution(testCases[i]);
//        for(int i=0; i<result.size(); i++)
//            printVector(result[i], " ");
    }
    return 0;
}