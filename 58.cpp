#include<iostream>
using namespace std;
int main()
{
	int num, den;
    try {
	    cout << "Enter numerator and denominator: ";
	    cin >> num >> den;
        if (den == 0) 
            throw "Division by zero error!";
		cout << "Result: " << (double)num / den << endl;
    }
	catch (const char* msg) 
	{
		cout << "Exception by " << msg << endl;
	}
    catch (...)
	{
		cout << "Unknown Error occured"<<endl;
	}
	return 0;
}
