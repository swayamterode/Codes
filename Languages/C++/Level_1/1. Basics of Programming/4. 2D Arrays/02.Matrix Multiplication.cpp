#include<iostream>
#include<vector>

using namespace std;

void matrixMult(vector<vector<int>> A, vector<vector<int>> B){
    int r1 = A.size();
    int c1 = A[0].size();
    int r2 = B.size();
    int c2 = B[0].size();

    if(c1 != r2)
    {
        cout<<"Invalid input";
        return;
    }
    vector<vector<int>> pdt;
    for(int i = 0; i<r1; i++) {
        vector<int> arr;
    for(int j = 0; j<c2; j++){
        int mul = 0;
        for(int k = 0; k<c1; k++){
            mul += (A[i][k] * B[k][j]); 
        }
        arr.push_back(mul);
    }
    pdt.push_back(arr);
}

for(int i = 0; i<r1; i++) {
    for(int j= 0; j<c2; j++){
        cout<<pdt[i][j]<<" ";
    }
    cout<<endl;
}
}

int main(){
    int r1;
    int c1;
    cin>>r1;
    cin>>c1;

    vector<vector<int>> mat1;
    for(int i= 0; i< r1; i++){
        vector<int> arr;
        for(int j= 0; j< c1; j++){
            int ele;
            cin>> ele;
            arr.push_back(ele);
        }
        mat1.push_back(arr);
    }

    int r2;
    int c2;
    cin>>r2;
    cin>>c2;

    vector<vector<int>> mat2;
    for(int i= 0; i< r2; i++){
        vector<int> arr;
        for(int j= 0; j< c2; j++){
            int ele;
            cin>> ele;
            arr.push_back(ele);
        }
        mat2.push_back(arr);
    }

    matrixMult(mat1, mat2);
}
