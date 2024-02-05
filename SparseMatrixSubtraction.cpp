#include<bits/stdc++.h>
using namespace std;

class Element{
    public:
    int row,col,value;
};

vector<Element> SparseMatrixSubtraction(const vector<Element> &mat1,const vector<Element> &mat2){
    vector<Element> result;
    int i=0,j=0;
    while (i<mat1.size() && j<mat2.size())
    {
        /* code */
        if (mat1[i].row < mat2[j].row || (mat1[i].row == mat2[j].row && mat1[i].col < mat2[j].col)){
            result.push_back(mat1[i]);
            i++;
        }
        else if (mat1[i].row > mat2[j].row || (mat1[i].row == mat2[j].row && mat1[i].col > mat2[j].col)){
            result.push_back({mat2[j].row,mat2[j].col,-mat2[j].value});
            j++;
        }
        else {
            result.push_back({mat1[i].row,mat1[i].col,mat1[i].value + mat2[j].value});
            i++;
            j++;
        }
    }
    while (i < mat1.size())
    {
        /* code */
        result.push_back(mat1[i]);
        i++;
    }

    while (j < mat2.size())
    {
        /* code */
        result.push_back({mat2[j].row,mat2[j].col,-mat2[j].value});
        j++;
    }
    return result;
}

int main(){
    vector<Element> mat1 = {
        {0, 1, 3},
        {1, 2, 4},
        {2, 0, 1}
    };

    vector<Element> mat2 = {
        {0, 1, 2},
        {1, 2, 1},
        {2, 0, 5}
    };

    vector<Element> result = SparseMatrixSubtraction(mat1,mat2);
    for (const auto& element : result){
        cout<<element.row<<" "<<element.col<<" "<<element.value<<endl;
    }
}