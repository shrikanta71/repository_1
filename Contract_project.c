#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Contact
{
    char name[10];
    char phoneNumber[15];
    char email[50];
    char address[50];
    struct Contact *next;
};

struct Contact *createContact()
{
    struct Contact *newContact = (struct Contact *)malloc(sizeof(struct Contact));
    if (newContact == NULL)
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    printf("Enter name: ");
    scanf("%s", newContact->name);
    printf("Enter phone number: ");
    scanf("%s", newContact->phoneNumber);
    printf("Enter email: ");
    scanf("%s", newContact->email);
    printf("Enter address: ");
    scanf("%s", newContact->address);
    newContact->next = NULL;
    return newContact;
}

void addContact(struct Contact **head)
{
    struct Contact *newContact = createContact();
    if (*head == NULL)
    {
        *head = newContact;
    }
    else
    {
        struct Contact *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newContact;
    }
    printf("Contact added successfully!\n\n");
}

void searchContact(struct Contact *head, const char *name)
{
    struct Contact *current = head;

    while (current != NULL)
    {
        if (strcmp(current->name, name) == 0)
        {
            printf("Name: %s\n", current->name);
            printf("Phone Number: %s\n", current->phoneNumber);
            printf("Email: %s\n", current->email);
            printf("Address: %s\n", current->address);
            break;
        }
        else
        {
            printf("Contact not found\n\n");
        }
        current = current->next;
    }
}

void deleteContact(struct Contact **head, const char *name)
{
    struct Contact *current = *head;
    struct Contact *prev = NULL;

    while (current != NULL)
    {
        if (strcmp(current->name, name) == 0)
        {
            if (prev == NULL)
            {
                *head = current->next;
            }
            else
            {
                prev->next = current->next;
            }
            free(current);
            printf("Contact deleted successfully!\n\n");
            return;
        }
        prev = current;
        current = current->next;
    }
    printf("Contact not found!\n\n");
}

void displayContacts(struct Contact *head)
{
    if (head == NULL)
    {
        printf("No contacts to display.\n\n");
        return;
    }

    struct Contact *current = head;
    while (current != NULL)
    {
        printf("\n");
        printf("Name: %s\n", current->name);
        printf("Phone Number: %s\n", current->phoneNumber);
        printf("Email: %s\n", current->email);
        printf("Address: %s\n", current->address);
        printf("\n");
        current = current->next;
    }
}

int main()
{
    struct Contact *contactList = NULL;
    int choice;
    char searchName[50];

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Add Contact\n");
        printf("2. Search Contact\n");
        printf("3. Delete Contact\n");
        printf("4. Display All Contacts\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addContact(&contactList);
            break;
        case 2:
            printf("Enter the name of the contact to search: ");
            scanf("%s", searchName);
            searchContact(contactList, searchName);
            break;
        case 3:
            printf("Enter the name of the contact to delete: ");
            scanf("%s", searchName);
            deleteContact(&contactList, searchName);
            break;
        case 4:
            displayContacts(contactList);
            break;
        default:
            printf("Invalid choice. Please try again.\n\n");
        }
    }
    return 0;
}
