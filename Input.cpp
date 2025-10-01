#include <iostream>
using namespace std;
int main(void){
    const int MAX_SIZE=100;
    char input[MAX_SIZE];

    cout << "Who are you?" << endl ;

    cin.getline(input,MAX_SIZE); //there is something with this using two times MAX_SIZE thing that i did not understand till now.

    cout << "Hi " << input << endl;

    return 0;
}