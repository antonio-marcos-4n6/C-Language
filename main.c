#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  FILE *pont_arq; // cria variável ponteiro para o arquivo
  char palavra[40]; // variável do tipo string
  char texto_str[40];
  
  //abrindo o arquivo com tipo de abertura a
  pont_arq = fopen("arquivo_palavra.txt", "a");
  
  //testando se o arquivo foi realmente criado
  if(pont_arq == NULL)
  {
  printf("Erro na abertura do arquivo!");
  return 1;
  }
  
  printf("Escreva uma palavra para testar gravacao de arquivo: ");
  scanf("%s", palavra);
  
  //usando fprintf para armazenar a string no arquivo
  fprintf(pont_arq, " %s", palavra);
  
  //usando fclose para fechar o arquivo
  fclose(pont_arq);
  
  printf("Dados gravados com sucesso!");
  
  //abrindo o arquivo com tipo de abertura r
  pont_arq = fopen("arquivo_palavra.txt", "r");
  
  while(fgets(texto_str, 20, pont_arq) != NULL)
  printf("Conteudo encontrado no arquivo: \n %s \n", texto_str);
  
  //fechando o arquivo
  fclose(pont_arq);
  
  getch();
  
  return(0);
}
