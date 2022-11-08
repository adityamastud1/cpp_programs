#include<iostream>
using namespace std;
int main()
{
	cout << "*****CALCLUATOR****" << endl;
	cout << "enter the number(s), and choose which operation to perform from below " << endl;
	cout <<"1.addition" << endl;
	cout <<"2.subtraction" << endl;
	cout <<"3.multiplication" << endl;
	cout <<"4.division" << endl;
	cout << "5.EXIT" << endl;
	cout << "6.sin " << endl;
	cout << "7.cos " << endl;
	cout << "8.tan " << endl;
	cout << "9.cot " << endl;
	char choice;
	float a, b;
	cout << "enter the choice" << endl;
	cin >> choice;
	switch(choice)
	{
		case '1':
		{
			cout <<"entert the numbers" <<endl;
	        cin >> a >> b ;
	        cout << "adition is " << a+b << endl;
			break;   }
		case '2':
		{
	     	cout <<"entert the numbers" <<endl;
	        cin >> a >> b ;
			cout << "subtraction is " << a-b << endl;
			break;  }
		case '3':
		{
			cout <<"entert the numbers" <<endl;
	        cin >> a >> b ;
			cout << "multiplication is " << a*b << endl;
			break;  }
		case '4':
		{
			cout <<"entert the numbers" <<endl;
	        cin >> a >> b ;
			cout << "division is " << a/b << endl;
			break; }
		case '5':
		{
	     	cout << "thanks" << endl;
			break;  }
		case '6' :
		{
	        cout << "enter the nunber" << endl;
			cin >> a;
			float sin = a - (a*a*a)/6 + (a*a*a*a*a)/120 - (a*a*a*a*a*a*a)/5040 + (a*a*a*a*a*a*a*a*a)/362880 - (a*a*a*a*a*a*a*a*a*a*a)/39916800;
			cout << "sin of " << a << " is " << sin;
			break;  }
		case '7' : 
		{
			cout << "enter the number " << endl;
			cin >> a;
			float cos = 1 - (a*a)/2 + (a*a*a*a)/24 - (a*a*a*a*a*a)/720 + (a*a*a*a*a*a*a*a)/40320 - (a*a*a*a*a*a*a*a*a*a*a*a)/3628800;
			cout << "cos of " << a << " is " << cos;
			break;  }	
        case '8' :
		{
			    cout << "enter the number" << endl;
			cin >> a;
			float tan = a + (a*a*a/3) + (2*a*a*a*a*a/15) + (17*a*a*a*a*a*a*a)/315;
			cout << "the tan of " << a << " is " << tan;
			break;  }
		default :
		cout << "invalid" ;		
						
	}
}

