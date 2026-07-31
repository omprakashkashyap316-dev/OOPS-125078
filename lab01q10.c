#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student{
    int rollno;
    char name[30];
    int marks;
};
int main(){
    int n;
    printf("enter the number of students:");
    scanf("%d",&n);
    struct student *arr=(struct student *)malloc(n *sizeof(struct student));
    if(arr==NULL){
        printf("please enter valid integer number\n");
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("enter student name:");
        scanf(" %[^\n]",arr[i].name);
        printf("enter roll number:");
        scanf("%d",&arr[i].rollno);
        printf("enter marks:");
        scanf("%d",&arr[i].marks);
        printf("\n");
    }
    printf("\nstudent details");
    for(int i=0;i<n;i++){
        printf("\nstudent name:%s\nroll number:%d\nmarks obtained:%d\n",arr[i].name,arr[i].rollno,arr[i].marks);
    }
    free(arr);
    return 0;
}
