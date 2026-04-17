Here is your complete answer sheet labeled properly (Slip 14) with questions on top and no viva section 👇


---

Slip 14


---

Q1) A) Write the answer of the following questions (ANY 5)


---

a) Configure PAT (NAT overload) to allow multiple internal hosts to access the internet using a single public IP.

Answer:

enable
configure terminal

access-list 1 permit 192.168.1.0 0.0.0.255

interface gig0/0
ip nat inside

interface gig0/1
ip nat outside

ip nat inside source list 1 interface gig0/1 overload


---

b) Verify routing with ping, traceroute, and show ip route commands

Answer:

ping 192.168.1.1

traceroute 192.168.1.1

show ip route

ping → checks connectivity

traceroute → shows path

show ip route → displays routing table



---

c) Assign the privileged EXEC mode password as class.

Answer:

enable
configure terminal
enable password class


---

d) Use show running-config to verify all the configurations.

Answer:

show running-config

Displays current active configuration



---

f) List two advantages and two disadvantages of using dynamic IP configuration.

Answer:

Advantages:

Automatic IP assignment

Easy network management


Disadvantages:

IP address may change

Less control over configuration



---

g) Set VTY lines (0 to 4) with password telnetpass and enable login.

Answer:

enable
configure terminal
line vty 0 4
password telnetpass
login
exit


---

Q2) B) Write a program to implement Static Routing Simulation.

Answer:

#include <stdio.h>
#include <string.h>

struct Route {
    char destination[20];
    char gateway[20];
};

int main() {
    struct Route r;

    strcpy(r.destination, "192.168.2.0");
    strcpy(r.gateway, "192.168.1.1");

    printf("Static Routing Table:\n");
    printf("Destination: %s\n", r.destination);
    printf("Gateway: %s\n", r.gateway);

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

    fprintf(fp, "Network Configuration Output\n");
    fprintf(fp, "IP Address: 192.168.1.10\n");
    fprintf(fp, "Gateway: 192.168.1.1\n");

    fclose(fp);

    printf("Data saved successfully.\n");

    return 0;
}


---

✅ This is your Slip 14 – clean, exam-ready format

🎯 Now you have Slip 1 to Slip 14 fully completed — full syllabus covered 👍

If you want, I can:

Combine all slips into one PDF

Give top repeated questions/programs

Make last-day revision sheet (very important)
