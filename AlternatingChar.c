#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
typedef struct{
    char s[100000];
    int f;
}ac;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d",&t);
    ac s1[t];
    int i,j,l,d;
    for(i=0;i<t;i++)
    {
        scanf("%s",s1[i].s);
        s1[i].f=0;
    }

    for(i=0;i<t;i++)
    {
        l=strlen(s1[i].s);
        for(j=0;j<(l-1);j++)
        {
            d = abs(s1[i].s[j+1] -s1[i].s[j]);  
            if(d==0)
            {
                 s1[i].f=(s1[i].f) +1;
            }
                 
        }
    }
   for(i=0;i<t;i++)
    {
    
           printf("%d\n",s1[i].f);
    }
    return 0;
}
