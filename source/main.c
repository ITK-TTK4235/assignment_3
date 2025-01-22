#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char * taco_krydder(unsigned int taco_points);
char * protein(unsigned int taco_points);
char * taco_saus(unsigned int taco_points);
char * gronnsaker(unsigned int taco_points);
char * taco_lefse(unsigned int taco_points);
char * drikke(unsigned int taco_points);

void print_custom_taco_recipe(char * name, int taco_points){
    printf("\n%s sin spesielle tacooppskrift (krever %d tacopoeng!):\n", name,taco_points);
    printf(" - Tacokrydder:\n      \"");
    printf("%s",taco_krydder(taco_points));
    printf("\"\n\n");

    printf(" - Protein:\n      \"");
    printf("%s",protein(taco_points));
    printf("\"\n\n");

    printf(" - Tacosaus:\n      \"");
    printf("%s",taco_saus(taco_points));
    printf("\"\n\n");

    printf(" - Grønnsaker:\n      \"");
    printf("%s",gronnsaker(taco_points));
    printf("\"\n\n");

    printf(" - Tacolefse:\n      \"");
    printf("%s",taco_lefse(taco_points));
    printf("\"\n\n");

    printf(" - Drikke:\n      \"");
    printf("%s",drikke(taco_points));
    printf("\"\n\n");
}

int main(int argc, char ** argv){
    if(argc < 2){
        fprintf(stderr, "Correct usage: %s <name>\n", argv[0]);
        exit(1);
    }

    time_t t;
    srand((unsigned) time(&t));



    unsigned int taco_points = 0;
    for(char * p_letter = argv[1]; *p_letter != '\0'; p_letter++){
        taco_points += *p_letter*rand();
    }


    print_custom_taco_recipe(argv[1], abs(taco_points));

    return 0;
}
