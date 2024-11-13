#include<stdio.h>
#include<string.h>
#define MAX_CONTACTS 100
struct Contact
{
char name[50];
char phone[15];
char email[50];
};
void displayContact(struct Contact contact)
{
printf("name:%s\n",contact.name);
printf("phone:%s\n",contact.phone);
printf("email:%s\n",contact.email);
}
int main()
{
struct Contact contacts[MAX_CONTACTS];
int numContacts=0;
int choice;
while(1)
{
printf("Contact management system\n");
printf("1.Add Contact\n");
printf("2.View Contacts\n");
printf("3.Exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1: 
if(numContacts<MAX_CONTACTS)
{
struct Contact newContact;
printf("enter name:");
scanf(" %[^\n]",newContact.name);
printf("enter phone:");
scanf(" %[^\n]",newContact.phone);
printf("enter email:");
scanf(" %[^\n]",newContact.email);
contacts[numContacts]=newContact;
numContacts++;
printf("contact added successfully.\n\n");
}

else
{
printf("contact limit reached.Cannot add more contacts.\n");
}
break;
case 2:
if(numContacts==0)
{
printf("no contacts available.\n");
}
else
{
printf("Contacts list:\n");
for(int i=0;i<numContacts;i++)
{
printf("contact%d:\n",i+1);
displayContact(contacts[i]);
printf("\n");
}
}
break;
case 3:
printf("exiting the contact management system.\n");
return 0;
break;
default:
printf("invalid choice.please try again.\n");
return 0;}
}
}


















































