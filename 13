Here is your complete answer sheet labeled properly (Slip 13) with questions on top and no viva section 👇


---

Slip 13


---

Q1) A) Write the answer of the following questions (ANY 5)


---

a) How do you verify if an interface received an IP dynamically?

Answer:

Use the following commands:


ip addr show

OR

ifconfig

If IP is assigned via DHCP, it will appear automatically

You can also check:


dhclient -v


---

b) Demonstrate assigning IPs and testing connectivity for 3 systems in a LAN.

Answer:

Step 1: Assign IPs

System 1 → 192.168.1.1

System 2 → 192.168.1.2

System 3 → 192.168.1.3


Step 2: Set Subnet Mask

255.255.255.0 for all systems


Step 3: Test Connectivity

ping 192.168.1.2
ping 192.168.1.3

Successful replies confirm connectivity



---

c) Explain the role of VLAN1 in a switch’s initial configuration.

Answer:

VLAN1 is the default VLAN

All ports are assigned to VLAN1 initially

Used for management communication

Default IP is configured on VLAN1



---

d) What steps are required to configure the default gateway as 192.168.1.1?

Answer:

enable
configure terminal
ip default-gateway 192.168.1.1
exit


---

f) What steps are required to configure Dynamic NAT with a pool of public IP addresses?

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

g) Use show running-config to verify all the configurations.

Answer:

show running-config

Displays all current active configurations

Used to verify IP, VLAN, NAT, routing settings



---

Q2) B) Write a program to display a Hybrid Topology

Answer:

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("\nHybrid Topology (Star + Bus):\n\n");

    // Star part
    printf("   [Hub]\n");
    for(i = 0; i < n; i++) {
        printf("     |\n");
        printf("   Node%d\n", i+1);
    }

    // Bus part
    printf("\nBus Connection:\n");
    for(i = 0; i < n; i++) {
        printf("Node%d", i+1);
        if(i != n-1)
            printf(" --- ");
    }

    printf("\n");

    return 0;
}


---

OR

Q2) B) Write a program that saves an Initial Switch Configuration into a text file

Answer:

#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("switch_config.txt", "w");

    if(fp == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    fprintf(fp, "Switch Configuration:\n");
    fprintf(fp, "Hostname: Switch1\n");
    fprintf(fp, "IP Address: 192.168.1.10\n");
    fprintf(fp, "Default Gateway: 192.168.1.1\n");

    fclose(fp);

    printf("Configuration saved to file successfully.\n");

    return 0;
}


---

✅ This is your Slip 13 – clean, exam-ready format

🎯 Now you have Slip 1 to Slip 13 fully completed — full preparation done 👍

If you want, I can:

Combine all slips into **one PDF (very useful for study)**

Give **top repeated questions/programs**

Make **1-page quick revision sheet before exam**
