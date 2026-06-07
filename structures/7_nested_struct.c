/************************************
 *. Nested Structures and Arrays within Structures
Goal
Explore how to organize complex data using nested structures and how to embed arrays inside structures for buffer management.

Activity
Log Session a structure with another structure as a member.
Log Session an array of structures to hold multiple sensor values.
Include arrays within a structure to buffer a set of samples.
Model a protocol layer with header and payload sub-structures.
Tip: Use typedef to simplify nested structure declarations.
 * */
 
#include <stdio.h>
#include<string.h>
typedef struct {
    int sensor_id;
    float value;
    struct member
    {
        char sensor_name[50];
    }mem;
} Sensor;

int main() {
    Sensor sensors[3];

    for (int i = 0; i < 3; i++) {
        sensors[i].sensor_id = i + 1;
        sensors[i].value = 25.5 + i;
      strcpy(sensors[i].mem.sensor_name,"Device");
    }

    for (int i = 0; i < 3; i++) {
        printf("Sensor %d: %.2f %s\n",
               sensors[i].sensor_id,
               sensors[i].value,sensors[i].mem.sensor_name);
    }
    

    return 0;
}