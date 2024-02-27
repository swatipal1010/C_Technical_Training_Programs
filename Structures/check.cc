#include<iostream>
using namespace std;

int main(){

    float i = 1.0, j = 2.0, sum = 0;
    int c = 0;
    while(i/j > 0.001){
        j = j + 1;
        sum = sum + i/j;
        cout << c << endl;
        c++;

    }
    return 0;

}