#include <syslog.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>
#include <string.h>

int main(int argc , char *argv[]){

	FILE *fptr;

	fptr=fopen( argv[1] ,"w");
	if ( fptr !=NULL){
		fprintf(fptr,"%s",argv[2]);
	        printf("%s",argv[2]);


		openlog(NULL,0,LOG_USER);

		syslog(LOG_ERR,"***********ERROR************ : %d",argc);
	        printf(" ***********ERROR************ \n");

		syslog(LOG_DEBUG,"Writing %s to %s",argv[2],argv[1]);
		fclose(fptr);}
	else{

		if (argv[1]==NULL || argv[2]==NULL){
	        	syslog(LOG_ERR,"***********ERROR************sqqsqsqsqsq : %d",argc);
                	printf(" ***********ERROR****cqwdcwqdqwdqwcdqw********\n ");
			exit(1);
		}
	}

	//char* ts1 = strdup(argv[1]);
	//char* ts2 = strdup(argv[1]);

	//char* dir = dirname(ts1);
	//char* filename = basename(ts2);


}

