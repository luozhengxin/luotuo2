
#include<iostream.h>
void main()
{
	float x;
	int grade=0;
	cin>>x;
	if(x<10) grade=1;
	if(x>=10&&x<=99) grade=2;
	if(x>=100&&x<=999) grade=3;
	switch(grade)
	{
	case 1:cout<<"小于10\n";break;
	case 2:cout<<"10~99\n";break;
	case 3:cout<<"100~999\n";break;
	default:cout<<"1000以上\n";break;
	}
}
