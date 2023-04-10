/* 3. Tradutor do Papai Noel (++) */
#include <stdio.h>
#include <string.h>
 
struct dados{
    char *pais;
    char *frase;
};
 
int main(){
    int i, j, flag, s;
    char t[40];
    struct dados teste[24];
 
    teste[0].pais = "brasil"; teste[0].frase = "Feliz Natal!";
    teste[1].pais = "alemanha"; teste[1].frase = "Frohliche Weihnachten!";
    teste[2].pais = "austria"; teste[2].frase = "Frohe Weihnacht!";
    teste[3].pais = "coreia"; teste[3].frase = "Chuk Sung Tan!";
    teste[4].pais = "espanha"; teste[4].frase = "Feliz Navidad!";
    teste[5].pais = "grecia"; teste[5].frase = "Kala Christougena!";
    teste[6].pais = "estados-unidos"; teste[6].frase = "Merry Christmas!";
    teste[7].pais = "inglaterra"; teste[7].frase = "Merry Christmas!";
    teste[8].pais = "australia"; teste[8].frase = "Merry Christmas!";
    teste[9].pais = "portugal"; teste[9].frase = "Feliz Natal!";
    teste[10].pais = "suecia"; teste[10].frase = "God Jul!";
    teste[11].pais = "turquia"; teste[11].frase = "Mutlu Noeller";
    teste[12].pais = "argentina"; teste[12].frase = "Feliz Navidad!";
    teste[13].pais = "chile"; teste[13].frase = "Feliz Navidad!";
    teste[14].pais = "mexico"; teste[14].frase = "Feliz Navidad!";
    teste[15].pais = "antartida"; teste[15].frase = "Merry Christmas!";
    teste[16].pais = "canada"; teste[16].frase = "Merry Christmas!";
    teste[17].pais = "irlanda"; teste[17].frase = "Nollaig Shona Dhuit!";
    teste[18].pais = "belgica"; teste[18].frase = "Zalig Kerstfeest!";
    teste[19].pais = "italia"; teste[19].frase = "Buon Natale!";
    teste[20].pais = "libia"; teste[20].frase = "Buon Natale!";
    teste[21].pais = "siria"; teste[21].frase = "Milad Mubarak!";
    teste[22].pais = "marrocos"; teste[22].frase = "Milad Mubarak";
    teste[23].pais = "japao"; teste[23].frase = "Merii Kurisumasu!";
 
    while(scanf(" %[^\n]", t) != EOF){
        getchar();
        int tm = strlen(t);
 
        for(i=0; i<24; i++){
            flag = 0; s = 0;
            for(j=0; j<tm; j++){
                if(t[j] == teste[i].pais[j])
                    flag++;
            }
 
            if(flag == tm){
                printf("%s\n", teste[i].frase);
                s = 1;
                break;
            }
        }
 
        if(s == 0)
            printf("-- NOT FOUND --\n");
    }
 
return 0;
}