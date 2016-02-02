#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "dict.c"
#include "rlutil.h"

#ifdef __cplusplus
using namespace rlutil;
using namespace std;
#endif


template<typename T, int sz>
int size(T(&)[sz])
{
    return sz;
}

char* insults[] = {
	"Think harder next time!",
	"Not even close.",
	"Please try again.",
	"Try harder!",
	"That's not even funny.",
	"Try taking a break.",
	"Why would you even think that?",
	"Don't give up!",
	"You are supposed to enter the definition of the given word.",
	"It's OK, we all make mistakes sometimes.",
	"Clearly you need more mental training."
};


int main(){
	srand(time(0));
	puts("Welcome to The Early Word! Remember, only regular\nuse will help you to improve your mind.\n");
	while(true){
		defn def1 = defs[rand()%size(defs)], def2 = defs[rand()%size(defs)];
    	printf("\nDefine \"%s\": ", def1.word);
    	while(getchar() != '\n');

    	setColor(RED);
    	puts("\a   INCORRECT!!!");
    	resetColor();
    	puts(insults[rand()%size(insults)]);

    	printf("%s: %s\n", def1.word, def2.meaning);
	}
}