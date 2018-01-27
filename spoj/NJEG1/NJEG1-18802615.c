#include <bits/stdc++.h>
using namespace std;

int main() {
	int A,B,C,t,num,E,F,G;
	string Cards[29];
	int i;
	scanf("%d",&t);
	while(t--){
		for(i=1;i<27;i++){
			cin>>Cards[i];
			if(Cards[i]=="J")
                Cards[i]="1";
            if(Cards[i]=="Q")
                Cards[i]="2";
            if(Cards[i]=="K")
                Cards[i]="3";
            if(Cards[i]=="A")
                Cards[i]="4";
		}
		scanf("%d%d%d",&A,&B,&C);
		num=23-(30-A-B-C);
		cout<<Cards[A+B+C-num]<<endl;;
	}
	return 0;
}
