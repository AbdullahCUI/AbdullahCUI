#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	//random number generator
	
	srand(time(nullptr));
	
	//generate a random number between 1 to 100
	
	int secretNumber=rand()%100+1;
	
	int guess;
	int attempts=0;
	cout<<"welcome to the Guessing Game :";
	do{
		cout<<"Guess a number between 1 to 100 :";
		cin>>guess;
		
		if(guess>secretNumber){
			cout<<"too high : try again"<<endl;
		} else if(guess<secretNumber){
			cout<<"too low : try again"<<endl;
		} else{
			cout<<"congratulation :You guessed a number"<<endl;
		}
	} while (guess!=secretNumber);
	return 0;
}