#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
	double num1, num2;
	double result;
	char oper;

	cout<<"숫자1을 입력하세요: ";
	cin>>num1;

	cout<<"숫자2를 입력하세요: ";
	cin>>num2;

	cout<<"연사자를 입력하세요: ";
	cin>>oper;

	switch(oper){
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
	}	

	cout << endl;
	cout << "----- 결과 -----" << endl;
	cout << num1 << oper << num2 << " = " << result << endl;

	return 0;
}

