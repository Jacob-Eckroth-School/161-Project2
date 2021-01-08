/***********************************
 ** Program: assignment2.cpp
 ** Author: Jacob Eckroth
 ** Date: 10/27/19
 ** Description: Calls multiple functions to test for different inputs, and returns the cases
 ** Inputs: lower_bound, upper_bound, test_value, letter, number, num1, num2, precision, input, sentence, substring
 ** Outputs: lots of bools saying whether an input is within the expected value or not. some ints, some strings
 ************************************/
#include <iostream>
#include <string>
#include <cmath>
#include "helper_functions.h" //all my fun functions
#include <stdlib.h> //allows for clearing of screen
using namespace std;
int main(){
	int funlevel = 0;
	system("clear");//clears the screen
	cout << "\033[1;35mDo you want to run this program the boring hard coded way(0) or the fun user input way?(1):\033[0m\n" <<endl;
	cin >> funlevel;
	if (funlevel == 1){
		for(int i = 0; i < 2; i++){ //runs it twice
			int lower_bound = 0;
			int upper_bound = 0;
			int test_value = 0;
			cout << "\033[1;33mTest if an integer is within a range\033[0m\n";
			cout << "Please enter the lower bound: "<<endl;
			cin >>  lower_bound;
			cout << "Please enter the upper bound: "<<endl;
			cin >>  upper_bound;
			cout << "Please enter the integer to test: "<<endl;
			cin >>  test_value;
			if(check_range(lower_bound, upper_bound, test_value)){
				cout << "\033[1;32mThe test value is within the range\033[0m\n" <<endl;
			}else{
				cout << "\033[1;31mThe test value is not within the range\033[0m\n" <<endl;
			}
			cout << endl; 
		}
		for(int i = 0; i < 2; i++){
			char letter;
			cout << "\033[1;33mPlease enter a character to test if it's uppercase: \033[0m\n"<<endl;
			cin >> letter;
			if(is_capital(letter)){
				cout <<"\033[1;32mThe character is uppercase.\033[0m\n";
			}else{
				cout <<"\033[1;31mThe character is not uppercase.\033[0m\n";
			}
			cout <<endl;
		}
		for(int i = 0; i < 2; i++){
			int number;
			cout << "\033[1;33mPlease enter an integer to test if it's even: \033[0m\n"<<endl;
			cin>>number;
			if(is_even(number)){
				cout << "\033[1;32mThat integer is even.\033[0m\n";
			}else{
				cout << "\033[1;31mThat integer is not even.\033[0m\n";
			}
			cout << endl;
		}
		for(int i = 0; i < 2; i++){
			int number;
			cout << "\033[1;33mPlease enter an integer to test if it's odd: \033[0m\n"<<endl;
			cin>>number;
			if(is_odd(number)){
				cout << "\033[1;32mThat integer is odd.\033[0m\n";
			}else{
				cout << "\033[1;31mThat integer is not odd.\033[0m\n";
			}
			cout << endl;

		}
		for(int i = 0; i < 2; i++){
			int num1=0;
			int num2=0;
			cout << "\033[1;33mTest if 2 integers are equal, will return 1 if the first is greater than the second,"<<endl;
			cout<< "0 if they're equal, and -1 if the second is greater than the first\033[0m\n"<<endl;
			cout << "Input the first integer: " << endl;
			cin >> num1;
			cout << "Input the second integer: " << endl;
			cin >> num2;
			cout <<"\033[1;34mThe result is: " << equality_test(num1,num2)<<"\033[0m\n";
			cout << endl;
		}
		for(int i = 0; i < 2; i++){
			float num1 = 0;
			float num2 = 0;
			float precision = 0;
			cout << "\033[1;33mTest if 2 floats are equal to eachother within a certain precision\033[0m\n" <<endl;
			cout << "Please enter the first number: "<<endl;
			cin >> num1;
			cout << "Please enter the second number: "<<endl;
			cin >> num2;
			cout << "Please enter the precision with which to test the two numbers: "<<endl;		
			cin >> precision;
			if(float_is_equal(num1,num2,precision)){
				cout << "\033[1;32mThe 2 numbers are equal within the given precision\033[0m\n";
			}else{
				cout << "\033[1;31mThe 2 numbers are not equal within the given precision :(\033[0m\n";
			}
			cout << endl;
		}
		cin.ignore();//this fixes the error where it automatically runs over to the next loop, and i goes to 1	
		for(int i = 0; i < 2; i++){ 
			string input = "";
			cout << "\033[1;33mPlease enter an string to test if it's an integer: \033[0m\n" <<endl;	
			getline(cin,input);
			if(is_int(input)){
				cout << "\033[1;32mThat string is an integer.\033[0m\n";
			}else{
				cout << "\033[1;31mThat string is not an integer.\033[0m\n";
			}
			cout << endl;
		}

		for(int i = 0; i < 2; i++){
			string input="";
			cout << "\033[1;33mPlease enter a string to test if there are integers in it: \033[0m\n" << endl;
			getline(cin,input);
			if(numbers_present(input)){
				cout << "\033[1;32mThis string has integers in it!\033[0m\n" << endl;
			}else{
				cout << "\033[1;31mThis string does not have integers in it :(\033[0m\n" << endl;
			}
			cout << endl;	
		}

		for(int i = 0; i < 2; i++){
			string input;
			cout << "\033[1;33mPlease enter a string to test if there are letters in it:\033[0m\n" << endl;
			getline(cin,input);
			if(letters_present(input)){
				cout << "\033[1;32mThis string has letters in it!\033[0m\n" << endl;
			}else{
				cout << "\033[1;31mThis string does not have letters in it :(\033[0m\n" << endl;
			}
			cout << endl;	
		}

		for(int i = 0; i < 2; i++){
			string sentence;
			string substring;
			cout << "\033[1;33mPlease enter a string:\033[0m\n";
			getline(cin,sentence);
			cout << "\033[1;33mPlease enter a substring to check if it's within your first string:\033[0m\n";
			getline(cin,substring);		
			if(contains_sub_string(sentence,substring)){
				cout << "\033[1;32mThe first string contains the substring!\033[0m\n";
			}else{
				cout << "\033[1;31mThe first string does not contain the substring.\033[0m\n" ;
			}
			cout << endl;
		}
		for(int i = 0; i < 2; i++){
			string sentence= "";
			cout << "\033[1;33mPlease enter a sentence to count how many words are in it:\033[0m\n";
			getline(cin, sentence);
			cout << "\033[1;34mYour sentence has " << word_count(sentence) <<" words in it.\033[0m\n";
			cout << endl;
		}
		for(int i = 0; i < 2; i++){
			string sentence = "";
			cout << "\033[1;33mPlease enter a sentence to convert all the lowercase characters to uppercase:\033[0m\n";
			getline(cin,sentence);
			cout <<"\033[1;34m" <<to_upper(sentence) << "\033[0m\n" <<endl;
			cout <<endl;
		}
		for(int i = 0; i < 2; i++){
			string sentence = "";
			cout << "\033[1;33mPlease enter a sentence to convert all the uppercase characters to lowercase\033[0m\n";
			getline(cin,sentence);
			cout <<"\033[1;34m"<< to_lower(sentence) << "\033[0m\n" <<endl;
			cout <<endl;
		}
		for(int i = 0; i < 2; i++){
			string sentence = "";
			cout << "\033[1;33mPlease enter a string, if it's an integer that integer will be returned:\033[0m\n";
			getline(cin,sentence);
			if(get_int(sentence) ==0){
				cout << "\033[1;31mYour string was not an integer\033[0m\n"<<endl;
			}else{
				cout << "\033[1;32m" << get_int(sentence)<< "\033[0m\n" <<endl;
			}
			cout <<endl;
		}

	}else{ //boring hardcoded way blahblahblah

		cout << "Testing check_range: lower_bound = 1, upper_bound = 3, test_value = 2"<<endl;
		cout << "Expected: 1 "<<endl;
		cout << "\tActual: " << check_range(1,3,2);
		if(check_range(1,3,2)){
			cout << "\tPassed" << endl;

		}else{
			cout << "\tFailed" << endl;
		}
		cout << endl; 

		cout << "Testing check_range: lower_bound = 1, upper_bound = 3, test_value = 5"<<endl;
		cout << "Expected: 0 "<<endl;
		cout << "\tActual: " << check_range(1,3,5);
		if(check_range(1,3,5)){
			cout << "\tPassed" << endl;

		}else{
			cout << "\tFailed" << endl;
		}
		cout << endl;

		cout << "Testing is_capital: A" <<endl;
		cout << "Expected: 1 " <<endl;
		cout <<"\tActual: " << is_capital('A');
		if(is_capital('A')){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl;

		cout << "Testing is_capital: b" <<endl;
		cout << "Expected: 0 " <<endl;
		cout << "\tActual: " << is_capital('b');
		if(is_capital('b')){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl;

		cout << "Testing is_even: 342" <<endl;
		cout << "Expected: 1 " <<endl;
		cout << "\tActual: " << is_even(342);
		if(is_even(342)){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl; 

		cout << "Testing is_even: 5555" <<endl;
		cout << "Expected: 0 " <<endl;
		cout << "\tActual: " << is_even(5555);
		if(is_even(5555)){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl;

		cout << "Testing is_odd: 33" <<endl;
		cout << "Expected: 1 " <<endl;
		cout << "\tActual: " << is_odd(33);
		if(is_odd(33)){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl; 

		cout << "Testing is_odd: 42" <<endl;
		cout << "Expected: 0 " <<endl;
		cout << "\tActual: " << is_capital(42);
		if(is_capital(42)){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl;

		cout << "Testing equality_test: 43, 32" <<endl;
		cout << "Expected: 1 " <<endl;
		cout << "\tActual: " << equality_test(43,32);
		cout <<endl; 

		cout << "Testing equality_test: 32, 32" <<endl;
		cout << "Expected: 0 " <<endl;
		cout << "\tActual: " << equality_test(32,32);
		cout <<endl; 

		cout << "Testing equality_test: 0, 32" <<endl;
		cout << "Expected: -1 " <<endl;
		cout << "\tActual: " << equality_test(0,32);
		cout <<endl; 

		cout << "Testing float_is_equal: 1.01, 1.05, .04" <<endl;
		cout << "Expected: 1 " <<endl;
		cout << "\tActual: " << float_is_equal(1.01,1.05,.04);
		if(float_is_equal(1.01,1.05,.04)){

			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout<<endl;

		cout << "Testing float_is_equal: 1, 5, 3 " <<endl;
		cout << "Expected: 0 " <<endl;
		cout << "\tActual: " << float_is_equal(1,5,3);
		if(float_is_equal(1,5,3)){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl;

		cout << "Testing is_int: \"123\" " <<endl;
		cout << "Expected: 1 " <<endl;
		cout << "\tActual: " << is_int("123");
		if(is_int("123")){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl;

		cout << "Testing is_int: \"j123\"  " <<endl;
		cout << "Expected: 0 " <<endl;
		cout << "\tActual: " << is_int("j123");
		if(is_int("j123")){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl;

		cout << "Testing numbers_present: \"hello123\"  " <<endl;
		cout << "Expected: 1 " <<endl;
		cout << "\tActual: " << numbers_present("hello123");
		if(numbers_present("hello123")){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl;

		cout << "Testing numbers_present: \"hello my name is jacob\"  " <<endl;
		cout << "Expected: 0 " <<endl;
		cout << "\tActual: " << numbers_present("hello my name is jacob");
		if(numbers_present("hello my name is jacob")){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl;

		cout << "Testing letters_present: \"hello my name is jacob\"  " <<endl;
		cout << "Expected: 1 " <<endl;
		cout << "\tActual: " << letters_present("hello my name is jacob");
		if(letters_present("hello my name is jacob")){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl;

		cout << "Testing letters_present: \"1234::/123\"  " <<endl;
		cout << "Expected: 0 " <<endl;
		cout << "\tActual: " << letters_present("1234::/123");
		if(letters_present("1234::/123")){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl;

		cout << "Testing contains_sub_string: \"hello my name is jacob\", \"jacob\"  " <<endl;
		cout << "Expected: 1 " <<endl;
		cout << "\tActual: " << contains_sub_string("hello my name is jacob", "jacob");
		if(contains_sub_string("hello my name is jacob", "jacob")){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl;

		cout << "Testing contains_sub_string: \"hello my name is jacob\", \"Roger\"  " <<endl;
		cout << "Expected: 0 " <<endl;
		cout << "\tActual: " << contains_sub_string("hello my name is jacob", "Roger");
		if(contains_sub_string("hello my name is jacob", "Roger")){
			cout << "\tPassed" << endl;
		}else{
			cout << "\tFailed" << endl;
		}
		cout <<endl;

		cout << "Testing word_count: \"hello my name is jacob\"  " <<endl;
		cout << "Expected: 5 " <<endl;
		cout << "\tActual: " << word_count("hello my name is jacob")<<endl;
		cout <<endl;

		cout << "Testing to_upper: \"hello my name is jacob\" " <<endl;
		cout << "Expected: HELLO MY NAME IS JACOB " <<endl;
		cout << "\tActual: " << to_upper("hello my name is jacob")<<endl;
		cout << endl;	

		cout << "Testing to_upper: \"5: is the BEST number :)\" " <<endl;
		cout << "Expected: 5 IS THE BEST NUMBER :) " <<endl;
		cout << "\tActual: " << to_upper("5: is the BEST number :)")<<endl;
		cout << endl;

		cout << "Testing to_lower: \"MY NAME is JACOB\" " <<endl;
		cout << "Expected: my name is jacob " <<endl;
		cout << "\tActual: " << to_lower("MY NAME is JAOCOB")<<endl;
		cout << endl;

		cout << "Testing to_lower: \"I am the: best\" " <<endl;
		cout << "Expected: i am the: best " <<endl;
		cout << "\tActual: " << to_lower("i am the: best")<<endl;
		cout << endl;
		cin.ignore();
		for(int i = 0; i < 2; i++){

			string sentence = "";
			cout << "Please enter a string, if it's an integer that integer will be returned:"<<endl;
			getline(cin,sentence);
			if(get_int(sentence) ==0){
				cout << "Your string was not an integer"<<endl;
			}else{
				cout << get_int(sentence)<<endl;
			}
			cout <<endl;
		}


	}
	return 0;
}	 












