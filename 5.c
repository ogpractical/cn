Here is your complete answer sheet labeled properly (Slip 5) with questions on top and no viva section 👇


---

Slip 5


---

Q1) A) Write the answer of the following questions (ANY 5)


---

a) What does the ip link set eth0 up command do?

Answer:

This command is used to enable (activate) a network interface in Linux.

eth0 is the interface name.

It brings the interface UP state so it can send/receive data.



---

b) How to detect hidden Wi-Fi networks?

Answer:

Use Wi-Fi scanning tools like:

iw dev (Linux)

netsh wlan show networks mode=bssid (Windows)


Use tools like Wireshark or mobile Wi-Fi analyzer apps

Hidden networks can be detected when devices attempt to connect



---

c) Write the command sequence to configure a router interface with IP.

Answer:

enable
configure terminal
interface gig0/0
ip address 192.168.1.1 255.255.255.0
no shutdown
exit


---

d) What is the purpose of assigning a hostname to a switch?

Answer:

Identifies the device in a network

Makes management and troubleshooting easier

Helps in remote configuration



---

f) What is ethical hacking?

Answer: Ethical hacking is the practice of testing systems and networks for security vulnerabilities with permission.

Done by authorized professionals

Helps improve system security

Also called penetration testing



---

g) What does the show running-config command display?

Answer:

Displays the current active configuration of a router or switch

Shows all settings currently in use

Not saved permanently unless copied to startup-config



---

Q2) B) Write a C program to display a Ring Topology.

Answer:

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("\nRing Topology:\n\n");

    for(i = 0; i < n; i++) {
        printf("Node%d", i+1);
        printf(" -> ");
    }

    // Connect last node to first
    printf("Node1\n");

    return 0;
}


---

OR

Q2) B) Write a program to assign an IP address to VLAN1 and setup a default gateway (use structure).

Answer:

#include <stdio.h>
#include <string.h>

struct NetworkConfig {
    char vlan[10];
    char ip[20];
    char gateway[20];
};

int main() {
    struct NetworkConfig config;

    strcpy(config.vlan, "VLAN1");
    strcpy(config.ip, "192.168.1.1");
    strcpy(config.gateway, "192.168.1.254");

    printf("Configuration Details:\n");
    printf("VLAN: %s\n", config.vlan);
    printf("IP Address: %s\n", config.ip);
    printf("Default Gateway: %s\n", config.gateway);

    return 0;
}


---

✅ This is your Slip 5 – complete, clean, exam-ready

Now you have Slip 1 to Slip 5 fully prepared 👍

If you want, I can:

Combine all slips into **one PDF**

Give **last-day revision (super short answers)**

Highlight **most important programs for exam**
