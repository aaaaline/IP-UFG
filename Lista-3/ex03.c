/* 3. Quantas Letras? (+) */
#include <stdio.h>
#include <string.h>
 
int main(){
    int n, i, tamLinha, j;
    char linha[10000];
 
    scanf("%d", &n);
 
    for(i=0; i<n; i++){
        scanf(" %[^\n]", linha);
        getchar();
 
        tamLinha = strlen(linha);
        int consoantes=0, vogais=0, letras=0;
 
        for(j=0; j<tamLinha; j++){
            if(linha[j] == 'A' || linha[j] == 'a'){ vogais++; letras++; }
            else if(linha[j] == 'B' || linha[j] == 'b'){ consoantes++; letras++; } 
            else if(linha[j] == 'C' || linha[j] == 'c'){ consoantes++; letras++; } 
            else if(linha[j] == 'D' || linha[j] == 'd'){ consoantes++; letras++; } 
            else if(linha[j] == 'E' || linha[j] == 'e'){ vogais++; letras++; } 
            else if(linha[j] == 'F' || linha[j] == 'f'){ consoantes++; letras++; } 
            else if(linha[j] == 'G' || linha[j] == 'g'){ consoantes++; letras++; } 
            else if(linha[j] == 'H' || linha[j] == 'h'){ consoantes++; letras++; } 
            else if(linha[j] == 'I' || linha[j] == 'i'){ vogais++; letras++; } 
            else if(linha[j] == 'J' || linha[j] == 'j'){ consoantes++; letras++; } 
            else if(linha[j] == 'K' || linha[j] == 'k'){ consoantes++; letras++; } 
            else if(linha[j] == 'L' || linha[j] == 'l'){ consoantes++; letras++; } 
            else if(linha[j] == 'M' || linha[j] == 'm'){ consoantes++; letras++; } 
            else if(linha[j] == 'N' || linha[j] == 'n'){ consoantes++; letras++; } 
            else if(linha[j] == 'O' || linha[j] == 'o'){ vogais++; letras++; } 
            else if(linha[j] == 'P' || linha[j] == 'p'){ consoantes++; letras++; } 
            else if(linha[j] == 'Q' || linha[j] == 'q'){ consoantes++; letras++; } 
            else if(linha[j] == 'R' || linha[j] == 'r'){ consoantes++; letras++; } 
            else if(linha[j] == 'S' || linha[j] == 's'){ consoantes++; letras++; } 
            else if(linha[j] == 'T' || linha[j] == 't'){ consoantes++; letras++; } 
            else if(linha[j] == 'U' || linha[j] == 'u'){ vogais++; letras++; } 
            else if(linha[j] == 'V' || linha[j] == 'v'){ consoantes++; letras++; } 
            else if(linha[j] == 'W' || linha[j] == 'w'){ consoantes++; letras++; } 
            else if(linha[j] == 'X' || linha[j] == 'x'){ consoantes++; letras++; } 
            else if(linha[j] == 'Y' || linha[j] == 'y'){ consoantes++; letras++; } 
            else if(linha[j] == 'Z' || linha[j] == 'z'){ consoantes++; letras++; }  
        }
 
        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", letras, vogais, consoantes);
    }
 
return 0;
}