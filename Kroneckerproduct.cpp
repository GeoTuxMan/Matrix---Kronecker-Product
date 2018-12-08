
// Calculeaza produsul Kronecker a doua matrice a, b
// rezultatul il stocheaza in p
#include <iostream>
using namespace std; 
  
 
const int cola = 2, rowa = 2, colb = 2, rowb = 2; //dimensiuni matrice
  


void kron ( int a[][cola], int b[][colb])
{
    
    int kprod[rowa * rowb][cola * colb];

    for (int i = 0; i < rowa; ++ i) {
        for (int k = 0; k < rowb; ++ k) {
            for (int j = 0; j < cola; ++ j) {
                for (int l = 0; l < colb; ++ l) {
                    
                    kprod[i + l + 1][j + k + 1] = a[i][j] * b[k][l]; 
                    cout<<kprod[i+l+1][j+k+1]<<" ";
            }

            
    }
    cout<<endl;
}
    
}
}
  
 
int main() 
{ 
    int a[2][2] = { {1, 2}, {3, 4} };
    int b[2][2] = { {3, 5}, {6, 7} };
  
    kron (a,b);
        
    
        
    return 0; 
} 
