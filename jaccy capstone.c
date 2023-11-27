#include <stdio.h>
#include <string.h>

//main function
int main() {
    char user[20];
    char firstname[20];
    char lastname[20];
    char name[20];
    int phonenumber;
    int choice;
    int number;
    int num;
    int password;
    int opp;
    int busnumber;
    int seatnumber;

    printf("View your category\n");
    printf("1: Employer\n");
    printf("2: Customer\n");
    printf("Enter your category: ");
    scanf("%d", &choice);

    printf("\t\t=================================================\n");
    printf("\t\t|                                               |\n");
    printf("\t\t|        -----------------------------          |\n");
    printf("\t\t|          BUS TICKET RESERVATION SYSTEM           |\n");
    printf("\t\t|        -----------------------------          |\n");
    printf("\t\t|                                               |\n");
    printf("\t\t|                                               |\n");
    printf("\t\t|                                               |\n");
    printf("\t\t|              BROUGHT TO YOU BY                |\n");
    printf("\t\t|            //   Jacinta               |\n");
    printf("\t\t|                                               |\n");
    printf("\t\t=================================================\n\n\n");

    switch (choice) {
        case 1:
            printf("\n=======================  LOGIN FORM  =======================\n");
            printf("\nEnter your username:");
            scanf("%s", user);
            printf("\nPASSWORD:: ");
            scanf("%d", &number);
            
        start:
            if (number >= 10 && number <= 15) {
                printf("\n\n\n====================================== WELCOME TO BUS RESERVATION SYSTEM ======================================\n\n\n");
                printf("\t\t\t\t\t[1]=> View Bus List\n");
                printf("\n");
                printf("\t\t\t\t\t[2]=> Cancel Booking\n");
                printf("\n");
                printf("\t\t\t\t\t[3]=> Bus Status Board\n");
                printf("\n");
                printf("\t\t\t\t\t[4]=> Exit\n\n");
                printf("===============================================================================================================\n\n");
                printf("\t\t\tEnter Your Choice:: ");
                scanf("%d", &num);

				//view bus list
                switch (num) {
                    case 1:
                        printf("-----------------------------------------------------------------------------------------------------------");
                        printf("\n BUS.No\tName\t\t\tDestinations\t\tCharges\t\tTime\t\t\tNo of Seats\n");
                        printf("------------------------------------------------------------------------------------------------------------");
                        printf("\n1:101\tRed Spirits Express\t Nairobi to Mombasa\tksh.2000\t\t9am\t\t50");
                        printf("\n2:102\tRed Spirits Express\t Nairobi To Kisumu\t ksh.3000\t\t12pm\t\t50");
                        printf("\n3:103\tBlue City Express\t Mombasa To Embu\t   ksh.2500\t\t 8am\t\t50");
                        printf("\n4:104\tKenya City Express\t Nakuru  To Isiolo\t ksh.1500\t\t11am\t\t50");
                        printf("\n5:105\tCopper City Express\t Kericho To Nairobi\tksh.1000\t\t7am\t\t50");
                        printf("\n6:106\tKiambu City Express\t Meru    To Kiambu\t ksh.1000\t\t 9.30am\t\t50");
                        printf("\n7:107\tAudi Trade Express\t Muranga To Nairobi\tksh.500\t\t1pm\t\t50");
                        goto start;  
                        break;
                    //cancle booking
                    case 2:
                        printf("\t\tEnter the first  name of the customer to cancel the ticket:");
                        scanf("%s", firstname);
                        printf("\t\tEnter the last  name of the customer to cancel the ticket:");
                        scanf("%s", lastname);
                        printf("\t\tEnter the seat number:");
                        scanf("%d", &seatnumber);

                        if (seatnumber >= 1 && seatnumber <= 50) {
                            printf("\n\n\t\t The seat number for %s %s, has been canceled successfully", firstname, lastname, seatnumber);
                        } else {
                            printf("\nInvalid seat number! Seats range from 1 to 50.");
                        }
                        break;
                    //view bus status
                    case 3:
                        printf("red spirits express 101 good condition\n");
                        printf("red spirits express 102 good condition\n");
                        printf("blue city express 103 good condition\n");
                        printf("copper city express 104 good condition\n");
                        printf("kiambu city express 105 good condition\n");
                        printf("Audi trade express 106 good condition\n");
                        break;

                    case 4:
                        printf("Exiting the program\n");
                        break;

                    default:
                        printf("Invalid choice. Please enter a valid option.\n");
                        break;
                }
            } else {
                printf("Invalid password! Access denied.\n");
            }
            break;
			//customer booking
        case 2:
            printf("\n\n\t\tEnter your first name:");
            scanf("%s", firstname);
            printf("\n\n\t\tEnter your last name:");
            scanf("%s", lastname);
            printf("\n\n\t\tEnter your phone number");
            scanf("%d", &phonenumber);
            printf("\n\n\t\tEnter the common password (1234): ");
            scanf("%d", &password);
            
        start1:
            if (password == 1234) {
                printf("\n===========================================================================\n");
                printf("\t\t\t\t  BUS RESERVATION SYSTEM\n");
                printf("\n===========================================================================\n");
                printf("\t\t\t1>> View All Available buses\n");
                printf("\t\t\t2>> Book a ticket\n");
                printf("\t\t\t3>> Cancel a ticket\n");
                printf("\t\t\t4>> Exit\n");
                printf("\t\t\t\tEnter your choice: ");
                scanf("%d", &opp);

                switch (opp) {
                    case 1:
                        printf("-------------------------------------------------------------------------------------------------------");
                        printf("\n BUS.No\tName\t\t\tDestinations\t\tCharges\t\tTime\t\t\tNo of Seats\n");
                        printf("-------------------------------------------------------------------------------------------------------");
                        printf("\n1:101\tRed Spirits Express\t Nairobi to Mombasa\tksh.2000\t\t9am\t\t50");
                        printf("\n2:102\tRed Spirits Express\t Nairobi To Kisumu\t ksh.3000\t\t12pm\t\t50");
                        printf("\n3:103\tBlue City Express\t Mombasa To Embu\t   ksh.2500\t\t 8am\t\t50");
                        printf("\n4:104\tKenya City Express\t Nakuru  To Isiolo\t ksh.1500\t\t11am\t\t50");
                        printf("\n5:105\tCopper City Express\t Kericho To Nairobi\tksh.1000\t\t7am\t\t50");
                        printf("\n6:106\tKiambu City Express\t Meru    To Kiambu\t ksh.1000\t\t 9.30am\t\t50");
                        printf("\n7:107\tAudi Trade Express\t Muranga To Nairobi\tksh.500\t\t1pm\t\t50");
                        printf("\t\t\t\t\t\n");
                        goto start1;
                        break;

                    case 2:
                        printf("\n\n\t\tEnter bus number: ");
                        scanf("%d", &busnumber);
                        printf("\n\n\t\tEnter the seat number: ");
                        scanf("%d", &seatnumber);

                        if (seatnumber >= 1 && seatnumber <= 50) {
                            printf("\n\n\t\t%s %s, your seat number %d has been booked successfully", firstname, lastname, seatnumber);
                        } else {
                            printf("\nInvalid seat number! Seats range from 1 to 50.");
                        }
                        break;

                    case 3:
                        printf("\n\n\t\tEnter your first name:");
                        scanf("%s", firstname);
                        printf("Enter your phone number: ");
                        scanf("%d", &phonenumber);
                        printf("\n\nTicket cancellation for %s with phone number %d has been canceled successfully\n", firstname, phonenumber);
                        break;

                    case 4:
                        printf("Exiting the program\n");
                        break;

                    default: 
                        printf("Invalid choice. Please enter a valid option.\n");
                        break;
                }
            } else {
                printf("Invalid password! Access denied.\n");
            }
            break;

        default:
            printf("Invalid category! Please choose either 1 (Employer) or 2 (Customer).\n");
            break;
    }

    return 0;
}
