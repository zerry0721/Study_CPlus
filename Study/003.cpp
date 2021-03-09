#include <iostream>
using namespace std;

int main()
{
	int num = 2147483647;
	cout << "변수 num에 저장된 값은 " << num << "입니다." << endl;
	
	num = 2147483648;
	cout << "변수 num에 저장된 값은 " << num << "입니다." << endl;
	
	float num01 = 3.1415926535897932;  // float 타입의 유효 자릿수는 소수점 6자리
	cout << "변수 num01에 저장된 값은 " << num01 << "입니다." << endl;  

	double num02 = 3.1415926535897932; // double 타입의 유효 자릿수는 소수점 16자리
	cout << "변수 num02에 저장된 값은 " << num02 << "입니다." << endl;
}