#include <iostream>

using namespace std;

int main(){

 int arr[5][5] = {};         //i rows j col //storing input in 2-d array.


 int output = 0;


 for(int i=0 ; i!=5; ++i){
    for(int j= 0 ; j!=5 ; ++j){
            cin >> arr[i][j];
            if (arr[i][j]==1){
                output = abs(i-2) + abs(j-2);
            }
    }
    }

cout << output << endl;














}
