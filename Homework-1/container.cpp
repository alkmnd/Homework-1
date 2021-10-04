

#include <cstdlib>
#include "container.h"
void Init(container *c) {
    c->len = 0;
}
void Clear(container *c) {
    for(int i = 0; i < c->len; i++) {
        delete c->content[i];
    }
    c->len = 0;
}
void In(container *c, FILE* input_file) {
    int count;
    int status_code = fscanf(input_file, "%d\n", count);
    if(status_code==1) {
        for (int i = 0; i < count; ++i) {
            if (c->len < 10001) {
                well_of_wisdom *wisdom;
                In(wisdom, input_file);

                c->content[i] = wisdom;
                c->len++;
            } else {
                printf("Could not add to container\n");
                return;

            }
        }
    }
    else {
        printf("Could not parse number!\n");
    }
}


void Out(container *c, FILE* output_file) {
    fprintf(output_file, "Container contains %s elements\n", c->len);
    for (int i = 0; i < c->len; ++i) {
        fprintf(output_file, "%s. ", i);
        Out(c->content[i], output_file);
    }
}
void SortElements(container *c) {
    int step = 1;
    well_of_wisdom *temp = (well_of_wisdom*)malloc(c->len* sizeof(int));
    while (step < c->len)
    {
        int index = 0;
        int l = 0;
        int m = l + step;
        int r = l + step * 2;
        do
        {
            m = m < c->len ? m : c->len;
            r = r < c->len ? r : c->len;
            int i1 = l, i2 = m;
            for (; i1 < m && i2 < r; )
            {
                if (GetQuotient(c->content[i1]) < GetQuotient(c->content[i2])) { temp[index++] = *c->content[i1++]; }
                else { temp[index++] = *c->content[i2++]; }
            }
            while (i1 < m) temp[index++] = *c->content[i1++];
            while (i2 < r) temp[index++] = *c->content[i2++];
            m += step * 2;
            r += step * 2;
        } while (l < c->len);
        for (int i = 0; i < c->len; i++)
            c->content[i] = &temp[i];
        step *= 2;
    }
}


