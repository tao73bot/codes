#include <stdio.h>

int main()
{
    double ft_marks[40]={89,67,78,56,78,90,78,98,69,46,57,79,45,77,98,90,65,67,34,55,97,56,79,88,94,56,67,33,67,78,53,12,45,90,67,78,89,56,98,93};
    double st_marks[40]={89,67,78,56,78,90,78,98,69,46,57,79,45,77,98,90,65,67,34,55,97,56,79,88,94,56,67,33,67,78,53,12,45,90,67,78,89,56,98,93};
    double final_marks[40]={89,67,78,56,78,90,78,98,69,46,57,79,45,77,98,90,65,67,34,55,97,56,79,88,94,56,67,33,67,78,53,12,45,90,67,78,89,56,98,93};
    int i,marks,count;
    double total_marks[40];

    for (i = 0;i<40;i++){
        total_marks[i]=ft_marks[i] / 4.0+st_marks[i] / 4.0+ final_marks[i] / 2.0;
         printf("ROLL NO:%d\tTotal Marks: %0.2lf\n",i+1,total_marks[i]);
    }
    for (marks = 1;marks <= 100; marks++){
        count=0;
        for (i=0;i<40;i++){
            if (total_marks[i]==marks){
                count++;
            }
        }
        printf("Marks:%d  Count:%d\n",marks,count);
    }
    
  
    return 0;
}