#include <stdio.h>
#include <stdlib.h>

void main()
{
    int A = 0;
    int B = 0;
    int ABaru = 0;
    int BBaru = 0;
    int instruksi;
    int selisih;

    while(B != 4){
        printf("\nBerikut adalah instruksi yang dapat dilakukan\n");
        printf("1. Mengisi ember 3L\n");
        printf("2. Mengisi ember 5L\n");
        printf("3. Menuang isi ember 3L ke 5L\n");
        printf("4. Menuang isi ember 5L ke 3L\n");
        printf("5. Mengosongkan isi ember 3L\n");
        printf("6. Mengosongkan isi ember 5L\n");

        printf("Pilih instruksi sesuai nomor yang tertera!\n");
        printf("Nomor yang dipilih : ");
        scanf(" %d",&instruksi);
        printf("\n");

        if(instruksi == 1){
            A = 3;
            printf("Isi Ember 3L = %d\n", A);
            printf("Isi Ember 5L = %d\n", B);
        }else if(instruksi == 2){
            B = 5;
            printf("Isi Ember 3L = %d\n", A);
            printf("Isi Ember 5L = %d\n", B);
        }else if(instruksi == 3){
            ABaru = A+B-5;
            if (ABaru <= 0){
                ABaru = 0;
            }else if(ABaru > 0 && ABaru < 3){
                ABaru = ABaru;
            }else if(ABaru >= 3){
                ABaru = 3;
            }
            selisih = ABaru - A;
            if(selisih < 0){
                BBaru = B + (A - ABaru);
            }else if(selisih >= 0){
                BBaru = B + (ABaru - A);
            }
            A = ABaru;
            B = BBaru;
            printf("Isi Ember 3L = %d\n", A);
            printf("Isi Ember 5L = %d\n", B);
        }else if(instruksi == 4){
            BBaru = A+B-3;
            if(BBaru <=0){
                BBaru = 0;
            }else if (BBaru > 0 && BBaru < 3){
                BBaru = BBaru;
            }else if(BBaru >= 3){
                BBaru = 3;
            }
            selisih = (BBaru - B);
            if(selisih >=0){
                ABaru = A+(BBaru-B);
            }else if(selisih < 0){
                ABaru = A+(B-BBaru);
            }

            A = ABaru;
            B = BBaru;
            printf("Isi Ember 3L = %d\n", A);
            printf("Isi Ember 5L = %d\n", B);
        }else if(instruksi == 5){
            A = 0;
            printf("Isi Ember 3L = %d\n", A);
            printf("Isi Ember 5L = %d\n", B);
        }else if(instruksi == 6){
            B = 0;
            printf("Isi Ember 3L = %d\n", A);
            printf("Isi Ember 5L = %d\n", B);
        }

    }




}
