//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ifstream cheerbook;
    cheerbook.open("C:\\Users\\admin\\Documents\\ComPro\\LABinClass\\lab9-2562-2-MayJH4307\\cheerbook.txt");
    string textline;
    ofstream cheerbook_copy;
    cheerbook_copy.open("C:\\Users\\admin\\Documents\\ComPro\\LABinClass\\lab9-2562-2-MayJH4307\\cheerbook_copy.txt");
    cheerbook_copy << "-------------------- SOTUS ---------------------" << endl;
    
    while(getline(cheerbook,textline)){
         cheerbook_copy << textline << "\n";
    }
    cheerbook_copy << "-------------------- SOTUS ---------------------" << endl;
    cheerbook.close();
    cheerbook_copy.close();
    return 0;    

}

