#include"stdio.h"
main()
{
	char ch;
	int ch2,ch3;
	double min;
	printf("enter choice s for sweet bread and w for wheet bread\n");
	scanf("%c",&ch);
	printf("Please assure that loaf is double (1/0)\n");
	scanf("%d",&ch2);
	printf("Please assure that baking is manual (1/0)\n");
	scanf("%d",&ch3);
	if(ch=='s')
	{
		if(ch2=='1')
		{
			if(ch3=='1')
				{
				min=20+60+33+30+75+(35*.5)+30;
				}
			else if(ch3=='0')
				{
				min=20+60+33+30+75+(35*.5)+30+(2/60);
				}
		}
		else if(ch2=='0')
		{
			min=20+60+33+30+2+75+(35)+30;
		}
	}
	else if(ch=='w')
	{
		if(ch2=='1')
		{
			if(ch3=='1')
				{
				min=15+60+18+20+75+(45*.5)+30;
				)
			else if(ch3=='0')
				{
				min=15+60+18+20+75+(45*.5)+30+(2/60);
				}
		}
		else if(ch2=='0')
		{
			min=15+60+18+20+75+45+30;
		}
	}
	printf("The total time is %f\n",min);
	
}
