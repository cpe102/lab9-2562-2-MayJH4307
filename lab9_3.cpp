//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
    int n=0;
    int i = 0;
    float mean,st;
    float sum1 = 0,sum2=0;
    string text;

    ifstream score("C:\\Users\\admin\\Documents\\ComPro\\LABinClass\\lab9-2562-2-MayJH4307\\score.txt");
    while(getline(score,text)){
        cout << text <<endl;
        sum1 += atof(text.c_str());
        sum2 += pow(atof(text.c_str()),2);
        n++;
    }
    cout << "Number of data = " << n << endl;
    cout << "Mean = " << sum1/n << endl;
    cout << "Standard deviation = " << sqrt((sum2/n)-((sum1/n)*(sum1/n)));
    score.close();

    return 0;

}