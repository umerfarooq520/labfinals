#include <stdio.h>

void askDimension(char room, float *len, float *width) {
    float length, wid;
    if (room == 'K') {
        printf("Enter Length of Kitchen: ");
        scanf("%f", &length);
        printf("Enter Width of Kitchen: ");
        scanf("%f", &wid);
    }
    else if (room == 'B') {
        printf("Enter Length of Bathroom: ");
        scanf("%f", &length);
        printf("Enter Width of Bathroom: ");
        scanf("%f", &wid);
    }
    else if (room == 'L') {
        printf("Enter Length of Living Room: ");
        scanf("%f", &length);
        printf("Enter Width of Living Room: ");
        scanf("%f", &wid);
    }
    else if (room == 'M') {
        printf("Enter Length of Master BedRoom: ");
        scanf("%f", &length);
        printf("Enter Width of Master BedRoom: ");
        scanf("%f", &wid);
    }
    else if (room == 'S') {
        printf("Enter Length of Second Room: ");
        scanf("%f", &length);
        printf("Enter Width of Second Room: ");
        scanf("%f", &wid);
    }

    *len = length;
    *width = wid;
}

float calcArea(float len, float width) {
    return len * width;
}

float totalSquareFootage(float area_room[], int num_rooms) {
    float total = 0;
    for (int i = 0; i < num_rooms; i++) {
        total += area_room[i];
    }
    return total;
}

void findRooms(float kitchen, float bathroom, float livingroom, float masterbedroom, float secondroom) {
    float areas[5] = {kitchen, bathroom, livingroom, masterbedroom, secondroom};
    char *room_names[5] = {"Kitchen", "Bathroom", "Living Room", "Master Bedroom", "Second Room"};

    int largest_index = 0;
    int smallest_index=0;
    for (int i = 1; i < 5; i++) {
        if (areas[i] > areas[largest_index]) {
            largest_index = i;
        }
    }
    for (int i = 1; i < 5; i++) {
        if (areas[i] < areas[smallest_index]) {
            smallest_index = i;
        }
    }


    printf("The Largest Room in the house is %s with a total square footage of %.2f\n", room_names[largest_index], areas[largest_index]);
    printf("The Smallest Room in the house is %s with a total square footage of %.2f\n", room_names[smallest_index], areas[smallest_index]);
}

int main() {
    float len, width;
    float area;
    float area_room[5] = {0};

    char roomsname[5] = {'K', 'B', 'L', 'M', 'S'};
    for (int i = 0; i < 5; i++) {
        askDimension(roomsname[i], &len, &width);
        area = calcArea(len, width);
        area_room[i] = area;
    }

    float total_area = totalSquareFootage(area_room, 5);
    printf("Total Square Footage of House is: %.2f\n Square Feet", total_area);

    findRooms(area_room[0], area_room[1], area_room[2], area_room[3], area_room[4]);

    return 0;
}
