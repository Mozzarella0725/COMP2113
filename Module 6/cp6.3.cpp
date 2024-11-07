#include <iostream>
using namespace std;

int main(){
    double x[2][2][3] = {
            { {3, 4, 2}, {0, -3, 9} }, 
            { {13, 4, 56}, {5, 9, 3}}};
    int max_value=x[0][0][0], min_value=x[0][0][0];
    for (int i=0; i<=2; i++){
        for (int j=0; j<=2; j++){
            for (int k=0; k<3; k++){
                if (x[i][j][k] >= max_value){
                    max_value = x[i][j][k];
                }
                if (x[i][j][k] <= min_value){
                    min_value = x[i][j][k];
                }
            }
        }
    }
    cout << max_value << endl;
    cout << min_value << endl;
    return 0;
}