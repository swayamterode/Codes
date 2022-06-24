class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> row(matrix.size(), -1); //setting row values = -1
        vector<int> col(matrix[0].size(), -1); //setting col values = -1
        int rows = matrix.size();
        int cols = matrix[0].size(); 
        //we traverse through the entire matrix and we check, if any element is 0 or not,
        for(int i = 0; i < rows; i++) { //matrix.size gives us the ROW size
            for(int j = 0; j < cols; j++) { //matrix[0].size gives us the COL size.
                if(matrix[i][j] == 0){
                    row[i] = 0;
                    col[j] = 0;
                }
            }
        }
        //Traversing through every element to findout if any element is set to 0 or not, if yes then change entire R & C to 0.
        for(int i = 0; i < rows; i++) { //matrix.size gives us the ROW size
            for(int j = 0; j < cols; j++) { //matrix[0].size gives us the COL size.
                if(row[i] ==0 || col[j]==0) { //checks, if element of ROW and COL are 0 or not
                    matrix[i][j] = 0; // if element it zero change entire row and col to 0.
                }
            }
        }
    }
};
