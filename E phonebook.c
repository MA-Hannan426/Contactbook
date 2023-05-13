#include <cs50.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>

int main(void) {
                                                              // Welcome Screen
    printf("Welcome to i contact's\n");
                                                              //putting delay of 2 seconds
         sleep (2);
                                                              //Asking the user for saving contact

    char contact = get_char("Do you want to save a contact?  (Y/N)\n");

                                                              // Using If-else conditional
    if(contact == 'y' || contact == 'Y') {

                     // minimum age required

                  int age = get_int ("Enter your Age to Proceed\n");
                    int min_age = 18;
             if (age >= min_age) {
                                                            //If the age is correct, you will be able to save contact

                   printf("You are of the right age to proceed.\n");






                   sleep (1);

                   printf("Enter your contacts details\n");
                                                                   // Putting delay of 2 seconds
                   sleep (1);

        string name = get_string("What's your Name? \n");
        string number = get_string("What's your phone number? \n");
        string email = get_string("Write down your Email Adress. \n");
        string address = get_string("Write down your Current Address. \n");

        printf("Age is %i\nName is %s\nPhone Number is %s\nEmail Adress is %s\nLocal Address is %s\n", age, name, number, email, address);

        sleep (2);                                                // Putting delay of 2 seconds

        printf("Contact successfully saved !\n");

 }

               else {
                   printf("You are not of the right age to proceed.\n");
                    }

}
                                                                    //Else statement for saving the contact
    else {
                                                                    //Adding Ending Comments for the program
        sleep (1);
        printf("Exiting i contact's!\n");

                          }

    return 0;
}