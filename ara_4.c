#include <stdio.h>

int main()
{
    int i;
    int marks_count[101];
    int ft_marks[40]={89,67,78,56,78,90,78,98,69,46,57,79,45,77,98,90,65,67,34,55,97,56,79,88,94,56,67,33,67,78,53,12,45,90,67,78,89,56,98,93};
    int st_marks[40]={89,67,78,56,78,90,78,98,69,46,57,79,45,77,98,90,65,67,34,55,97,56,79,88,94,56,67,33,67,78,53,12,45,90,67,78,89,56,98,93};
    int final_marks[40]={89,67,78,56,78,90,78,98,69,46,57,79,45,77,98,90,65,67,34,55,97,56,79,88,94,56,67,33,67,78,53,12,45,90,67,78,89,56,98,93};
    int total_marks[40];

    for (i = 0;i<40;i++){
        total_marks[i]=ft_marks[i] / 4.0+st_marks[i] / 4.0+ final_marks[i] / 2.0;
         printf("ROLL NO:%d\tTotal Marks: %d\n",i+1,total_marks[i]);
    }
    for (i = 0;i<101;i++){
        marks_count[i]=0;
    }
    for (i=0;i<40;i++){
       marks_count[total_marks[i]]++;
    }
    for (i=1;i<=100;i++){
        printf("Marks:%d  Count:%d\n",i,marks_count[i]);
    }

    return 0;
}