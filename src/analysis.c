#include <stdio.h>
#include <stdlib.h>
/* #include "fun/functions.h" */

int main(int argc, char **argv)
{
    if (argc == 4){
	puts("Hello Analysis");
/*
    nrows=atoi(argv[2]); ncols=(atoi(argv[3])); */
    	/* allocate a mybuffer of chars with length bufsize */
/*
    memcpy(infile, argv[1], strlen(argv[1]));

    open_data_file(infile);

    allocate_buffer();

    allocate_data();

    parse_data_file();

    showdata(data, nrows, ncols);

    deallocate_buffer();

    deallocate_data();
*/
    return 0;
 
    } else {
    printf("usage: %s infilename nrows ncolumns\n", argv[0]);
	return 1;
}


}
