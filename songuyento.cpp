#include <iostream>
#include<math.h> 
using namespace std;


bool KTSNT(int x)
{
	if(x<2)
		{
			return false;
		}
	for(int i=2; i<=(x/2); i++){
			if(x%i==0)
			{
				return false;
			}
	}
	return true;	
}

int main()
{
	int A[20];
	int n,i; 
	cout<<"nhap n:";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"A["<<i+1<<"]=";
		cin>>A[i]; 
	}
	cout<<"Day sau khi sap xep(so nguyen to tang dan, giu nguyen cac phan tu con lai):"<<endl; 
	int tg;
    for(i = 0; i < n; i++){
    	if(KTSNT(A[i])==false){
    		cout<<A[i]<<";";
		}
		if(KTSNT(A[i])==true){
        for(int j = i + 1; j < n; j++){
        	
        		if(A[i] > A[j]){
                tg = A[i];
                A[i] = A[j];
                A[j] = tg;    
          	    }
          	     
			}
			cout<<A[i]<<";";
			
        }
   
    }
   helo quy vi va cac bon 
    
    
} 

