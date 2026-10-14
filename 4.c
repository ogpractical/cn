Here is your complete answer sheet labeled properly (Slip 4) with questions on top and no viva section 👇


---

Slip 4


---

Q1) A) Write the answer of the following questions (ANY 5)


---

a) What is Cyber Attack? Write the types of Cyberattacks.

Answer: A cyber attack is an attempt to gain unauthorized access, damage, or disrupt computer systems or networks.

Types of Cyber Attacks:

Phishing

Malware (Virus, Worm, Trojan)

Denial of Service (DoS)

Man-in-the-Middle attack

Ransomware



---

b) How can you reset or release an IP address obtained from DHCP?

Answer:

In Windows:

ipconfig /release
ipconfig /renew

In Linux:

dhclient -r
dhclient


---

c) Explain supernetting with an example combining IPv4 Class C networks.

Answer: Supernetting is the process of combining multiple smaller networks into a larger network.

Example:

Combine:

192.168.1.0/24

192.168.2.0/24

192.168.3.0/24

192.168.4.0/24



👉 Supernet becomes: 192.168.0.0/22


---

d) How do you crack passwords with John the Ripper?

Answer: Steps:

1. Install John the Ripper


2. Prepare password hash file


3. Run command:



john passwords.txt

4. View cracked passwords:



john --show passwords.txt


---

f) Explain the use of copy running-config startup-config.

Answer:

Used in networking devices (like routers/switches)

Copies current running configuration to startup configuration

Ensures settings are saved permanently

Prevents loss after reboot



---

g) What is a loopback IP address? What is its range?

Answer: A loopback IP is used to test the local system network.

Sends data to itself

Range: 127.0.0.0 to 127.255.255.255

Common: 127.0.0.1



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

Q2) B) Write a C program that reads an email from a file and performs phishing pattern detection.

Answer:

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("email.txt", "r");

    if(fp == NULL) {
        printf("File not found\n");
        return 0;
    }

    while(fgets(line, sizeof(line), fp)) {
        if(strstr(line, "urgent") || 
           strstr(line, "password") || 
           strstr(line, "click") || 
           strstr(line, "verify")) {
            printf("Phishing detected: %s", line);
        }
    }

    fclose(fp);
    return 0;
}


---

OR

Q2) B) Write a C program that checks private IP ranges.

Answer:

#include <stdio.h>

int main() {
    int a, b, c, d;

    printf("Enter IP address (a.b.c.d): ");
    scanf("%d.%d.%d.%d", &a, &b, &c, &d);

    if(a == 10)
        printf("Private IP (Class A)\n");
    else if(a == 172 && b >= 16 && b <= 31)
        printf("Private IP (Class B)\n");
    else if(a == 192 && b == 168)
        printf("Private IP (Class C)\n");
    else
        printf("Public IP\n");

    return 0;
}


---

✅ This is your Slip 4 – clean, exam-ready format

If you want next, I can:

Create **Slip 5 (final set)**

Give **most repeated programs**

Make **1-page quick revision notes for all slips**
