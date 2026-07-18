class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        for(auto it : operations){
            if(it == "+"){
                record.push_back(record[record.size()-1] + record[record.size()-2]);
            }
            else if(it == "D"){
                record.push_back(2*record[record.size()-1]);
            }
            else if(it == "C"){
                record.pop_back();
            }
            else{
                record.push_back(stoi(it));
            }
        }
        int sum = 0;
        for(int num : record){
            sum += num;
        }

        return sum;

    }
};