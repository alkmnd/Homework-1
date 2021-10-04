

#include "puzzle.h"
#include "string.h"

int In(puzzle *p, FILE* input_file) {
    char buffer [10001];
    int res = fscanf(input_file, "%s\n", buffer);
    if(res!=1) {
        return 1;
    }
    strcpy(buffer, p -> answer);
    return 0;

}
void Out(const puzzle* p, FILE* output_file) {
    fprintf(output_file, "This is puzzle\tAnswer:%s\n", p->answer);
}