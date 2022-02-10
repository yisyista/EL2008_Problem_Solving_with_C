#include <stdio.h>
#include <stdlib.h>

struct mhs {
    char nama[100];
    int nim;
    int kehadiran;
};

struct mhs data[30] = {{"Mika", 18320111, 70}, {"Alika", 18320888, 85}, {"Nando", 18320959, 60}, {"Mecca", 18320183, 90}, {"Chandra", 18320632, 43}};

int main()
{
    int i;
    printf("\nMahasiswa dengan kehadiran di bawah 80 persen\n");
    for(i=0; i<5; i++){
        if (data[i].kehadiran < 80){
            printf("Nama : %s \nNIM : %d\n\n", data[i].nama, data[i].nim);

        }
    }
}
