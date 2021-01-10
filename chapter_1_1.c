#include <stdio.h>
#include <stdlib.h>

int
main
        (int argc, char **argv){

    int array[] = {15, 45, 25, 23, 56, 45, 78, 98, 78, 125};
    int size_array = sizeof(array) / sizeof(int);
    printf("%d\n", size_array);
    void selection_sort(int[], int, int);
    selection_sort(array, 0, size_array - 1);

//selection sort **working
    /* for(int i = 0; i < size_array; i ++)
         for(int j = i + 1; j < size_array; j ++){
             if(array[i] >= array[j]){
                 int temp = array[i];
                 array[i] = array[j];
                 array[j] = temp;
             }
         }
 */
    //print sorted array in decreasing
    for(int i =0; i < size_array; i ++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    return 0;
}
//get the smallest
int getSmallest(int list[], int lo, int hi){
    int small = lo;
    for(int h = lo + 1; h <= hi; h ++)
        if(list[small] > list[h]) small = h;
    return small;
}

//swap
void swap(int list[], int a, int b){
    int temp = list[a];
    list[a] = list[b];
    list[b] = temp;
}
//selection sort
void selection_sort(int list[], int lo, int hi){
    for(int h = lo; h < hi; h ++){
        int s = getSmallest(list, h, hi);
        swap(list, h, s);
    }
}
