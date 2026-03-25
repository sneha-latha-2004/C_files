#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("sample.txt", "w");  // open file in write mode

    fprintf(fp, "Hello, this is file handling in C.");

    fclose(fp);  // close file

    return 0;
}