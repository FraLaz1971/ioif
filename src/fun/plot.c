/* functions to plot science data using gnuplot */
#include "plot.h"

/* create the file containing 2D points to be plotted
saving it on an ascii text file, takes in input
the string with the file name ofname, points are real
numbers separated by tabs */


int create_data_file(char *ofname){
         /* open output file for writing */
     /* char *ofname = ofname; */
     strcat(es, ": Can't open file "); strcat(es, ofname); strcat(es, " for writing \n");
     ofptr = fopen(ofname,"w");
     if ( ofptr == NULL  )  /* if can't open outfile receive an herror on opening file */
     {
       printf("Error OPENING FILE: err msg = %s\n", strerror(errno));
       fprintf(stderr,"fopen() failed in source file %s at line # %d\n", __FILE__,__LINE__);
       perror(es);  /* then handle the error */
       printf("exit value = %d : exiting\n", EXIT_FAILURE);
         exit(EXIT_FAILURE);
     } else {
       ferror ( ofptr );
    }
    fprintf(stderr, "%s: file %s correctly open for writing\n", "plot.c", ofname );
    /* process input data */
     while ( ( ch = fgetc(ifptr)) != EOF )  /* until you don't get the end of input file */
     {
       fputc(ch,ofptr);  /* write the file content on outfile */
       if(ferror(ofptr))
       {
         printf("File Error writing rows ..!!\n");
         fprintf(stderr,"fopen() failed in source file %s at line # %d\n", __FILE__,__LINE__);
       }
     }
     fclose(ifptr);  /* close the input file */
}

/* create a gnuplot commands file with directives on how to plot
the points */

int create_gp_cmd_file(char gp_cmds_fn){
}

/* launch gnuplot cmd withn gp_cmds_ifn as gnuplot command file */
int gp_plot(char * gp_cmds_ifn){

}
