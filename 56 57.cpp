#include<iostream>
#include<math.h>
using namespace std;

int main() 
{
    char ch;
    cout<<"Choose what to do:\n a. Divide\n b. Sqrt\n";
    cin>>ch;
    switch(ch)
    {
    	case 'a':
		    int num, den;
		    cout << "Enter numerator and denominator: ";
		    cin >> num >> den;
		    try {
		        if (den == 0) 
		            throw "Division by zero error!";
		        cout << "Result: " << (double)num / den << endl;
		    }
		    catch (const char* msg) 
			{
		        cout << "Exception by " << msg << endl;
		    }
		    break;
		case 'b':
			int no;
			cout<<"Enter number: ";
			cin>>no;
			try{
				if (no<0)
					throw "Number is Negative!";
				cout<<"Sq.rt: "<<sqrt(no)<<endl;
			}
			catch(const char* msg)
			{
				cout << "Exception by " << msg << endl;
			}
			break;
	}
}
