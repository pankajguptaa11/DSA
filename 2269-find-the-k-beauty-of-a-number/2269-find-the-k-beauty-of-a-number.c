#include <stdio.h>
#include <stdlib.h>

int divisorSubstrings(int num, int k) {
    char string_num[20];  // Assuming a maximum of 20 digits for the number
    sprintf(string_num, "%d", num);
    int k_beauty = 0;

    for (int i = 0; i <= strlen(string_num) - k; i++) {
        char sub_num_str[20];
        strncpy(sub_num_str, string_num + i, k);
        sub_num_str[k] = '\0';
        int sub_num = atoi(sub_num_str);

        if (sub_num && num % sub_num == 0) {
            k_beauty++;
        }
    }

    return k_beauty;
}

