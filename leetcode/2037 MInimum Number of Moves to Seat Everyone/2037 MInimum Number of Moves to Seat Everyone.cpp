#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());sort(students.begin(),students.end());
        int s=0;
        for(int i=0;i<seats.size();i++) s+=abs(students[i]-seats[i]);
        return s;
    }
};

int main() {
    vector<int> seats={3,1,5},students={2,7,4};int n=seats.size();
    Solution solution;
    cout << solution.minMovesToSeat(seats,students);
    return 0;
}
