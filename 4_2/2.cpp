#include<iostream.h>
main()
{
	int i,tab,j=0;
for(i=2000;i<=3000;i++)
{
	tab=0;
    if(i%4!=0) {tab=1;}
    if(i%4==0&i%100==0&i%400!=0) {tab=1;}
    if(tab==0)
{
	cout<<i<<endl;j++;
    if(j%10==0)
	cout<<"\n"<<endl;
}
}
}