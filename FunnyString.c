#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
typedef struct{
    char s[1000];
    int f;
}funny;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d",&t);
    funny s1[t];
    funny s2[t];
    char *r;
    int i,j,l,d,temp,x,y,d1,d2;
    for(i=0;i<t;i++)
    {
        scanf("%s",s1[i].s);
        s1[i].f=0;
    }
    for(i=0;i<t;i++)
    {
        x = 0;
        y = strlen(s1[i].s) - 1;
        while (y>=0) 
        {
            s2[i].s[x]=s1[i].s[y];
            x++;
            y--;
        }
        s1[i].f=0;
    }
    for(i=0;i<t;i++)
    {
        l=strlen(s1[i].s);
        for(j=0;j<(l-2);j++)
        {
             d1 = abs(s1[i].s[j+1] -s1[i].s[j]);  
             d2 = abs(s2[i].s[j+1] - s2[i].s[j]);
             d=d1-d2;
            if(d!=0)
            {
                 s1[i].f=(s1[i].f) +1;   
            }
                 
        }
    }
   for(i=0;i<t;i++)
    {
       if(s1[i].f==0)
       {
            printf("Funny");    
       }
       else
       {
           printf("Not Funny");
       }
    }
   return 0; 
}
