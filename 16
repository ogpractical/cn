Here is your complete answer sheet labeled properly (Slip 16) with questions on top and no viva section 👇


---

Slip 16


---

Q1) A) Write the answer of the following questions (ANY 5)


---

a) Compare and contrast the functionalities of a switch and a router

Answer:

Feature	Switch	Router

Function	Connects devices in a LAN	Connects different networks
Layer	Data Link Layer	Network Layer
Address Used	MAC Address	IP Address
Purpose	Local communication	Internet communication



---

b) What is a MAC address and how is it different from an IP address?

Answer:

Feature	MAC Address	IP Address

Type	Physical address	Logical address
Assigned by	Manufacturer	Network/ISP
Layer	Data Link Layer	Network Layer
Change	Fixed	Changeable



---

c) Perform subnetting on 192.168.1.0/26 and list all 4 subnet ranges with usable host IPs.

Answer:

Subnet mask: 255.255.255.192
Each subnet size = 64 addresses

Subnet	Network Address	Usable IP Range	Broadcast

1	192.168.1.0	192.168.1.1 – 192.168.1.62	192.168.1.63
2	192.168.1.64	192.168.1.65 – 192.168.1.126	192.168.1.127
3	192.168.1.128	192.168.1.129 – 192.168.1.190	192.168.1.191
4	192.168.1.192	192.168.1.193 – 192.168.1.254	192.168.1.255



---

d) List and explain all five IP address classes with examples

Answer:

Class	Range	Subnet Mask	Example

A	1–126	255.0.0.0	10.0.0.1
B	128–191	255.255.0.0	172.16.0.1
C	192–223	255.255.255.0	192.168.1.1
D	224–239	Multicast	224.0.0.1
E	240–255	Experimental	240.0.0.1



---

f) Set VTY lines (0 to 4) with password telnetpass and enable login.

Answer:

enable
configure terminal
line vty 0 4
password telnetpass
login
exit


---

g) Explain the role of VLAN1 in a switch’s initial configuration.

Answer:

VLAN1 is the default VLAN

All ports belong to VLAN1 initially

Used for management communication

Default IP is assigned to VLAN1



---

Q2) B) Write a C program to encrypt plain message to cipher message.

Answer (Simple Caesar Cipher):

#include <stdio.h>

int main() {
    char message[100];
    int i;

    printf("Enter message: ");
    scanf("%s", message);

    for(i = 0; message[i] != '\0'; i++) {
        message[i] = message[i] + 3;  // Shift by 3
    }

    printf("Encrypted Message: %s\n", message);

    return 0;
}


---

OR

Q2) B) Write a C program to implement CRC method.

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

✅ This is your Slip 16 – clean, exam-ready format

🎯 Now you have Slip 1 to Slip 16 fully completed — full syllabus covered 👍

If you want, I can:

Combine all slips into one PDF

Give top repeated programs (very important)

Make 1-page revision sheet before exam
