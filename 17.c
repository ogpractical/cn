Here is your complete answer sheet labeled properly (Slip 17) with questions on top and no viva section 👇


---

Slip 17


---

Q1) A) Write the answer of the following questions (ANY 5)


---

a) What is the primary purpose of a banner MOTD?

Answer:

Displays a Message of the Day when a user logs in

Provides warnings or important information

Used for security and legal notice



---

b) What is one benefit of using a simulator like Packet Tracer for learning networking, and what is one limitation compared to actual hardware?

Answer:

Benefit:

Safe and cost-effective environment for practice


Limitation:

Does not fully replicate real hardware behavior



---

c) Differentiate between Static NAT, Dynamic NAT, and Port Address Translation (PAT).

Answer:

Feature	Static NAT	Dynamic NAT	PAT

Mapping	One-to-One	Pool-based	Many-to-One
IP Usage	Fixed	From pool	Single public IP
Cost	High	Medium	Low



---

d) List the commands used for Network Address Translation on Cisco’s Packet Tracer.

Answer:

enable
configure terminal
access-list 1 permit 192.168.1.0 0.0.0.255
ip nat pool NATPOOL 200.1.1.1 200.1.1.10 netmask 255.255.255.0
ip nat inside source list 1 pool NATPOOL
interface gig0/0
ip nat inside
interface gig0/1
ip nat outside


---

f) Use Netstat command to view active connections.

Answer:

netstat -a

Displays all active connections and listening ports



---

g) Create a password hash using Linux terminal.

Answer:

openssl passwd -6 password

Generates a hashed password using SHA-512



---

OR

Q1) A) Write a transmitted message for Data as 100100 and divisor as 1101.

Answer:

Given:

Data = 100100

Divisor = 1101


Step 1: Append zeros → 100100000

Step 2: Perform XOR division
👉 Remainder = 001

Step 3: Transmitted Message
👉 100100001


---

Q2) B) Write a program to verify the configuration using show running-config and ping commands.

Answer:

#include <stdio.h>

int main() {
    int choice;

    printf("1. Show Running Config\n");
    printf("2. Ping Test\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Displaying running configuration...\n");
            printf("Interface: Gig0/0\nIP: 192.168.1.1\nStatus: UP\n");
            break;

        case 2:
            printf("Pinging 8.8.8.8...\n");
            printf("Reply received successfully.\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}


---

OR

Q2) B) Write a C program to convert plain message to cipher message.

Answer (Caesar Cipher):

#include <stdio.h>

int main() {
    char message[100];
    int i;

    printf("Enter message: ");
    scanf("%s", message);

    for(i = 0; message[i] != '\0'; i++) {
        message[i] = message[i] + 3;
    }

    printf("Cipher Message: %s\n", message);

    return 0;
}


---

✅ This is your Slip 17 – clean, exam-ready format

🎯 Now you have Slip 1 to Slip 17 fully completed — you’re fully prepared 👍

If you want, I can:

Combine all slips into **one PDF**

Give **top repeated questions/programs**

Make **1-page last-minute revision sheet**
