#include <stdio.h>

int main() {
    int N, kodeKelompok;
 
    scanf("%d", &N);
    
    int nilai[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }
    
    scanf("%d", &kodeKelompok);
    
    int totalNilai = 0;
    
    for (int i = 0; i < N; i++) {
  
        if ((i % 4) == (kodeKelompok - 1)) {
            totalNilai += nilai[i];
        }
    }

    printf("%d\n", totalNilai);
    
    return 0;
}