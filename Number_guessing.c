# include<stdio.h>
# include<stdlib.h> // stdlib. h is only use when we need to allocate memory in our program.
# include<time.h>   // contains time and date function declarations to provide standardized access to time/date manipulation and formatting
int main(){
    int num , guess , nguesses=1;
    srand(time(0));  //  help in the generation of random numbers by seeding rand with a starting value.
    num=rand()%100 +1; // Generate random no. b/w 1 to 100
    
    do{
        printf("Guess the no. b/w 1 to 100: ");
        scanf("%d" , &guess);
        if(guess>num){
            printf("Lower no. please!!\n");
        }
        else if(guess<num){
            printf("Higher no. please!!\n");
        }
        else{
            printf("You guessed it right in %d attempts ",nguesses);
        }
        nguesses++;
    }
    while(guess!=num);    // repeat the loop until the condition is false
    return 0;
}