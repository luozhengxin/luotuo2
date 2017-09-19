#include<iostream.h>
void main()
{
	int x;
	cout<<"Please input x:"<<endl;
	cin>>x;
	if(x<10)
		cout<<"小于10"<<endl;
	else
		if(x>=10&&x<=99)
			cout<<"10至99"<<endl;
		else
			if(x>+100&&x<=999)
				cout<<"100至999"<<endl;
			else
					cout<<"大于1000"<<endl;
}
