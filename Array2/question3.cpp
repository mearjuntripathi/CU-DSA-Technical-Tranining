#include<bits/stdc++.h>
using namespace std;

void setZero(vector<vector<int>> &matrix){
    int n = matrix.size();
    vector<int> rows(n);
    vector<int> cols(n);

    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
            if(matrix[i][j] == 0)
                rows[i] = cols[j] = 1;
    
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++)
            if(rows[i] || cols[j])
                matrix[i][j] = 0;
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

int main(){
    vector<vector<int>> matrix = {
        {1, 0, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 0}
    };

    cout << "Original matrix:" << endl;
    printMatrix(matrix);
    
    setZero(matrix);
    
    cout << "Matrix after set zero:" << endl;
    printMatrix(matrix);
    
    return 0;
}