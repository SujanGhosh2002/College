// Q2. Simulate and implement stop and wait protocol for noisy channel.

import java.net.*;
import java.util.Scanner;

public class Q2 {
    public static void main(String[] args) {
        int sent = 0, ack, framesize, i;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the framesize: ");
        framesize = sc.nextInt();
        for (i = 0; i < framesize; i++) {
            System.out.println("\nframe %d sent ." + i);
            i++;
            break;
        }
    }
}
// #include<stdio.h>
// int main()
// {

// int sent=0,ack,framesize,i;
// printf("Enter the framesize : ");
// scanf("%d",&framesize);
// while(1)
// {
// for(i=0;i<framesize;i++)
// {
// printf("\nframe %d sent .",sent);
// sent++;
// break;
// }
// printf("\nEnter the last acknowledgement received .");
// scanf("%d",&ack);
// if(ack>=framesize)
// {
// break;
// }
// else
// sent=ack;
// }
// }