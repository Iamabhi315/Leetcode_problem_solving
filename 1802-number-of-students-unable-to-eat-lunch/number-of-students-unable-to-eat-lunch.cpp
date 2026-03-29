class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count = 0;
        int i = 0;
        int j = 0;

        while(count < students.size() && j < sandwiches.size()){
            if(students[i] == sandwiches[j]){
                count = 0;
                students.erase(students.begin() + i);
                j++;

                if(students.size() == 0) break;
                i = i % students.size();
            }
            else{
                count++;
                i = (i+1) % students.size();
            }
        }

        return students.size();
    }
};