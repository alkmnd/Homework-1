

#include "proverb.h"
#include "string.h"

int In(proverb  *pr, FILE* input_file) {
    char buffer [10001];
    int res = fscanf(input_file, "%s\n", buffer);
    if(res!=1) {
        printf("Could not read string\n");
        return 1;
    }
    strcpy(buffer, pr->country);
}
void Out(const proverb* pr, FILE* output_file) {
    fprintf(output_file, "This is proverb\tcountry:%s\n", pr->country );
}