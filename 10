Here is your complete answer sheet labeled properly (Slip 10) with questions on top and no viva section 👇


---

Slip 10


---

Q1) A) Write the answer of the following questions (ANY 5)


---

a) What are the differences between Cat5e, Cat6, and Cat7 Ethernet cables?

Answer:

Feature	Cat5e	Cat6	Cat7

Speed	Up to 1 Gbps	Up to 10 Gbps	10 Gbps+
Frequency	100 MHz	250 MHz	600 MHz
Shielding	Low	Moderate	High
Usage	Basic networks	Modern LAN	High-speed/data centers



---

b) What is the purpose of a modem in a network? Can we connect directly to the internet without it?

Answer: A modem converts digital signals into analog signals and vice versa.

It connects a network to the ISP

Without a modem, direct connection is not possible in traditional systems

Fiber networks use ONT instead



---

c) Write the command to assign a static IP in Linux.

Answer:

sudo ifconfig eth0 192.168.1.10 netmask 255.255.255.0

OR

sudo ip addr add 192.168.1.10/24 dev eth0


---

d) What is the use of the ping command in networking?

Answer:

Tests connectivity between devices

Checks if host is reachable

Measures round-trip time


Example:

ping 8.8.8.8


---

f) Differentiate between Static NAT, Dynamic NAT, and Port Address Translation (PAT).

Answer:

Feature	Static NAT	Dynamic NAT	PAT

Mapping	One-to-One	Pool-based	Many-to-One
IP Usage	Fixed	From pool	Single public IP
Cost	High	Medium	Low



---

g) Configure VLAN1 with the IP address 192.168.1.10 and subnet mask 255.255.255.0.

Answer:

enable
configure terminal
interface vlan 1
ip address 192.168.1.10 255.255.255.0
no shutdown
exit


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

Q2) B) Write a program to implement even parity error detection.

Answer:

#include <stdio.h>
#include <string.h>

int main() {
    char data[50];
    int count = 0;

    printf("Enter binary data: ");
    scanf("%s", data);

    for(int i = 0; i < strlen(data); i++) {
        if(data[i] == '1')
            count++;
    }

    if(count % 2 == 0)
        printf("Even parity bit: 0\n");
    else
        printf("Even parity bit: 1\n");

    return 0;
}


---

OR

Q2) B) Write a program that saves output to a text file.

Answer:

#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("output.txt", "w");

    if(fp == NULL) {
        printf("File cannot be opened\n");
        return 0;
    }

    fprintf(fp, "This is a sample output written to file.\n");

    fclose(fp);

    printf("Data written to file successfully.\n");

    return 0;
}


---

✅ This is your Slip 10 – final, clean, exam-ready format

🎯 Now you have Slip 1 to Slip 10 fully completed — you're well prepared 👍

If you want, I can:

Combine all into **one PDF (very useful)**

Give **top repeated programs list**

Make **1-page last-minute revision sheet**
