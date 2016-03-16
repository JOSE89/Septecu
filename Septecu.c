#include <stdio.h>
#include <errno.h>


int main(int argc, char ** argv) {
    
    FILE * fichero ;
    fichero = fopen ("pruebasepteku.lp", "wb");
    int l, m;
    
    fprintf(fichero, "max: x11;\n\n");
    
    fprintf(fichero, "r0: x12 = 6;\nr1: x13 = 1;\nr2: x15 = 3;\nr3: x18 = 2;\n");
    fprintf(fichero, "r4: x22 = 5;\nr5: x26 = 8;\nr6: x27 = 1;\nr7: x29 = 7;\n");
    fprintf(fichero, "r8: x36 = 7;\nr9: x38 = 3;\nr10: x39 = 4;\n");
    fprintf(fichero, "r11: x43 = 9;\nr12: x46 = 6;\nr13: x48 = 7;\nr14: x49 = 8;\n");
    fprintf(fichero, "r15: x53 = 3;\nr16: x54 = 2;\nr17: x56 = 9;\nr18: x57 = 5;\n");
    fprintf(fichero, "r19: x61 = 5;\nr20: x62 = 7;\nr21: x64 = 3;\nr22: x67 = 9;\n");
    fprintf(fichero, "r23: x71 = 1;\nr24: x72 = 9;\nr25: x74 = 7;\n");
    fprintf(fichero, "r26: x81 = 8;\nr27: x83 = 2;\nr28: x84 = 4;\nr29: x88 = 6;\n");
    fprintf(fichero, "r30: x92 = 4;\nr31: x95 = 1;\nr32: x97 = 2;\nr33: x98 = 5;\n\n");
    
    
    
    
    ///////////////////////////////////////////////////HORIZONTAL //////////////////////////////////////////////////
    
    int n,i,j,p,dif;
    /*
     //imprime la mitad de arriba del sepotoku en horizontal
     n=4;
     
     for(i=1;i<=4;i++){
     if(n<=7){
     for(j=1;j<=n;j++){
     for(int k=j+1; k<=n; k++){
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 7 z%d%d%d%d >= 1;\n", i, j, i, k, i, j, i, k, i, j, i, k);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 7 z%d%d%d%d >= -6;\n\n", i, j, i, k, i, j, i, k, i, j, i, k);
     
     }
     }
     n=n+1;
     }
     }
     
     //imprime la mitad de abajo del septoku en horizontal
     p=6;
     
     for(i=5;i<=7;i++){
     if(p>=4){
     for(j=1;j<=p;j++){
     for(int k=j+1; k<=p; k++){
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 7 z%d%d%d%d >= 1;\n", i, j, i, k, i, j, i, k, i, j, i, k);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 7 z%d%d%d%d >= -6;\n\n", i, j, i, k, i, j, i, k, i, j, i, k);
     
     }
     
     }
     p=p-1;
     }
     
     
     }
     
     ///////////////////////////////////////////////////HORIZONTAL FIN //////////////////////////////////////////////////
     */
    
    int cont,cont2,cont3;
    cont2=0;
    
    for(i=4;i>=1;i--){
        cont=2+cont2;
        for(j=1;j<=3+i;j++){
            cont3=2+cont2;
            
            
            
            if(j>4){
                
                //                                                 fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 7 z%d%d%d%d >= 1;\n", j, j-cont, k, j-cont, j, j-cont, k, j-cont, j, j-cont, k, j-cont);
                //                                                 fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 7 z%d%d%d%d >= -6;\n\n", j, j-cont, k, j-cont, j, j-cont, k, j-cont, j, j-cont, k, j-cont);
                //fprintf(fichero,"%d,%d \n",j,j-cont);
                //cout<<j<<","<<j-cont;
                //cout<<endl;
                cont=cont+2;
                
            }
            else{
                // fprintf(fichero,"%d,%d \n",j,i);
                //                                                       fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d +7  z%d%d%d%d >= 1;\n", j, i, k, i, j, i, k, i, j, i, k, i);
                //                                                     fprintf(fichero, "r%d%d       %d%db: x%d%d - x%d%d - 7 z%d%d%d%d >= --6;\n\n", j, i, k, i, j, i, k, i, j, i, k, i);
                
                //cout<<j<<","<<i;
                //cout<<endl;
            }
            
            for(int k=j+1;k<=3+i;k++){
                if(k>4){
                    //fprintf(fichero,"%d,%d ",k,k-cont3);
                    fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 7 z%d%d%d%d >= 1;\n", j, i, k, k-cont3, j, i, k, k-cont3, j, i, k, k-cont3);
                    fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 7 z%d%d%d%d >= -6;\n",  j, i, k, k-cont3, j, i, k, k-cont3, j, i, k, k-cont3);
                    cont3=cont3+2;
                }
                else{
                    //fprintf(fichero,"%d,%d ",k,i);
                    fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 7 z%d%d%d%d >= 1;\n", j, i, k, i, j, i, k, i, j, i, k, i);
                    fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 7 z%d%d%d%d >= -6;\n",j, i, k, i, j, i, k, i, j, i, k, i);
                    
                }
                
            }
            fprintf(fichero,"\n");
            
        }
        
        cont2=cont2+1;
    }
    
    //la otra parte
    
    
    /*
     for(i=5;i<=7;i++){
     cont=1;
     for(j=2+i-5;j<=7;j++){
     for(int k=j+1; k<=3+i; k++){
     if(j>4){
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", j, i-cont, k, i-cont, j, i-cont, k, i-cont, j, i-cont, k, i-cont);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", j, i-cont, k, i-cont, j,i-cont, k, i-cont, j, i-cont, k, i-cont);
     
     //cout<<j<<","<<i-cont;
     //cout<<endl;
     cont=cont+1;
     }
     else{
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", j, i, k, i, j, i, k, i, j, i, k, i);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", j, i, k, i, j, i, k, i, j, i, k, i);
     
     //cout<<j<<","<<i;
     //cout<<endl;
     }
     }
     }
     }
     
     
     
     */
    /*
     fprintf(fichero,"ver//////////////////////////////////////");
     for(int j=1; j<=9; j++){
     for(int i=1; i<=9; i++){
     for(int k=i+1; k<=9; k++){
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", i, j, k, j, i, j, k, j, i, j, k, j);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", i, j, k, j, i, j, k, j, i, j, k, j);
     }
     }
     }
     
     for(int i=1; i<=3; i++){
     for(int j=1; j<=3; j++){
     l = 3*i - 2;
     m = 3*j - 2;
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l, m, l+1, m+1, l, m, l+1, m+1, l, m, l+1, m+1);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l, m, l+1, m+1, l, m, l+1, m+1, l, m, l+1, m+1);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l, m, l+1, m+2, l, m, l+1, m+2, l, m, l+1, m+2);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l, m, l+1, m+2, l, m, l+1, m+2, l, m, l+1, m+2);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l, m, l+2, m+1, l, m, l+2, m+1, l, m, l+2, m+1);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l, m, l+2, m+1, l, m, l+2, m+1, l, m, l+2, m+1);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l, m, l+2, m+2, l, m, l+2, m+2, l, m, l+2, m+2);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l, m, l+2, m+2, l, m, l+2, m+2, l, m, l+2, m+2);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l, m+1, l+1, m, l, m+1, l+1, m, l, m+1, l+1, m);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l, m+1, l+1, m, l, m+1, l+1, m, l, m+1, l+1, m);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l, m+1, l+1, m+2, l, m+1, l+1, m+2, l, m+1, l+1, m+2);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l, m+1, l+1, m+2, l, m+1, l+1, m+2, l, m+1, l+1, m+2);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l, m+1, l+2, m, l, m+1, l+2, m, l, m+1, l+2, m);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l, m+1, l+2, m, l, m+1, l+2, m, l, m+1, l+2, m);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l, m+1, l+2, m+2, l, m+1, l+2, m+2, l, m+1, l+2, m+2);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l, m+1, l+2, m+2, l, m+1, l+2, m+2, l, m+1, l+2, m+2);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l, m+2, l+1, m, l, m+2, l+1, m, l, m+2, l+1, m);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l, m+2, l+1, m, l, m+2, l+1, m, l, m+2, l+1, m);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l, m+2, l+1, m+1, l, m+2, l+1, m+1, l, m+2, l+1, m+1);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l, m+2, l+1, m+1, l, m+2, l+1, m+1, l, m+2, l+1, m+1);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l, m+2, l+2, m, l, m+2, l+2, m, l, m+2, l+2, m);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l, m+2, l+2, m, l, m+2, l+2, m, l, m+2, l+2, m);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l, m+2, l+2, m+1, l, m+2, l+2, m+1, l, m+2, l+2, m+1);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l, m+2, l+2, m+1, l, m+2, l+2, m+1, l, m+2, l+2, m+1);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l+1, m, l+2, m+1, l+1, m, l+2, m+1, l+1, m, l+2, m+1);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l+1, m, l+2, m+1, l+1, m, l+2, m+1, l+1, m, l+2, m+1);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l+1, m, l+2, m+2, l+1, m, l+2, m+2, l+1, m, l+2, m+2);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l+1, m, l+2, m+2, l+1, m, l+2, m+2, l+1, m, l+2, m+2);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l+1, m+1, l+2, m, l+1, m+1, l+2, m, l+1, m+1, l+2, m);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l+1, m+1, l+2, m, l+1, m+1, l+2, m, l+1, m+1, l+2, m);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l+1, m+1, l+2, m+2, l+1, m+1, l+2, m+2, l+1, m+1, l+2, m+2);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l+1, m+1, l+2, m+2, l+1, m+1, l+2, m+2, l+1, m+1, l+2, m+2);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l+1, m+2, l+2, m, l+1, m+2, l+2, m, l+1, m+2, l+2, m);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n", l+1, m+2, l+2, m, l+1, m+2, l+2, m, l+1, m+2, l+2, m);
     
     fprintf(fichero, "r%d%d%d%da: -x%d%d + x%d%d + 9 z%d%d%d%d >= 1;\n", l+1, m+2, l+2, m+1, l+1, m+2, l+2, m+1, l+1, m+2, l+2, m+1);
     fprintf(fichero, "r%d%d%d%db: x%d%d - x%d%d - 9 z%d%d%d%d >= -8;\n\n\n", l+1, m+2, l+2, m+1, l+1, m+2, l+2, m+1, l+1, m+2, l+2, m+1);
     }
     }
     
     for(int i=1; i<=9; i++){
     for(int j=1; j<=9; j++){
     fprintf(fichero, "1 <= x%d%d <= 9;\n", i, j);
     }
     }
     
     for(int i=1; i<=9; i++){
     for(int j=1; j<=9; j++){
     for(int k=j+1; k<=9; k++){
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", i, j, i, k);
     }
     }
     }
     
     for(int j=1; j<=9; j++){
     for(int i=1; i<=9; i++){
     for(int k=i+1; k<=9; k++){
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", i, j, k, j);
     }
     }
     }
     
     for(int i=1; i<=3; i++){
     for(int j=1; j<=3; j++){
     l = 3*i - 2;
     m = 3*j - 2;
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l, m, l+1, m+1);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l, m, l+1, m+2);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l, m, l+2, m+1);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l, m, l+2, m+2);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l, m+1, l+1, m);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l, m+1, l+1, m+2);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l, m+1, l+2, m);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l, m+1, l+2, m+2);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l, m+2, l+1, m);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l, m+2, l+1, m+1);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l, m+2, l+2, m);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l, m+2, l+2, m+1);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l+1, m, l+2, m+1);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l+1, m, l+2, m+2);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l+1, m+1, l+2, m);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l+1, m+1, l+2, m+2);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n", l+1, m+2, l+2, m);
     
     fprintf(fichero, "0 <= z%d%d%d%d <= 1;\n\n", l+1, m+2, l+2, m+1);
     }
     }
     
     fprintf(fichero, "int\n");
     for(int i=1; i<=9; i++){
     for(int j=1; j<=9; j++){
     fprintf(fichero, "x%d%d, ", i, j);
     }
     fprintf(fichero, "\n");
     }
     
     for(int i=1; i<=9; i++){
     for(int j=1; j<=9; j++){
     for(int k=j+1; k<=9; k++){
     fprintf(fichero, "z%d%d%d%d, ", i, j, i, k);
     }
     fprintf(fichero, "\n");
     }
     }
     
     for(int j=1; j<=9; j++){
     for(int i=1; i<=9; i++){
     for(int k=i+1; k<=9; k++){
     fprintf(fichero, "z%d%d%d%d, ", i, j, k, j);
     }
     fprintf(fichero, "\n");
     }
     }
     
     for(int i=1; i<=3; i++){
     for(int j=1; j<=3; j++){
     l = 3*i - 2;
     m = 3*j - 2;
     fprintf(fichero, "z%d%d%d%d, ", l, m, l+1, m+1);
     
     fprintf(fichero, "z%d%d%d%d, ", l, m, l+1, m+2);
     
     fprintf(fichero, "z%d%d%d%d, ", l, m, l+2, m+1);
     
     fprintf(fichero, "z%d%d%d%d, ", l, m, l+2, m+2);
     
     fprintf(fichero, "z%d%d%d%d, ", l, m+1, l+1, m);
     
     fprintf(fichero, "z%d%d%d%d, ", l, m+1, l+1, m+2);
     
     fprintf(fichero, "z%d%d%d%d, ", l, m+1, l+2, m);
     
     fprintf(fichero, "z%d%d%d%d, ", l, m+1, l+2, m+2);
     
     fprintf(fichero, "z%d%d%d%d, ", l, m+2, l+1, m);
     
     fprintf(fichero, "z%d%d%d%d, ", l, m+2, l+1, m+1);
     
     fprintf(fichero, "z%d%d%d%d, ", l, m+2, l+2, m);
     
     fprintf(fichero, "z%d%d%d%d, ", l, m+2, l+2, m+1);
     
     fprintf(fichero, "z%d%d%d%d, ", l+1, m, l+2, m+1);
     
     fprintf(fichero, "z%d%d%d%d, ", l+1, m, l+2, m+2);
     
     fprintf(fichero, "z%d%d%d%d, ", l+1, m+1, l+2, m);
     
     fprintf(fichero, "z%d%d%d%d, ", l+1, m+1, l+2, m+2);
     
     fprintf(fichero, "z%d%d%d%d, ", l+1, m+2, l+2, m);
     
     if ((i == 3) && (j == 3)) {
     fprintf(fichero, "z%d%d%d%d; \n", l+1, m+2, l+2, m+1);
     } else {
     fprintf(fichero, "z%d%d%d%d, \n", l+1, m+2, l+2, m+1);
     }
     }
     }*/
    
    fclose(fichero);
    
    return 0;
    
}
