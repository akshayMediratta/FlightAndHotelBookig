/************************medirattaAkshayA1.c**************
Student Name: Akshay Mediratta   Email Id: amedirat@uoguelph.ca
Due Date: 07.10.2020   Course Name: CIS 1300
I have exclusive control over this submission via my password.
By including this statement in this header comment, I certify that:
1) I have read and understood the University policy on academic
integrity;
2) I have completed the Computing with Integrity Tutorial on Moodle; and
3) I have achieved at least 80% in the Computing with Integrity Self
Test.
I assert that this work is my own. I have appropriately acknowledged any
and all material that I have used, whether directly quoted or
paraphrased. Furthermore, I certify that this assignment was prepared by
me specifically for this course.
********************************************************/

/*********************************************************
Compiling the program
The program should be compiled using the following flags: -std=c99 -Wall
compiling:
gcc medirattaAkshayA1.c -std=c99 -Wall

Running the Program
Running: ./a.out

*********************************************************/

#include<stdio.h>
int main()
{
   int optionNo,i;
   float total3;
   total3=200000;
   printf("This will run for 3 transactions\n\n");
   for(i=1;i<4;i++)  //additional functionality loop
     {  int input,hotel,input3,hotelCost,days,ride,rideCost,sod,dob;
        hotelCost=0;
        days=0;
        rideCost=0;
	int hour12, minute12, hour24, minute24;
	char time;
	float flight,total;
	printf("Would you like to enter the time in 12-hour format (enter 1) or 24-hour format (enter 2)? ");
	scanf("%d", &input);
	if (input==1)  //Scenario for 12-Hour Format
	  {  
	     printf("\nEnter time in 12 hour format\n\n");
	     printf("Enter a value between 0 and 12 for hour: ");
	     scanf("%d", &hour12);
	     printf("\nEnter a value between 0 and 60 for minutes: ");
	     scanf("%d", &minute12);
	     printf("\nEnter a for am or p for pm: ");
	     scanf(" %c", &time);
	     printf("\n---------------------------");
	     if (hour12<10 && minute12<10)
	       {  
		  printf("\nYou entered 0%d:0%d ", hour12, minute12);
		  if (time=='a')
		    {
		       printf("am");
		       printf("\nIn 24 hour format - you entered 0%d:0%d", hour12, minute12);
		    }
                    
                  else if (time=='p')
	            {
		       printf("pm");
		       printf("\nIn 24 hour format - you entered %d:0%d", hour12+12, minute12);
		    }
	       }

	     if (hour12<10 && minute12>=10)
	       {
		  printf("\nYou entered 0%d:%d ", hour12, minute12);
		  if (time=='a')
		    {
		       printf("am");
		       printf("\nIn 24 hour format - you entered 0%d:%d", hour12, minute12);
		    }
		  else if (time=='p')
		    {
		       printf("pm");
		       printf("\nIn 24 hour format - you entered %d:%d", hour12+12, minute12);
		    }
	       }

	     if (hour12>=10 && minute12<10)
	       {
		  printf("\nYou entered %d:0%d ", hour12, minute12);
		  if (time=='a')
		    {
		       printf("am");
		       if (hour12<=11)
			 {
			    printf("\nIn 24 hour format - you entered %d:0%d", hour12, minute12);
			 }
		       if (hour12==12)
			 {
			    printf("\nIn 24 hour format - you entered 00:0%d", minute12);
		       	 }
		    }
		  else if (time=='p')
		    {
		       printf("pm");
		       if (hour12<=11)
		         {
			    printf("\nIn 24 hour format - you entered %d:0%d", hour12+12, minute12);
		         }
		       if (hour12==12)
		         {
			    printf("\nIn 24 hour format - you entered %d:0%d", hour12, minute12);
		         }
		    }
	       }
	     if (hour12>=10 && minute12>=10)
	       {
		  printf("\nYou entered %d:%d ", hour12, minute12);
		  if (time=='a')
		    {
		       printf("am");
		       if (hour12<=11)
			 {
			    printf("\nIn 24 hour format - you entered %d:%d", hour12, minute12);
			 }
		       if (hour12==12)
			 {
			    printf("\nIn 24 hour format - you entered 00:%d", minute12);
			 }
		    }
		  else if (time=='p')
		    {
		       printf("pm");
		       if (hour12<=11)
			 {
			    printf("\nIn 24 hour format - you entered %d:%d", hour12+12, minute12);
			 }
		       if (hour12==12)
			 {
			    printf("\nIn 24 hour format - you entered %d:%d", hour12, minute12);
			 }
		    }
	       }
	  }
	else if(input==2)  //Scenario for 24-Hour Format
	  {
	     printf("\nEnter time in 24 hour format\n\n");
	     printf("Enter a value between 0 and 24 for hour: ");
	     scanf("%d", &hour24);
	     printf("\nEnter a value between 0 and 60 for minutes: ");
	     scanf("%d", &minute24);
             printf("\n---------------------------");
	     if (hour24<10 && minute24<10)
	       {
		  printf("\nYou entered 0%d:0%d ", hour24, minute24);
		  printf("\nIn 12 hour format - you entered 0%d:0%d am", hour24, minute24);
	       }
	     if (hour24>=10 && minute24<10)
	       {
		  printf("\nYou entered %d:0%d ", hour24, minute24);
		  if (hour24<12)
		    {
		       printf("\nIn 12 hour format - you entered %d:0%d am",hour24, minute24 );
		    }
		  if (hour24==12)
		    {
		       printf("\nIn 12 hour format - you entered %d:0%d pm",hour24, minute24 );
		    }
		  if (hour24>12 && hour24-12<10)
		    {
		       printf("\nIn 12 hour format - you entered 0%d:0%d pm",hour24-12, minute24 );
		    }
		  if (hour24>12 && hour24-12>=10 && hour24!=24)
		    {
		       printf("\nIn 12 hour format - you entered %d:0%d pm",hour24-12, minute24 );
		    }
		  if (hour24==24)
		    {
		       printf("\nIn 12 hour format - you entered 00:0%d am", minute24 );
		    }
	       }
	     if (hour24<10 && minute24>=10)
	       {
		  printf("\nYou entered 0%d:%d ", hour24, minute24);
		  printf("\nIn 12 hour format - you entered 0%d:%d am",hour24, minute24);
	       }
	     if (hour24>=10 && minute24>=10)
	       {
		  printf("\nYou entered %d:%d ", hour24, minute24);
		  if (hour24<12)
		    {
		       printf("\nIn 12 hour format - you entered %d:%d am",hour24, minute24 );
		    }
		  if (hour24==12)
		    {
		       printf("\nIn 12 hour format - you entered %d:%d pm",hour24, minute24 );
		    }
		  if (hour24>12 && hour24-12<10)
		    {
		       printf("\nIn 12 hour format - you entered 0%d:%d pm",hour24-12, minute24 );
		    }
		  if (hour24>12 && hour24-12>=10 && hour24!=24)
		    {
		       printf("\nIn 12 hour format - you entered %d:%d pm",hour24-12, minute24 );
		    }
		  if (hour24==24)
		    {
		       printf("\nIn 12 hour format - you entered 00:%d am", minute24 );
		    }

	       }
	    minute12=minute24;  //Converting minutes and hours into 12-Hour Format
	    if (hour24 <12)
	      {
		 hour12=hour24;
		 time='a';
	      }
	    else if (hour24 >12)
	      {
		 hour12 = hour24 % 12;
		 time='p';
	      }
            else if (hour24==12)
              {
                 hour12=hour24;
                 time='p';
              }
	  }
	printf("\n---------------------------") ;
	//Displaying the closest flights and storing their respective fares for A.M. time
	if (time=='a')
	  {
	    if (hour12<7)
	      {
		 printf("\nClosest departure time is 7:15 a.m., arriving at 8:25 a.m. ");
		 flight=231;
	      }
	    else if (hour12==7 && minute12<45)
	      {
		 printf("\nClosest departure time is 7:15 a.m., arriving at 8:25 a.m. ");
		 flight=231;
	      }
	    else if (hour12>=7 && hour12<11)
	      {
		 if (minute12 -15 >= 30)
		   {
		      printf("\nClosest departure time is %d:15 a.m., arriving at %d:25 a.m. ", hour12+1 ,hour12 +2);
		      if (hour12==7 || hour12==8)
			{
			   flight=226;
			}
		      if (hour12==9 || hour12==10)
			{
			   flight=283;
			}
		   }
		 if (minute12 -15 < 30)
		   {
		      printf("\nClosest departure time is %d:15 a.m., arriving at %d:25 a.m. ", hour12 ,hour12 +1);
		      if (hour12==8 || hour12==9)
			{
			   flight=226;
			}
		      if (hour12==10)
			{
			   flight=283;
			}
		   }
	      }
	    else if (hour12==11 )
	      {
		 printf("\nClosest departure time is %d:15 a.m., arriving at %d:25 a.m.", hour12 ,hour12 +1);
		 flight=283;
	      }
            else if (hour12==12)
              { 
                 printf("\nClosest departure time is 7:15 a.m., arriving at 8:25 a.m.");
                 flight=231;
              }

	  }
	//Displaying the closest flights and storing their respective fares for P.M. time
	else if (time=='p')
	  {
	    if (hour12==12)
	      {
		 printf("\nClosest departure time is %d:15 a.m., arriving at %d:25 p.m.", hour12-1 ,hour12);
		 flight=283;
	      }
	    else if (hour12==1 && minute12 < 15)
	      {
		 printf("\nClosest departure time is 11:15 a.m., arriving at 12:25 p.m.");
		 flight=283;
	      }
	    else if (hour12==1)
	      {
		 printf("\nClosest departure time is %d:15 p.m., arriving at %d:25 p.m.", hour12+2 ,hour12 +3);
		 flight=226;
	      }
	    else if (hour12==2)
	      {
		 printf("\nClosest departure time is %d:15 p.m., arriving at %d:25 p.m.", hour12+1 ,hour12 +2);
		 flight=226;
	      }
	    else if (hour12==3 && minute12 <45)
	      {
		 printf("\nClosest departure time is %d:15 p.m., arriving at %d:25 p.m.", hour12 ,hour12+1 );
		 flight=226;
	      }
	    else if (hour12>=3 && hour12<5)
	      {
		 if (minute12 -15 >= 30)
		   {
		      printf("\nClosest departure time is %d:15 p.m., arriving at %d:25 p.m.", hour12+1 ,hour12 +2);
		      if (hour12==3)
			{
			   flight=226;
			}
		      if (hour12==4)
			{
			   flight=401;
			}
		   }
		 if (minute12 -15 < 30)
		   {
		      printf("\nClosest departure time is %d:15 p.m., arriving at %d:25 p.m.", hour12 ,hour12 +1);
		      if (hour12==4)
			{
			   flight=226;
			}
		   }
	      }
	    else if (hour12>=5 && hour12<12 )
	      {
		 printf("\nClosest departure time is 5:15 p.m., arriving at 6:25 p.m.");
		 flight=401;
	      }
	  }
	printf("\n\nWould you like a hotel in Montreal- enter 0 for no; 1 for yes? ");
	scanf("%d",&hotel);
	//Hotel Booking functionality
	if (hotel==1)
	  {
	     printf("\nThere are 3 hotels:\n");
	     printf("1. Marriot: $248 per night\n");
	     printf("2. Sheraton: $90 per night\n");
	     printf("3. Double Tree: $128 per night\n");
	     printf("\nYour choice?:");
	     scanf("%d",&input3);  //Input for the Hotel
	     if (input3==1)
	       {
		  hotelCost=248;
	       }
	     else if(input3==2)
	       {
		  hotelCost=90;
	       }
	     else if(input3==3)
	       {
		  hotelCost=128;
	       }
	     printf("How many days in Montreal?") ;
	     scanf("%d",&days) ;  //Input for No. of Days
	     hotelCost=hotelCost*days;
	     printf("\nWould you like a ride from airport to hotel? - enter 0 for no; 1 for yes ");
	     scanf("%d",&ride);  //Input for Ride from Airport to Hotel
	     if (ride==1)
	       {
		  if (input3==1)
		    {
		       rideCost = 0;
		    }
		  else if (input3==2)
		    {
		       rideCost=25;
		    }
		  else if (input3==3)
		    {
		       rideCost=20;
		    }
	       }

	  }
	printf("\nNow enter your day of birth to qualify for discount2: ");
	scanf("%d",&dob);  //Input for DOB
	printf("Your total cost comes to:\n\n");
	printf("Cost of closest departure flight: $ %.2f\n",flight) ;  //Cost of Flight
	printf("Cost of Hotel for %d days: $ %d.00\n",days,hotelCost);  //Cost of Hotel for the selected No. of Days
	printf("Cost of Ride: $ %d.00\n",rideCost);  //Cost of Ride
	total = flight+hotelCost+rideCost;
	printf("\n\nTotal cost before tax: $ %.2f\n",total);  //Total cost before Discounts and Tax
	if (dob<10)
	  {
	     sod=dob;
	  }
	else
	  {
	     sod=dob%10;
	     sod=sod + (dob/10);
	  }
	//Checking for Discount1
	if ((int)(total)%11==0)
	  {
	    total= total* 0.95 ;
	    printf("\nYou get a 5%% discount because the total cost was a multiple of 11 :)\n") ;
	  }
	else
	  {
	     printf("\nSorry - you missed out on 5%% discount because the total cost was not a multiple of 11\n");
	  }
	//Checking for Discount2
	if ((int)(total)%sod==0)
	  {
	     total= total* 0.95 ;
	     printf("You get an additional 5%% discount because the total cost after discount1 was a multiple of the sum of digits in your day of birth :)\n") ;
	  }
	else
	  {
	     printf("Sorry - you missed out on the additional 5%% discount because the total cost after discount1 was not a multiple of the sum of digits in your day of birth\n");
	  }
	printf("\nTotal cost after discounts 1 and 2: $ %.2f\n",total);  //Total cost after discounts
	printf("\nFinally, your total cost after taxes: $ %.2f\n",total*1.13);  //Total cost after Taxes
	//Storing the least value to be Displayed
	if ((int)total3>(int)(total*1.13))
	  {
	     total3=(total*1.13);
	     optionNo=i;
	  }
     printf("-------------------------------------\n\n");
     }

   //Printing the final output
   printf("Option number %d is the best option for you with a minimum cost $%.2f",optionNo,total3) ;
   return 0;
}
