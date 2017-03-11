#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <iostream>
using namespace std;
int ask[4],ans[4],book[10],book2[10],pos[10],pos2[10],check[6];
int a,b,flag;
int main()
{
	srand(time(NULL));
	freopen("answer.txt","w",stdout);
	memset(ans,-1,sizeof(ans));
	for (int i=0;i<=3;i++)
	{
		ans[i]=rand()%10;
		if (book[ans[i]]==1)
		{
			i-=1;continue;
		}
		else
			book[ans[i]]=1,pos[ans[i]]=i;
		printf("%d",ans[i]);
	}
	printf ("\n");
	fclose(stdout);
	freopen("problem.txt","w",stdout);
	for (int i=0;i<=5;i++)
	{
		flag=0,a=0,b=0;
		memset(ask,-1,sizeof(ask));
		memset(book2,0,sizeof(book2));
		memset(pos2,-1,sizeof(pos2));
		for (int j=0;j<=3;j++)
		{
			ask[j]=rand()%10;
			if (book2[ask[j]]==1)
			{
				j-=1;continue;
			}
			book2[ask[j]]=1,pos2[ask[j]]=j;
			if (book[ask[j]]==1)
				flag=1;
		}
		if (flag==0)
		{
			i-=1;continue;
		}
		check[i]=ask[0]*1000+ask[1]*100+ask[2]*10+ask[3];
		if (check[i]==check[i-1]||check[i]==check[i-2]||check[i]==check[i-3]||check[i]==check[i-4])
		{
			i-=1;continue;
		}
		if (check[i]<1000)
			printf ("0");
		printf ("%d\t",check[i]);
		for (int j=0;j<=3;j++)
		{
			if (book[ask[j]]==1)
			{
				if (pos[ask[j]]==pos2[ask[j]])
					a+=1;
				else b+=1;
			}
		}
		printf ("%dA%dB\n",a,b);
	}
	fclose(stdout);
	return 0;
} 
