#include <stdio.h>
#include <math.h>


int apakah_prima(long long N) {
    if (N <= 1) return 0;  
    if (N == 2) return 1;  
    if (N % 2 == 0) return 0;  
    
    
    for (long long i = 3; i <= sqrt(N); i += 2) {
        if (N % i == 0) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    long long N;
    
    
    scanf("%lld", &N);
    
    
    if (apakah_prima(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}
