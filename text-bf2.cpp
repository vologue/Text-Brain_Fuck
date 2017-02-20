#include<iostream>
#include<string>
using namespace std;
void txt_bf(int a,char b[255]){
	int c,g;
	g=a%10;
	c=(a-g)/10;
	for(int i=0;i<c;i++){
		b[i]='+';
	}
	b[c]='[';
	b[c+1]='>';
	for(int i=1;i<=10;i++){
		b[c+1+i]='+';
	}
	b[c+12]='<';
	b[c+13]='-';
	b[c+14]=']';
	b[c+15]='>';
	for(int i=0;i<=g;i++){
		b[c+16+i]='+';
	}
	b[c+16+g]='.';
	b[c+g+17]='>';
	b[c+g+18]='\0';
}

int main(){
	
	int asc[255],j=0;
	char gt[255],bf[100];
	cout<<"Enter line[not more than 255 characters]: ";
	cin.getline(gt,255);
	for(int i=0;gt[i]!='\0';i++){
		j++;
	}
	for(int i=0;i<j;i++){
		asc[i]=(int)gt[i];
	}
	for(int i=0;i<j;i++){
		txt_bf(asc[i],bf);
		cout<<bf<<"\n";
	}
	return 0;
}
