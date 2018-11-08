#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int matrik[50][50];
	int n;
	cout<<"Masukkan panjang matriks : ";
	cin>>n;
	cout<<endl;
	
	for(int k=0;k<n;k++){
		for(int l=0;l<n;l++){
		
		cout<<"Masukkan ["<<k<<"]["<<l<<"] : ";
		cin>>matrik[k][l];
		if(k+l==n-l)
		{
			matrik[k][l]=0;
		}
	}
}
cout<<endl;
for (int k=0; k<n; k++){
	for(int l=0;l<n;l++){
		cout<<setw(5)<<matrik[k][l];
	}
	cout<<endl;
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	{
	return 0;
}
}
