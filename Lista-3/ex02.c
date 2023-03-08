/* 2. LED (+) */
#include <stdio.h>
#include <string.h>
 
int main(){
    int n, i, tam, j=0;
    char str[10000];
    
    scanf("%d", &n);
 
    for(i=0; i<n; i++){
        scanf(" %[^\n]", str);
        getchar();
        
        int leds = 0;
        tam = strlen(str);
        
        for(j=0; j<tam; j++){
            if(str[j] == '0'){ leds = leds + 6; }
            else if(str[j] == '1'){ leds = leds + 2; }
            else if(str[j] == '2'){ leds = leds + 5; }
            else if(str[j] == '3'){ leds = leds + 5; }
            else if(str[j] == '4'){ leds = leds + 4; }
            else if(str[j] == '5'){ leds = leds + 5; }
            else if(str[j] == '6'){ leds = leds + 6; }
            else if(str[j] == '7'){ leds = leds + 3; }
            else if(str[j] == '8'){ leds = leds + 7; }
            else if(str[j] == '9'){ leds = leds + 6; }
        }
        
        printf("%d leds\n", leds);
    }
    
return 0;
}