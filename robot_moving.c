#include<stdio.h>   //decalare standard input output header file
#include<stdlib.h> //decalare standard library header file
#include<time.h> //decalare time header file
#include<unistd.h> //decalare unistd header file

#define SAFE_DISTANCE 20 //decalare safe distance

//This is fuciton to check the distance
int get_distance(){
    return rand() % 100; //decalare random distance
}

//This is function to execute the robot
void move_forward(){
    printf("Robot is moving forward\n");
}

void turn_left(){
    printf("Robot is turning left\n");
}

void turn_right(){
    printf("Robot is turning right\n");
}

int main(){
    srand(time(0)); //decalare random seed
    for(int i=0; i<10; i++){ //ramdom ten steps
        int distance = get_distance(); //decalare distance
        printf("Distance to obstacle: %d\n", distance); //decalare distance to obstacle in order to turn left or rigt
        if(distance < SAFE_DISTANCE){ //decalare between safe distance and distance
           if(rand()% 2 == 0){turn_left();}//decalare turn left, if random number is even
            else {turn_right();} //decalare move right
        }
        else 
            move_forward(); //decalare move forward
        sleep(1); //decalare sleep for 1 second
    }
}