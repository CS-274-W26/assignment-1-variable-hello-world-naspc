#include <stdio.h> // Necessary for printf()
#include <time.h> // provides the time() 
#include <stdlib.h> // provides the rand() and srand() 
// Other includes
int main() {
srand(time(NULL));
int myrand = rand() % 11; // generates the numbers 0 - 10 inclusive 
printf("The random number was: %d\n", myrand);
 
   if(myrand < 5){
	printf("Eat more beef,kick less cats \n");
}  else if (myrand <= 9 && myrand >= 5  ) {
  	printf("FRODO LIVES\n");
}  else if(myrand == 10) {
	printf("Larn is the best roguelike\n"); //Dead Cells is better >> 
}
return 0;
}


