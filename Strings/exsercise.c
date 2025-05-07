#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Bu,bir;örnek-dizedir.";
    char ayraclar[] = ",;-";
    char *parca;
    int k = strlen(str);
    parca = strtok(str, ayraclar);
    while (parca != NULL) {
        printf("Parça: %s\n", parca);
        parca = strtok( NULL, ayraclar);
    }
    for (int i = 0;i<k; i++) {
        if (str[i] == '\0') {
            str[i] = ' ';
        }
    }
    printf("Orijinal dize (değiştirilmiş): %s\n", str);

    return 0;
}