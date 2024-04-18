#include<stdio.h>
#include<string.h>
int average_grade(int G[],int size);

int main()
{
    struct Student
    {
        char firstname[30],lastname[30],hall[20],fullname[60],Grade;
        int grades[5],number,Average;
    };
    
    struct Student student1;
    char nameA[30],nameB[30],residence[20],GRD;
    int GR[5];
    int AVG;
    
    printf("Enter the first name:");
    fgets(nameA,30,stdin);
    strcpy(student1.firstname,nameA);

    printf("Enter the second name:");
    fgets(nameB,30,stdin);
    strcpy(student1.lastname,nameB);
    
    printf("Enter the Hall of Residence:");
    scanf("%s",residence);
    strcpy(student1.hall,residence);
    
    printf("Enter the 5 grades:\n");
    for(int j=0;j<5;j++)
    {
        scanf("%d",&GR[j]);
    }
    
    printf("\nFull Name:\t%s",strcat(student1.firstname, student1.lastname));
    printf("\nHall of Residence:\t%s",student1.hall);
    printf("\nGrades:");
    for(int k=0;k<5;k++)
    {
        printf("\t%d,",GR[k]);
    }
    
    AVG = average_grade(GR,5);
    printf("\nAverage Grade: %d", AVG);
    printf("\nLetter Grade:\t");
    if(AVG>=80)
    {
        printf("A");
    }    
    else if(AVG>=75 && AVG<80)
    {
        printf("B");
    }
    else if(AVG>=65 && AVG<75)
    {
        printf("C");
    }
    else if (AVG>=55 && AVG<65)
    {
        printf("D");
    }
    else if(AVG>=50 && AVG<55)
    {
        printf("E");
    }
    else 
    {
        printf("F");
    }
    
    return 0;
}
    
int average_grade(int GR[],int size)
{
    int sum=0,avr;
    for(int i=0;i<size;i++)
    {
        
        sum=sum+GR[i];
        
    }
    avr = sum/(size);
    return avr;

}