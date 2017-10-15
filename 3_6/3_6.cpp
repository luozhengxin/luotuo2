#include<iostream.h>
#include<iomanip.h>
#include<math.h>
void main()
{
	float r,l,s,pi;
	cin>>r;
	pi=3.14159;
	l=2*pi*r;
	s=pi*r*r/2;
	int k;
	cin>>k;
	switch(k)
	{
	case 1:cout<<"s="<<s<<endl;break;
	case 2:cout<<"l="<<l<<endl;break;
    case 3:cout<<"s="<<s<<","<<"l="<<l<<endl;break;
	default:cout<<"no";
	}
}


