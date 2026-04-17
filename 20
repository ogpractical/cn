Here is your complete answer sheet labeled properly (Slip 20) with questions on top and no viva section 👇


---

Slip 20


---

Q1) A) Write the answer of the following questions (ANY 5)


---

a) What is the primary purpose of a banner MOTD?

Answer:

Displays a Message of the Day when a user logs in

Provides warnings or important information

Used for security and legal notices



---

b) How many hexadecimal digits are needed for a 64-bit WEP key? Give any 5 examples

Answer:

A 64-bit WEP key requires 10 hexadecimal digits


Examples:

A1B2C3D4E5

123456789A

ABCDEF1234

1A2B3C4D5E

0F1E2D3C4B



---

c) List types of Cyber Threats. Describe any two.

Answer:

Types:

Malware

Phishing

Ransomware

DoS Attack

Man-in-the-Middle


Description (any two):

Phishing: Fake emails or websites used to steal sensitive information

Ransomware: Malware that locks files and demands payment



---

d) Differentiate between Static and Dynamic routing.

Answer:

Feature	Static Routing	Dynamic Routing

Configuration	Manual	Automatic
Updates	No updates	Updates automatically
Complexity	Simple	Complex
Use	Small networks	Large networks



---

f) What is the function of a switch in a computer network?

Answer:

Connects multiple devices in a LAN

Uses MAC address to forward data

Reduces collisions

Improves network efficiency



---

g) Describe any two network topologies.

Answer:

Star Topology:
All devices connect to a central hub/switch. Easy to manage but hub failure affects all nodes.

Bus Topology:
All devices share a single communication line. Simple but failure of main cable affects the network.



---

OR

Q1) A) Write a transmitted message for Data as 101010111 and divisor as 1011.

Answer:

Given:

Data = 101010111

Divisor = 1011


Step 1: Append zeros → 101010111000

Step 2: Perform XOR division
👉 Remainder = 100

Step 3: Transmitted Message
👉 101010111100


---

Q2) B) Write a C program to represent Mesh Topology.

Answer:

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("\nMesh Topology:\n\n");

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
            if(i != j)
                printf("Node%d <--> Node%d\n", i, j);
        }
    }

    return 0;
}


---

OR

Q2) B) Write a C program for implementation of CRC code.

Answer:

#include <stdio.h>
#include <string.h>

void xorOperation(char *a, char *b, char *result) {
    for(int i = 1; i < strlen(b); i++) {
        result[i-1] = (a[i] == b[i]) ? '0' : '1';
    }
}

int main() {
    char data[50], divisor[20];
    char temp[50], dividend[100];

    printf("Enter data: ");
    scanf("%s", data);

    printf("Enter divisor: ");
    scanf("%s", divisor);

    strcpy(dividend, data);

    for(int i = 0; i < strlen(divisor)-1; i++)
        strcat(dividend, "0");

    strncpy(temp, dividend, strlen(divisor));

    for(int i = strlen(divisor); i <= strlen(dividend); i++) {
        if(temp[0] == '1')
            xorOperation(temp, divisor, temp);
        else {
            char zeros[20];
            for(int j = 0; j < strlen(divisor); j++)
                zeros[j] = '0';
            xorOperation(temp, zeros, temp);
        }
        temp[strlen(divisor)-1] = dividend[i];
    }

    printf("CRC Remainder: %s\n", temp);
    printf("Transmitted Data: %s%s\n", data, temp);

    return 0;
}


---

✅ This is your Slip 20 – final, clean, exam-ready format

🎯 Now you have Slip 1 to Slip 20 fully completed — full syllabus done 👍

If you want, I can now:

Combine all slips into one PDF (best for revision)

Give top 20 most repeated questions

Make super short last-day revision notes (1 page)
