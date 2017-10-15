#include<iostream.h>
void main()
{
	int shuzi,daan;
	cout<<"ÇëÊäÈëÊý×Ö:"<<endl;
	cin>>shuzi;
	if(shuzi%3==0)
		daan=1;
	else
	    if(shuzi%7
			==0)
	    daan=1;
	    else
	    daan=0;
	if(daan==1)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
}
