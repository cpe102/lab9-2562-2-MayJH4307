#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grade ;
	int i = 1;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl ;
	do{
		cout << "Student [" << i << "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == '0') break;
		if(grade == 'A') // if grade is A
			//Do something
			count[0]++;
		else if(grade == 'B') // if grade is B
			//Do something
			count[1]++;
			else if(grade == 'C') count[2]++;
				else if(grade == 'D') count[3]++;
					else if(grade == 'F') count[4]++;
		//and so on ... for grade = C, D, F	
		else{

		// grade is wrong input
			//Do something
			cout << "Wrong input. Please input again." <<  endl;
			i--;
		}
		 i++;
		
	}while(true);
	
	
	cout << "In total "<< i-1 <<" students." << endl;
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";
	cout << "C = " << count[2] << ",";
	cout << "D = " << count[3] << ",";
	cout << "F = " << count[4] << ",";	
	//	and so on ... for grade = C, D, F	
	
	
	return 0;
}
