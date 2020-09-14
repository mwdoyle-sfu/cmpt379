// A quine is a program that generates its own code
// A program generator that generates ~itself~ is called a quine

#include <stdio.h>
int main(){
    char *c = "#include <stdio.h>%cint main(){char *c=%c%s%c;printf(c,10,34,c,34,10);}%c";
    printf(c,10,34,c,34,10); // produces the same program
}
