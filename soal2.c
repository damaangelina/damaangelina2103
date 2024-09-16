#include <stdio.h>
#include <string.h>

void evaluasi_string(char a[], char b[]) {
   
    if (strlen(a) != strlen(b)) {
        printf("BERBEDA\n");
    }
   
    else if (strcmp(a, b) == 0) {
        printf("IDENTIK\n");
    }
  
    else {
        printf("MIRIP\n");
    }
}

int main() {
    char string_a[101], string_b[101];

    scanf("%100s", string_a);


  
    scanf("%100s", string_b);

  
    evaluasi_string(string_a, string_b);

    return 0;
}