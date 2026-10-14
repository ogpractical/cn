Got it 👍 — here is your complete answer sheet labeled properly (Slip 2) with questions written on top and no viva section.


---

Slip 2


---

Q1) A) Write the answer of the following questions (ANY 5)


---

a) What is the functional difference between a switch and a router?

Answer:

Feature	Switch	Router

Function	Connects devices within a network	Connects different networks
Layer	Data Link Layer	Network Layer
Uses	MAC Address	IP Address
Example	LAN connection	Internet connection



---

b) How many hosts are possible in a /26 subnet?

Answer:

Formula:
👉 Hosts = 

👉 Hosts = 

✅ Total Hosts = 62


---

c) What are the differences between Cat5e, Cat6, and Cat7 Ethernet cables?

Answer:

Feature	Cat5e	Cat6	Cat7

Speed	Up to 1 Gbps	Up to 10 Gbps	Up to 10 Gbps+
Frequency	100 MHz	250 MHz	600 MHz
Shielding	Low	Better	High
Usage	Basic networking	Modern networks	High-speed/data centers



---

d) Write the steps to identify a phishing email.

Answer:

Check sender email address carefully

Look for spelling/grammar mistakes

Avoid clicking suspicious links

Check for urgent/threatening language

Verify attachments before opening

Cross-check with official website



---

f) What are the two analysis methods used for analyzing malware?

Answer:

1. Static Analysis – Analyzing code without executing it


2. Dynamic Analysis – Running malware in a controlled environment




---

g) What is the use of the ping command in networking?

Answer:

Used to test connectivity between two devices

Measures round-trip time (RTT)

Checks if a host is reachable on a network


Example:

ping 8.8.8.8


---

Q2) B) Write a C program to Simple Hash Simulation.

Answer:

#include <stdio.h>
#define SIZE 10

int hashTable[SIZE];

// Initialize hash table
void init() {
    for(int i = 0; i < SIZE; i++)
        hashTable[i] = -1;
}

// Hash function
int hashFunction(int key) {
    return key % SIZE;
}

// Insert element
void insert(int key) {
    int index = hashFunction(key);

    while(hashTable[index] != -1) {
        index = (index + 1) % SIZE; // Linear probing
    }

    hashTable[index] = key;
}

// Display table
void display() {
    for(int i = 0; i < SIZE; i++) {
        if(hashTable[i] != -1)
            printf("%d --> %d\n", i, hashTable[i]);
        else
            printf("%d --> Empty\n", i);
    }
}

int main() {
    init();

    insert(10);
    insert(20);
    insert(15);
    insert(7);

    display();

    return 0;
}


---

OR

Q2) B) Write a C program to implement framing using character count method in the data link.

Answer:

#include <stdio.h>
#include <string.h>

int main() {
    char data[100];
    int i, len;

    printf("Enter data: ");
    scanf("%s", data);

    len = strlen(data);

    printf("Framed Data (Character Count Method):\n");

    // Print length as header
    printf("%d ", len);

    // Print data
    for(i = 0; i < len; i++) {
        printf("%c", data[i]);
    }

    printf("\n");

    return 0;
}


---

✅ This is your Slip 2 – complete, clean, exam-ready

If you want next, I can create:

Slip 3 (different set)

Important repeated programs

Last-day revision sheet (very short answers)
