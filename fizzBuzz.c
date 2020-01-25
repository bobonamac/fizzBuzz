/* Outputs a list of numbers from 1 to 100 and replaces
any numbers divisible by 3 with "fizz" and those
divisible by 5 with "Buzz". Numbers divisible by both 
are replaced with "fizzBuzz".
*/

#include <stdio.h>

int main(void){
	for (int i = 1; i <= 100; i++){
		if ((i % 3 == 0) && (i % 5 == 0)) {
			printf("fizzBuzz\n");
		}
		else if (i % 3 == 0){
			printf("fizz\n");
		}
		else if (i % 5 == 0){
			printf("buzz\n");
		}
		else {
			printf("%d\n", i);
		}
	}
return 0;
}