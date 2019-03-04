#include <stdio.h>
int hcf(int x,int y);
void main()
{
int a,b,result;
printf("\n enter two numbers: ");
scanf("%d%d",&a,&b);
result=hcf(a,b);
printf("\n The hcf is %d: ",result);
}
int hcf(int x,int y)
{
int result,smaller;
smaller=(x<y)?x:y;
for(result=smaller;result>=1;--result)
{
		if((x%result==0)&&(y%result==0))
			return result;
}
}
