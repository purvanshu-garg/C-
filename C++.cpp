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
}