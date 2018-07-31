// import java.io.*;
// import java.util.*;
// import java.util.Scanner;
// public class HcfAndLcm{
//     public static void main(String[] args){
//         int hcf=0,lcm=0;
//         int a = Integer.parseInt(args[0]);
//         int b = Integer.parseInt(args[1]);
//         for(int i=1;i<=a;i++){
//             if(a%i==0 && b%i==0){
//                   hcf=i; 
//             }
//         }
//         lcm=(a*b)/hcf;
//         System.out.println(hcf+"\n"+lcm);
//     }
// }

import java.io.*;
import java.util.*;
import java.util.Scanner;
public class HcfAndLcm{
    public static void main(String[] args){
        int hcf=0,lcm=0;
        int a = Integer.parseInt(args[0]);
        int b = Integer.parseInt(args[1]);
        int c = b;
        while(a!=b){
           if(a>b) a=a-b;
           else b=b-a;
}       hcf = a;
        lcm=(a*c)/hcf;
        System.out.println(hcf+"\n"+lcm);
    }
}