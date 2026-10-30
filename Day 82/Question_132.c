/*
Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
Date:30/10/2026
*/

#include <stdio.h>
enum TrafficLight{
    RED,
    YELLOW,
    GREEN
};

int main(){
    enum TrafficLight light;

    printf("Enter the traffic light color(0 for RED, 1 for YELLOW, 2 for GREEN): ");
    scanf("%d", &light);

    switch(light){
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;

        default:
            printf("Invalid Traffic Light");
    }
    return 0;
}