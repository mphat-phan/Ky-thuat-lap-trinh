#include<iostream>
using namespace std;
void daonguoc(char *S)
{
	char *Scopy=strdup(S);
	
	char S1[200];
	S1[0]='\0';
	
	char SLast[225];
	SLast[0]='\0';
	
	for(int i=strlen(Scopy);i>=0;i--)
	{
		if(Scopy[i]==' ')
		{
			strcat(strcat(SLast,Scopy+i+1)," ");  // lay tu cuoi cung
			Scopy[i]='\0';        // tu con lai
			break;
		}
	}
	strcat(strcat(S1,strtok(Scopy," "))," ");   //lay tu dau tien gan vao S1
	strcat(S1,SLast);     			//lay tu cuoi cung gan vao S1
	strcat(S1,strtok(NULL,"")); //lay tu con lai gan vao S1
	cout<<S1<<endl;

}
char splitWord(char **&arr,char *&S,int &n)
{
	arr=new char*[10];
	for(int i=0;i<10;i++)
	{
		arr[i]=new char[224];
	}
	n=0;	
	char *arrC=strtok(S," ");
	while(arrC!='\0')
	{
		strcpy(arr[n],arrC);
		arrC=strtok(NULL," ");
		n++;
	}
	
	
}
char softWord(char **arr,int n)
{
	char *temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		if(strlen(arr[i])>strlen(arr[j]))
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	char *S=new char[225];
	const char *filepath="C:\\input.txt";
	FILE *fi=fopen(filepath,"rt");

//	fscanf(fi,"%s",S);
//	cout<<S<<;
//	cout<<endl;
	char **arr;
	int n;
	gets(S); //Nhap S
	daonguoc(S);
	splitWord(arr,S,n);
	softWord(arr,n);
	
}