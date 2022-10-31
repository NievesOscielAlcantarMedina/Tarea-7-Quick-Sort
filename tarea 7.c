#include <stdio.h>
#define TAM 10
void qs(int lista[TAM],int limite_izq,int limite_der);
int main()
{
    
    
      int lista[TAM] = {10,9,8,7,6,5,4,3,1,0};
      int i;
     for (i=0; i<TAM; i++){
       printf("%d,",lista[i]);
   }
   
  qs(lista,0,TAM);
   
   printf("\n");
   for (i=0; i<TAM; i++){
       printf("%d,",lista[i]);
   }
    
    
    
} 
void qs(int lista[TAM],int limite_izq,int limite_der)
{
    int izq,der,temporal,pivote;

    izq=limite_izq; 
    der = limite_der; 
    pivote = lista[(izq+der)/2];

    do{
        while(lista[izq]<pivote && izq<limite_der)izq++; //1
        while(pivote<lista[der] && der > limite_izq)der--;//2
        if(izq <=der)
        {
            temporal= lista[izq];
            lista[izq]=lista[der]; 
            lista[der]=temporal;
            izq++;
            der--;

        }

    }while(izq<=der);

    if(limite_izq<der){qs(lista,limite_izq,der);}
    if(limite_der>izq){qs(lista,izq,limite_der);}

}


  


