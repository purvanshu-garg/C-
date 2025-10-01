#include <iostream>
#include <string>
using namespace std;
/* PROGRAM 1
int main(void){
    const int MAX_SIZE=100;
    char input[MAX_SIZE];

    cout << "Who are you?" << endl ;

    cin.getline(input,MAX_SIZE); //there is something with this using two times MAX_SIZE thing that i did not understand till now.

    cout << "Hi " << input << endl;

    return 0;
} */

/*PROGRAM 2
int main(void){
    const int MAX_SIZE=100;
    char input[MAX_SIZE];

    cout <<  "Who are you?" << endl;
    cin.getline(input,MAX_SIZE);
    
    cout << "Whats your age ?" <<endl;
    int age;
    cin >> age;

    cout << "Hello " << input << ". Your age is - " << age <<endl;
    return 0; 
}
*/

/*PROGRAM 3*/
int main(int argc,char* argv[]){
    if (argc<=2){
        cout << "Run the program with a string and number" << endl ;
        return 1;
    }
    cout << "Hello " << argv[1] << " Age " << stoi(argv[2]) << endl;
    return 0;
}
