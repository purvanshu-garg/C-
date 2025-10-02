#include <iostream>
using namespace std;
#include <string>
/*Program 1
int main(void){
    float a = 5.5;
    float b = 6.5;
    float c = 7.5;

    if (a<b && a<c){
        cout << "A is the smallest number among given three" << endl;
    }
    else{
        "Check further";
    }
    return 0;
} */

/*Program - 2
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cout << "Kindly enter 3 numbers " << endl;
    }
    else {
        if ( stoi(argv[1]) + stoi(argv[2]) > stoi(argv[3]) && stoi(argv[2]) + stoi(argv[3]) > stoi(argv[1]) && stoi(argv[1]) + stoi(argv[3]) > stoi(argv[2]) ) {
          cout << "Triangle is possible";  
        }
        else {
            cout << "Triangle is not Possible";
        }
    }
    return 5;
}*/

/*Program-3
int main(int argc,char* argv[]){
    if (argc!=2){
        cout << "kindly enter a number" << endl ;
        return 1;
    }
    if (stoi(argv[1])%4==0){
        cout << "Yes it is a leap year (although a very weak condition)" <<endl ;
    }
    else{
        cout << "Not a leap year";
    }
    return 0;
}*/

/*Program -4

int main(int argc,char* argv[]){
    if (argc<4){
        cout << "Please enter 2 numbers and a operation" << endl;
        return 1;
    }
    float output;
    string op = argv[3];
    if (op == "+"){
         output = stof(argv[1])+stof(argv[2]);
    }
    else if (op == "*"){
         output = stof(argv[1])*stof(argv[2]);
    }
    else if ( op == "-"){
         output = stof(argv[1])-stof(argv[2]);
    }
    else if (op == "/"){
         output = stof(argv[1])/stof(argv[2]);
    }
    cout << "Here is your output " << output << endl;
    return 0;
}*/
/* Program -5 ( I am not accounting here for even set of numbers or  when the data is multimodal)
int main(int argc, char* argv[]){
    if (argc<4){
        cout << "Kindly enter 3 numbers" << endl;
        return 0;
    }
    int a = stoi(argv[1]);
    int b = stoi(argv[2]);
    int c =stoi(argv[3]);
    if ((a<=b && a>=c)||(a>=b && a<=c)){
        cout << "the median is " << a << endl;
    }
    else if ((b<=c && b>=a)||(b>=c && b<=a)){
        cout << "the median is  " << b << endl;
    }
    else if ((c<=b && c>=a)||(c>=b && c<=a)){
        cout << "the median is " << c << endl;
    }
    return 0;
} */