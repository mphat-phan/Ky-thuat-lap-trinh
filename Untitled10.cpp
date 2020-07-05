#include<iostream>
#include<string.h>
using namespace std;
char *chuoi234(char *s)            
{ 
    int i=0,dem=0,j=0;
    static char t[100];
    strcpy(t,s);
    for(;t[i]!='\0';i++)
    {
        if (dem == 4) t[i]='\0';
        if (t[i]==' ') dem++;
	  if (dem == 0) j=i+1;
	  
    }
    return t+j+1;
}
char *daothutu(char *s)
{
    int i=strlen(s)-1;
    char *c;
    c = new char [i];
    c[0]='\0';
    
    for(;i>=0;i--)
        if(s[i]==' ')
        {
            strcat(strcat(c,s+i+1)," ");
            s[i]='\0';
        }
        strcat(c,s);    //strcat la chuô~i nô´i
    return c;
}
int main()
{
    char *s;
    s = new char [1000];
    gets(s);
    puts(chuoi234(s));
    puts(daothutu(s));
}
