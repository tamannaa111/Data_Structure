#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    int id;
    char name[100];
    char condition[100];
    char phone[20];
    struct Node* next;
};
typedef struct Node Patient;
 Patient *head=NULL;

struct node {
    int id;
    char name[100];
    char specialization[100];
    struct node* next;
};
typedef struct node Doctor;
 Doctor *Head=NULL;

Patient *createPatient(int id, const char* name, const char* condition,const char* phone) {
    Patient *newPatient;
    newPatient = (Patient*)malloc(sizeof(Patient));
    newPatient->id = id;
    strcpy(newPatient->name, name);
    strcpy(newPatient->condition, condition);
    strcpy(newPatient->phone, phone);
    newPatient->next = NULL;
    return newPatient;
}


Doctor *createDoctor(int id, const char* name, const char* specialization) {
    Doctor *newDoctor;
    newDoctor = (Doctor*)malloc(sizeof(Doctor));
    newDoctor->id = id;
    strcpy(newDoctor->name, name);
    strcpy(newDoctor->specialization, specialization);
    newDoctor->next = NULL;
    return newDoctor;
}
void addPatient(int id, const char* name, const char* condition,const char* phone) {
    Patient* newPatient = createPatient(id, name, condition,phone);
    if (head == NULL) {
        head = newPatient;
    } else {
        Patient* current =head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newPatient;
    }
    printf("Patient %s added.\n\n", name);
}

void addDoctor(int id, const char* name, const char* specialization) {
    Doctor* newDoctor = createDoctor(id, name, specialization);
    if (Head == NULL) {
        Head = newDoctor;
    } else {
        Doctor* current = Head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newDoctor;
    }
    printf("Doctor %s added.\n\n", name);
}

void deleteNode(int id, int isPatient) {
    if (isPatient) {
        Patient* current = head;
        Patient* previous = NULL;

        while (current != NULL) {
            if (current->id == id) {
                if (previous == NULL) {
                    head = current->next;
                } else {
                    previous->next = current->next;
                }
                free(current);
                printf("Patient with ID %d deleted.\n", id);
                return;
            }
            previous = current;
            current = current->next;
        }
        printf("\n\n");
    }
    else {
        Doctor* current = Head;
        Doctor* previous = NULL;

        while (current != NULL) {
            if (current->id == id) {
                if (previous == NULL) {
                    Head = current->next;
                } else {
                    previous->next = current->next;
                }
                free(current);
                printf("Doctor with ID %d deleted.\n", id);
                return;
            }
            previous = current;
            current = current->next;
        }
        printf("\n\n");
    }

    printf("Record with ID %d not found.\n\n", id);
}

void searchRecord(int id, int isPatient) {
    if (isPatient) {
        Patient* current = head;
        while (current != NULL) {
            if (current->id == id) {
                printf("Patient found:\n");
                printf("ID: %d, Name: %s, Condition: %s,Phone : %s\n", current->id, current->name, current->condition,current->phone);
                return;
                }
            current = current->next;
        }
        printf("\n\n");
    }
    else {
        Doctor* current = Head;
        while (current != NULL) {
            if (current->id == id) {
                printf("Doctor found:\n");
                printf("ID: %d, Name: %s, Specialization: %s\n", current->id, current->name, current->specialization);
                return;
            }
            current = current->next;
        }
        printf("\n\n");
    }

    printf("Record with ID %d not found.\n", id);
}

void updateRecord(int id, int isPatient, const char* newName, const char* newCondition,const char* newPhone) {
    if (isPatient) {
        Patient* current = head;
        while (current != NULL) {
            if (current->id == id) {
                strcpy(current->name, newName);
                strcpy(current->condition, newCondition);
                strcpy(current->phone, newPhone);
                printf("Patient's information updated.\n\n");
                return;
            }
            current = current->next;
        }
        printf("\n\n");
    }
    else {
        Doctor* current = Head;
        while (current != NULL) {
            if (current->id == id) {
                strcpy(current->name, newName);
                strcpy(current->specialization, newCondition);
                printf("Doctor's information updated.\n\n");
                return;
            }
            current = current->next;
        }
        printf("\n\n");
    }

    printf("Record with ID %d not found.\n\n", id);
}


void displayPatients() {
    Patient* current = head;
    printf("Patient Records:\n");
    while (current != NULL) {
        printf("ID: %d, Name: %s, Condition: %s, Phone: %s\n", current->id, current->name, current->condition, current->phone);
        current = current->next;
    }
    printf("\n");
}

void displayDoctors() {
    Doctor* current = Head;
    printf("Doctor Records:\n");
    while (current != NULL) {
        printf("ID: %d, Name: %s, Specialization: %s\n", current->id, current->name, current->specialization);
        current = current->next;
    }
    printf("\n");
}

int main() {
    int choice;
    printf("\t\t\t\t\t\t\t\t\t\t\t\n");
    printf("----------******* WELCOME TO OUR HOSPITAL *****----------\t ");
    printf("\n\n\n----------******----------------------*******------------\t ");
    printf("\n\n");
    printf("\n<------------------<<<<Hospital Management System>>>>---------------->\n\n\n");
    printf("........HOSPITAL RECORDS........\n\n\n");
    while (1) {
        printf("1. Insert Patient Information\n");
        printf("2. Insert Doctor Information\n");
        printf("3. Delete a Record\n");
        printf("4. Search for a Record\n");
        printf("5. Update Record\n");
        printf("6. Display Patient Records\n");
        printf("7. Display Doctor Records\n");
        printf("8. Exit\n");
        printf("\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int id;
                char name[100];
                char condition[100];
                char phone[20];
                printf("Enter Patient ID: ");
                scanf("%d", &id);
                printf("Enter Patient Name: ");
                scanf("%s", name);
                printf("Enter Patient Condition: ");
                scanf("%s", condition);
                printf("Enter Patient Phone: ");
                scanf("%s", phone);
                addPatient(id, name, condition, phone);
                break;
            }
            case 2: {
                int id;
                char name[100];
                char specialization[100];
                printf("Enter Doctor ID: ");
                scanf("%d", &id);
                printf("Enter Doctor Name: ");
                scanf("%s", name);
                printf("Enter Doctor Specialization: ");
                scanf("%s", specialization);
                addDoctor(id, name, specialization);
                break;
            }
            case 3: {
                int id;
                int isPatient;
                printf("Is it a patient (1) or doctor (0) record? ");
                scanf("%d", &isPatient);
                printf("Enter ID to delete: ");
                scanf("%d", &id);deleteNode(id, isPatient);
                break;
            }
            case 4: {
                int id;
                int isPatient;
                printf("Is it a patient (1) or doctor (0) record? ");
                scanf("%d", &isPatient);
                printf("Enter ID to search: ");
                scanf("%d", &id);
                searchRecord(id, isPatient);
                break;
            }
            case 5: {
                int id;
                int isPatient;
                char newName[100];
                char newCondition[100];
                char newPhone[20];
                printf("Is it a patient (1) or doctor (0) record? ");
                scanf("%d", &isPatient);
                if(isPatient==1){
                    printf("Enter ID to update: ");
                    scanf("%d", &id);
                    printf("Enter new name: ");
                    scanf("%s", newName);
                    printf("Enter new Condition: ");
                    scanf("%s", newCondition);
                    printf("Enter new Phone: ");
                    scanf("%s", newPhone);
                    updateRecord(id, isPatient, newName,newCondition,newPhone);
                    break;
                }
                else{
                    printf("Enter ID to update: ");
                    scanf("%d", &id);
                    printf("Enter new name: ");
                    scanf("%s", newName);
                    printf("Enter new Information: ");
                    scanf("%s", newCondition);
                    updateRecord(id, isPatient, newName,newCondition,newPhone);
                    break;
                }
                
            }
            case 6:
                displayPatients();
                break;
            case 7:
                displayDoctors();
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
                
                
