#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "data.h"


void set_default_metadata(struct MetaDataMx2 *metadMx2)
{
    metadMx2->ncolumns = 2;
    metadMx2->nrows = 32;
    metadMx2->dsname = "AwesomeData";
    metadMx2->cname[0] = "Time";
    metadMx2->cname[1] = "Counts";
    metadMx2->ctype[0] = "real";
    metadMx2->ctype[1] = "real";
    metadMx2->cunit[0] = "s";
    metadMx2->cunit[1] = "#";
}

void set_default_data(struct MetaDataMx2 *metadMx2)
{
     for ( a=0; a < (metadMx2->nrows); a++ )
     {
        t=a-(metadMx2->nrows/2);
        x[a]=t; y[a]=t*t*t;
     }

}


void display_metadata(struct MetaDataMx2 *metadMx2)
{
    puts("*** display_metadata START ***");
    printf("ncolumns = %i\n", metadMx2->ncolumns); /* print n. of columns of the matrix */
    printf("nrows = %i\n", metadMx2->nrows); /* n. of rows of the matrix */
    printf("name of the dataset = %s\n", metadMx2->dsname); /* name of the dataset */
    /* printing labels of columns in the matrix */
    printf("cname[%i] = %s\tcname[%i] = %s\n", 0, metadMx2->cname[0], 1, metadMx2->cname[1]);
    /* printing data type of columns in the matrix */
    printf("ctype[%i] = %s\tctype[%i] = %s\n", 0, metadMx2->ctype[0], 1, metadMx2->ctype[1]);
    /* printing physical units of columns in the matrix */
    printf("cunit[%i] = %s\tcunit[%i] = %s\n", 0, metadMx2->cunit[0], 1, metadMx2->cunit[1]);
    puts("*** display_metadata END ***");
}


void display_data(struct MetaDataMx2 *metadMx2)
{
     for ( a=0; a < metadMx2->nrows; a++ )
     {
        printf("%.6f\t%.6f\n", x[a], y[a]);
     }
}

void test_data(struct MetaDataMx2 *metadMx2){
    set_default_metadata(metadMx2);
    display_metadata(metadMx2);
    set_default_data(metadMx2);
    display_data(metadMx2);
}
