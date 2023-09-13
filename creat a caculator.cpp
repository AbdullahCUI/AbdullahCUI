#include<iostream>
using namespace std;
int main(){
	
	//create a simple calculator
	//number one and two are declared in integar data type
	int num1,num2;
	//oparator is declared in charactor data type
	char oparator;
	
	//cout is print welcome message on screen
	cout<<"****welcome****"<<endl;
	//cout print message on screen
	cout<<"Please enter first Number :";
	//user enter first number
	cin>>num1;
	
	//user enter oparator
	cout<<"Please enter oparator(+,-,*,/):";
	cin>>oparator;
	
	//user enter second Number
	cout<<"Please enter second Number:";
	cin>>num2;
	double result;
	
	switch (oparator){
		
		case '+':
			result=num1+num2;
			cout<<"Result = "<<result<<endl;
			break;
			case '-':
				result=num1-num2;
				cout<<"Result = "<<result<<endl;
				break;
				case '*':
					result=num1*num2;
					cout<<"Result = "<<result<<endl;
					break;
					case '/':
						if(num2 !=0){
							result=num1/num2;
							cout<<"Result = "<<result<<endl;
							break;
							default :
								cout<<"Please try again :oparator is not defined :";
								break;
						}
	}
}