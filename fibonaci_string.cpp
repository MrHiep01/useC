#include <stdio.h>
#include <string.h>
#define Max 1000
struct word
{
    char b[100];
};
int main()
{
    int n,count=2;
    int temp1[Max],temp2[Max];
    scanf("%d",&n);
    while(n<=1||n>=93)
    	scanf("%d",&n);
    for(int i=0;i<n;i++)
    {	
    	int n1,i1;
    	scanf("%d%d",&n1,&i1);  
    	temp1[i]=n1;
    	temp2[i]=i1;
    }
    int max=temp1[0];
    for(int i=0;i<n;i++)
    	if(temp1[i]>max)
    		max=temp1[i];
    char s1[]="A",s2[]="B",temp3[100];
    struct word s[93];
    strcpy(s[0].b,s1);
    strcpy(s[1].b,s2);
    for(int i=2;i<max+1;i++)
    {
    	 strcpy(temp3,s[count-2].b);
    	strcat(temp3,s[count-1].b);
    	strcpy(s[count++].b,temp3);
    }
    for(int i=0;i<n;i++)
    	printf("%c\n",s[temp1[i]-1].b[temp2[i]-1]);
}