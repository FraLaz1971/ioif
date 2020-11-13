#ifndef DATA_H
#define DATA_H

#include "functions.h"

struct MetaDataMx2{
    int ncolumns; /* n. of columns of the matrix */
    int nrows; /* n. of columns of the matrix */
    char *dsname;   /* name of the dataset */
    char *cname[2]; /* name of the string*/
    char *ctype[2]; /* data type of the items of this column */
    char *cunit[2]; /* physical unit of the measurement */
};

static double x[RMAX]; static double y[RMAX];

void set_default_metadata();

void set_default_data();

void display_metadata();

void display_data();

void test_data();

#endif // DATA_H
