/*Ques. Ten students (s1,s2,s3,s4,s5,s6,s7,s8,s9,s10) are going to attend an event. 
There are lots of gift shops, they all are going to the gift shops and 
randomly picking the gifts. After picking the gifts they are randomly 
arriving in the billing counter. The accountant gives the preference to 
that student who has maximum number of gifts. 
Create a C program to define order of billed students?*/
 
 // case : 1) it gives higher priority to the students who have more no of gifts .
 //case : 2) if they have same no of gifts the the student(process)having less id is given priority.
#include <stdio.h> 

	int i,t,j,n;           //variable declaration
	int B_T[10],p_no[10],bill[10];; //B_T=brust time ,p_no processno
	float cost;
	
 void billfn()              //bill generation
    {		  
      printf( "STUDENT_NO\t\tTOTAL GIFTS PURCHASED\t\tBILL (In Rupees)\n\n"); 

	    for (i = 0; i < n; i++) 
		   { 
	           	printf("STUDENT NO. = %d \t\t" ,p_no[i]);
		        printf("%d \t\t\t",B_T[i]);
		        bill[i]= cost * B_T[i];           //calculating cost 
	         	printf("%d \t\t\t",bill[i]); 
	            printf("\n");
	       }
	       printf("\n\n");
	    printf( "***************According to the max gifts purchased by each students order of decreasing as follows***********\n");   
	    for (i = 0; i < n; i++) 
	        {
	            printf("%d \t",B_T[i]);	
		    }
		    printf("\n\n");
		printf( "**********Order of billing as per the decreasing order of buying the no of gifts as follows***********\n");
		for (i = 0; i < n; i++) 
		    {
		        printf("%d \t",bill[i]); 	
		    }
			
		  
    }

void get() //list of gifts taken by students  (entered value by user)
   {

     printf("\n\n");
     printf("******************ENTERED DATA*****************\n\n");
	 printf( "\nSTUDENT NO.\t\tNO.OF GIFTS PURCHASED \n"); 

	    for (i = 0; i < n; i++)  
	      { 
		      printf("STUDENT NO. = %d \t\t" ,p_no[i]);   //process no
		      printf("%d \t\t\t",B_T[i]);                  //brust time
	          printf("\n\n");
	      } 
	}

void sorting()    //arrangement of students according to no of gifts chosen 
   { 
   
	printf("**********ORDER OF BILLED STUDENTS************* \n\n");
	    for(i=0;i<n;i++)
          {
    	      for(j=i+1;j<n;++j)
			     {
		            if(B_T[i]<B_T[j])                               //student with max no of gifts is given priority
					{
		                t=B_T[i];                        //swapping the values 
                   	    B_T[i]=B_T[j];
                        B_T[j]=t;
                        t=p_no[i];           //t is temporary variable
                        p_no[i]=p_no[j];                    //swapping the process no's
                        p_no[j]=t;
                    }
                 }
}          
}




int main() 
{ 

	 printf("ENTER THE NO OF STUDENTS WHO PURCHASE GIFT :- ");  // process number initialization
     scanf("%d",&n);
     printf("ENTER THE COST OF ONE GIFT :- ");
     scanf("%f",&cost);
     printf("***************ENTER THE NUMBER OF GIFTS CORRESPONDING TO EACH STUDENT *************");
        for(i=0;i<n;i++)
          {
              printf("\nSTUDENT_NO[%d] \n",i+1);
              printf("ENTER THE NUMBER OF GIFTS PURCHASED :");//user input data
              scanf("%d",&B_T[i]);
              p_no[i]=i+1;           //its process number 
          }

  
        get();
        sorting();
        billfn();
         
}
