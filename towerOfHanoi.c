#include<stdio.h>
void toh(int disks,char source[],char destination[],char auxillary[]){
    if(disks==1){
        printf("Move disk 1 from %s to %s ",source,destination);
    }
    else{
        toh(disks-1,source,auxillary,destination);
        printf("Move disk %d from %s to %s", disks, source,destination);
        toh(disks-1,auxillary,destination,source);
    }
}
int main(){
    toh(3,"rodA","rodC","rodB");
    return 0;
}