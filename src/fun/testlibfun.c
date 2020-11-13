#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "plot.h"
#include "data.h"

int main(int argc, char **argv)
{
    if (argc == 4){

    struct MetaDataMx2 m2d;

    nrows=atoi(argv[2]); ncols=(atoi(argv[3]));
    	/* allocate a mybuffer of chars with length bufsize */
    memcpy(infile, argv[1], strlen(argv[1]));

    open_data_file(infile);

    allocate_buffer();

    allocate_data();

    parse_data_file();

    create_data_file("fixed.tsv");

    create_gp_cmd_file("fixed.gp");

    test_data(m2d);
/*    showdata(data, nrows, ncols); */

    deallocate_buffer();

    deallocate_data();

    return 0;

    } else {
    printf("usage: %s infilename nrows ncolumns\n", argv[0]);
	return 1;
}


}
