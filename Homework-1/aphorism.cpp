

#include "aphorism.h"
#include "string.h"

int In(aphorism *a, FILE* input_file) {
    char buffer [10001];
    int res = fscanf(input_file, "%s\n", buffer);
    if(res!=1) {
        printf("Could not read string!\n");
        return 1;
    }
    strcpy(buffer, a -> author);
}
void Out(const aphorism* a, FILE* output_file) {
    fprintf(output_file, "This is aphorism\tAuthor:%s\n", a->author);
}