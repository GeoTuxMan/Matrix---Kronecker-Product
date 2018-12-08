
// Calculeaza produsul Kronecker a doua matrice a, b
// rezultatul il stocheaza in p
#include <iostream>
using namespace std; 
  
 
const int cola = 2, rowa = 2, colb = 2, rowb = 2; //dimensiuni matrice
  


void kron ( int a[][cola], int b[][colb])
{
    //int         i, j, k, l, ma, na, mb, nb;
    //int         np = na * nb;
    int kprod[rowa * rowb][cola * colb];

    for (int i = 0; i < rowa; ++ i) {
        for (int k = 0; k < rowb; ++ k) {
            for (int j = 0; j < cola; ++ j) {
                for (int l = 0; l < colb; ++ l) {
                    //kprod[(i * mb + k) * np + j * nb + l] = a[i * na + j] * b[k * nb + l];
                    kprod[i + l + 1][j + k + 1] = a[i][j] * b[k][l]; 
                    cout<<kprod[i+l+1][j+k+1]<<" ";
            }

            
    }
    cout<<endl;
}
    //return kprod;
}
}
  
 
int main() 
{ 
    int a[2][2] = { {1, 2}, {3, 4} };
    int b[2][2] = { {3, 5}, {6, 7} };
   // int p[4][4];
    kron (a,b);
        
    
    //for (int i = 0; i < 4; i++) {
     //  for (int j = 0; j < 4; j++) {
    //       cout<<kprod[i][j]<<" ";
	 //  }
     //      cout<<"\n"; // face afisarea sa treaca pe rand nou
    //}
    
    return 0; 
} 
