#include<math.h>
#include <stdio.h>
int main()
{
int t;
int even=0;
int odd=0;
int arr[100];
int a,b,c,n,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d",&arr[i]);
	if(arr[i]%2==0)
	{
		even++;
	}
	else
	{
		odd++;
	}
}
if(even>odd)
{
	printf("READY FOR BATTLE\n");
}
else
{
	printf("NOT READY\n");
}
    return 0;
}
