#include<iostream.h>
#include"math.h"
void main()
{
	float a,b,c,l,s;
    cin>>a>>b>>c;
	l=(a+b+c)/2;
    s=sqrt(l*(l-a)*(l-b)*(l-c));
	if((a<b+c)&(b<a+c)&(c<a+b))
	{
		cout<<s<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
}
     
