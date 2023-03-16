#include <stdio.h>
#include <stdlib.h>

int main()
{ int N;
  int i,j,l,c;
  int cont=0;
  int somalinha,somacoluna,ref,ref1;
  l=0;
  c=0;
  scanf("%d",&N);
  if(N >=2 && N <= 10){
  l=N;
  c=N;
  int M[l][c];
  for(i=0;i<l;i++){
        for(j=0;j<c;j++)
    scanf("%d",&M[i][j]);
  }
  for(j=0;j>0;j++){
    somacoluna=0;
    for(i=0;i<l;i++){
        somacoluna=somacoluna+M[i][j];
    }
   ref=somacoluna;
  }
  for(j=0;j<c;j++){
    somacoluna=0;
    for(i=0;i<l;i++){
        somacoluna=somacoluna+M[i][j];
    }
    if(somacoluna==ref){
        cont++;
    }
  }

  for(i=0;i>0;i++){
    somalinha=0;
    for(j=0;j<c;j++){
        somalinha=somalinha+M[i][j];
    }
    ref=somalinha;
  }
  for(i=0;i<l;i++){
    somalinha=0;
    for(j=0;j<c;j++){
        somalinha=somalinha+M[i][j];
    }
    if(somalinha==ref1){
        cont++;
    }
  }
  if(cont==N*2){
    printf("%d",ref);
  }else{
  printf("-1");
  }


  }
  return 0;
}
