#include <iostream>
using namespace std;

int main()
{
    int m=0,n=5,d = n;
    int arr[n] = {10,20,30,40,20};
    
    for(int i=0;i<5;i++){
        
        int c =1;
        for(int j = 0;j<5;j++){
            
            if(i!=j){
                
                if(arr[i] == arr[j]){
                    c++;
                }
                
            }
        }
        
        cout<<arr[i] <<" "<<c<<" ";
        
          
        
        
    }
    
    

    return 0;
}
