// https://codeforces.com/problemset/problem/490/A

#include <iostream>
using namespace std;
int main(int argc, char** argv) {
 	int n ;  
 	cin >>n;
 	int a[n];
 	int s1 = 0 ,s2 = 0 ,s3 =0 ;
 	for(int i = 0  ;  i < n ; i++){
 		cin >> a[i];
	}
	 for(int i = 0 ; i<n;i++){
	 	if(a[i] == 1)
			s1++;
		else if(a[i] == 2) 
			s2++;
		else
			s3++;
	 }
	 int ct = min(min(s1,s2),s3);
	 int c[ct][3];
	 
	 for(int i = 0 ; i< ct; i++){
	 	bool t1=false,t2=false,t3=false;
	 	int j=0;
		 for (int k = 0 ; k<n;k++ ){
	 		if(a[k] == 1 && t1 ==false){
	 			c[i][j]=k+1;
	 			a[k]=-1;
	 			t1= true;
	 			j++;
			 }else if( a[k] ==2  && t2 ==false){
			 	c[i][j]=k+1;
			 		a[k]=-1;
			 	t2=true;
			 	j++;
			 }else if( a[k] == 3  && t3 ==false){
			 	c[i][j]=k+1;
			 		a[k]=-1;
			 	t3= true;
			 	j++;
			 }	 
		 }
	 }
	 cout<<ct<<endl;
	 for(int i = 0 ;  i < ct;i++){
	 	for(int z = 0 ; z < 3;z++){
	 		cout << c[i][z]<<" ";
		 }
		 cout<<endl;
	 }
	return 0;
}
