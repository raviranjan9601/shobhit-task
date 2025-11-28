#include <stdio.h>
    int main(){
        
        float mark1, mark2, mark3;
        float sum, percentage, average;
        
        printf("enter the mark of math subject:\n");
        scanf("%f",&mark1);
        
        printf("enter the mark of hindi subject:\n");
        scanf("%f",&mark2);
        
        printf("enter the mark of sst subject:\n");
        scanf("%f",&mark3);
        
        sum= mark1 + mark2 + mark3;
        average= sum / 3;
        percentage= (sum / 300)*100;
        
        printf("Total of 3 subjects:- %.2f\n", sum);
        printf("Percentage of 3 subjects: %.2f%%\n", percentage);
        printf("Average of 3 Subject:- %.2f\n", average);
        
        return 0;
    }