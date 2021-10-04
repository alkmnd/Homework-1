

#include <string.h>
#include "well_of_wisdom.h"
#include "stdlib.h"

int In(well_of_wisdom* wisdom, FILE* input_file) {
    int type;
    wisdom = (well_of_wisdom*)malloc(sizeof(well_of_wisdom));
    int status_code = fscanf(input_file, "%s\n%s", &type, wisdom->content);
    if(status_code!=2){
        printf("Could not read string!\n");
        return 1;
    }
    if(strlen(wisdom->content)==0)
    {
        printf("Length could not be 0\n");
        return 1;
    }
    switch (type) {
        case well_of_wisdom::PROVERB:
            wisdom->wisdom_type = well_of_wisdom::PROVERB;
            return In(&wisdom->proverb, input_file);
        case well_of_wisdom::APHORISM:
            wisdom->wisdom_type = well_of_wisdom::APHORISM;
            return In(&wisdom->aphorism, input_file);
        case well_of_wisdom::PUZZLE:
            wisdom->wisdom_type = well_of_wisdom::PUZZLE;
            return In(&wisdom->puzzle, input_file);
        default:
            printf("Could not parse number!\n");
            return 1;

}
}
void Out(const well_of_wisdom* wisdom, FILE* output_file) {
    switch (wisdom -> wisdom_type) {
        case well_of_wisdom::PROVERB:
            Out(&wisdom->proverb, output_file);
            return;
        case well_of_wisdom::APHORISM:
            Out(&wisdom->aphorism, output_file);
        case well_of_wisdom::PUZZLE:
            Out(&wisdom->puzzle, output_file);
        default:
            return;
    }
}
int GetQuotient(const well_of_wisdom* wisdom) {
    int counter = 0;
    if(strlen(wisdom->content)==0){
        printf("Length could not be 0!\n");
        return 0;
    }
    for (int i = 0; i < strlen(wisdom->content); ++i) {
        if(wisdom->content[i]=='.'||wisdom->content[i]==','
        ||wisdom->content[i]=='!'||wisdom->content[i]=='?')
        {
            counter++;
        }
    }
    return strlen(wisdom->content)/counter;
}
