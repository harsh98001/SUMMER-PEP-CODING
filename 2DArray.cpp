#include<iostream>
using namespace std;
int main(){
    const int i = 4, j = 4;
    int arr[i][j] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}
};
for(int a = 0; a < 4; a++){
    for(int b = 0; b < 3; b++){
        cout<< arr[a][b]<<" ";
    }
    cout<<endl;
    }
return 0;
}