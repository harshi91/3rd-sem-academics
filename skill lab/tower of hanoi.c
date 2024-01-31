#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of disks:");
    scanf("%d",&n);
    char source='a',auxiliary ='b', destination ='c';
    towerofhanoi(n,source,auxiliary,destination);
    return 0;
}
void towerofhanoi(int n,char source,char auxillary,char destination){
    if(n==1)
    {
        printf("move disk 1 from %c to %c\n",source,destination);
        return;
    }
    towerofhanoi(n-1,source,destination,auxillary);
    printf("move disk %d from %c to %c\n",n, source, destination);
    towerofhanoi(n-1,auxillary,source,destination);
    }
    

