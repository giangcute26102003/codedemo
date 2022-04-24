#include<iostream>
using namespace std;
int thucthi(int r,int c,int s){
//r so dong , c so cot , s kich thuoc
//	cin>>r>>c>>s;
//	cout<<r<<","<<c<<","<<s<<endl; 
if(s==1){
	s=2;
}
int arr[(s+2)*r][(s+2)*c];
for(int i=0;i<(s+2)*r;++i){
	for(int j=0;j<(s+2)*c;++j){
		arr[i][j]=0;
	}
}
int x=0;
for(int j=0;j<r;++j){
int y=s/2;
for(int i=0;i<c;++i){
	arr[x][y]=1;
	arr[x][y+1]=3;
	y=y+s+2;
}
x=x+s+2;
}
for(int z=1;z<(s+2)*r;z+=s+2){
for(int i=z;i<z+s-1;++i){
	for(int j=0;j<(s+2)*c;++j){
		if(j!=(s+2)*c-1&&arr[i-1][j+1]==1){
			arr[i][j]=1;
			continue;
		}
		if(j!=0&&arr[i-1][j-1]==3){
			arr[i][j]=3;
		}
	}
}
}
int p;
for(int z=(s+2)/2;z<(s+2)*r;z+=s+2){
	p=1;
for(int i=z;i<=z+(s/2);++i){
	for(int j=0;j<(s+2)*c;++j){
	arr[i][j]=arr[i-p][j];
	if(arr[i][j]==1){
		arr[i][j]=3;
		continue;
	}
	if(arr[i][j]==3){
		arr[i][j]=1;
	}
	}
	p+=2;
}
}
int k=0;
for(int i=0;i<(s+2)*r;++i){
	for(int j=0;j<(s+2)*c;++j){
		if(arr[i][j]==1||arr[i][j]==3){
			if(k==0){
				k=1;
			}else k=0;
		}
	if(arr[i][j]==0&&k==1){
		arr[i][j]=2;
	}
	}
}
cout<<endl;
for(int i=0;i<(s+2)*r;++i){
	for(int j=0;j<(s+2)*c;++j){
	if(arr[i][j]==2){
		cout<<"*";
		}else if(arr[i][j]==1){
			cout<<"/";
		}else if(arr[i][j]==3){
			cout<< (char)92;
		}else cout<<".";
	}
	cout<<endl;
}
}
int main(){
	int n;
	cin>>n;
	int a[n][3];
	for(int i=0;i<n;++i){
		for(int j=0;j<3;++j){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;++i){
		thucthi(a[i][0],a[i][1],a[i][2]);
		cout<<endl;
	}
}


