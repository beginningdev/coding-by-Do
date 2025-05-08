#include<stdio.h>
#include<math.h>
#include<float.h>

typedef struct {
    float x;
    float y;
} Point;

// Function to calculate the distance between two points
float distance(Point a, Point b){
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y,2));
}

int main(){
    Point points[] = {{1,2},{4,6},{7,1},{2,3}};
    //Declare time of points
    int n = sizeof(points)/sizeof(points[0]);
    float min = FLT_MAX; //Initialize min to maximum float value
    int idx1 = 0, idx2 = 1; //Declare two point
    for(int i = 0; i<n;i++){
        for(int j = i+1; j<n; j++){
            float d = distance(points[i], points[j]); //calculate distance bewteen two points
            if(d < min){ //d is minimum distance
                min = d; // d equal min
                idx1 = i; // idx1 = the first point
                idx2 = j; //idx2 = the second point
            }
        }
    }
    printf("The nearest pair is: (%.1f, %.1f) and (%.1f, %.1f), distance = %.2f\n",
            points[idx1].x, points[idx1].y,
            points[idx2].x, points[idx2].y,
            min);
    return 0;
}