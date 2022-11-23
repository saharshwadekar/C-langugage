#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    int stu_id;
    char name[15];
    float avg;
};
void func(struct student report);
int main()
{   
    struct student report;
    report.stu_id=3;
    strcpy(report.name,"harry");
    report.avg=74.6;

    func(report);

    return 0;
}
void func(struct student report){
    printf("Student id is; %02d\n",report.stu_id);
    printf("Student name is; %s\n",report.name);
    printf("Student average is; %.2f\n",report.avg);
}