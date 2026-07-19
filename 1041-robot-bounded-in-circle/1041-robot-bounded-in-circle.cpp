class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x = 0, y = 0;

        vector<string> directions = {"North", "East", "South", "West"};
        int j = 0;                 
        string dir = directions[j];

        for (char ch : instructions) {
            if (ch == 'G') {
                if (dir == "North")
                    y++;
                else if (dir == "South")
                    y--;
                else if (dir == "East")
                    x++;
                else if (dir == "West")
                    x--;
            }
            else if (ch == 'L') {
                j = (j + 3) % 4;
                dir = directions[j];
            }
            else if (ch == 'R') {
                j = (j + 1) % 4;
                dir = directions[j];
            }
        }

        return (x == 0 && y == 0) || dir != "North";
    }
};