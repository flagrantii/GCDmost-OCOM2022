#include<bits/stdc++.h>
using namespace std;

int GCD(int n,int m){
	if(n!=m){
		int p=n%m;
		if(p!=0){
			return GCD(m,p);
		}else return m;	
	}else return 0;
}

int main(){
	int i=0,y;
	cin>>y;
	int x[i],max=-100000;
	for(i=0;i<y;i++){
		cin>>x[i];
	}
	for(i=0;i<y;i++){
		for(int j=0;j<y;j++){
			if(GCD(x[i],x[j])>=max){
				max=GCD(x[i],x[j]);
			}
		}
	}
	cout<<max;
	
	return 0;
}
