#include<iostream>
using namespace std;

struct Element
{
    int row;
    int col;
    int value;
};


int main(){
        int matrix[3][4] = {
        {0,0,3,0},
        {22,0,0,0},
        {0,7,0,0}
    };

    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int count =0;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(matrix[i][j] !=0){
                count++;
            }
        }
    }

    Element sparse[count];
    int k = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] != 0) {
                sparse[k].row = i;
                sparse[k].col = j;
                sparse[k].value = matrix[i][j];
                k++;
            }
        }
    }

    cout << "\nSparse Matrix Representation (row, col, value):" << endl;
    cout << "Row Col Value" << endl;
    for (int i = 0; i < count; i++) {
        cout << sparse[i].row << "   "
             << sparse[i].col << "   "
             << sparse[i].value << endl;
    }
    return 0;
}