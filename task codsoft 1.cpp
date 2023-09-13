//include is preprosser direction and that include the library in program
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//int main is main function and without main function program is not working
int main(){
	//guess number game 1 to 100 
	//random number generator
	
	srand(time(nullptr));
	
	//generate a random number between 1 to 100
	
	int secretNumber=rand()%100+1;
	
	//guess is decleard in interger data type
	int guess;
	
	//attempts is declared in integer data type and assignment value is zero
	int attempts=0;
	
	//cout show on the screen or consol this message
	cout<<"welcome to the Guessing Game :";
	
	//using do while loop 
	
	do{
		//cout print this message on screen
		cout<<"Guess a number between 1 to 100 :";
		//cin is using for to enter user a number
		cin>>guess;
		
		//using codition statment 
		/* if guess if greater than scretNumber
		then cout print the message on screen
		that the number is to high*/
		
		if(guess>secretNumber){
			cout<<"too high : try again"<<endl;
			
		} else if(guess<secretNumber){
			//if guess is less than scretNumber 
			//then cout is print the message on screen the number is to low
			cout<<"too low : try again"<<endl;
			
			//in else the is not greater and not high then 
			//cout is show the message than you are winner 
		} else{
			cout<<"congratulation :You guessed a number"<<endl;
		}
		//in while condition that guess is not equal to scretNumber
	} while (guess!=secretNumber);
	
	//in return data is 0
	return 0;
}