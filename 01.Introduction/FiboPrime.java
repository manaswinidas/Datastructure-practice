// import java.io.*;
// import java.util.*;
// import java.util.Scanner;
// public class FiboPrime
// {
// public static void main(String args[]){
//     Scanner sc= new Scanner(System.in);
//     int n =sc.nextInt();
//       if(n%2==0)
//          {
//              n=n/2;
//              System.out.println(prime(n));
//          }
//       else
//       {
//           n=n/2;
//           System.out.println(fibonacci(n+1));
//       } 
// }  
// public static int fibonacci(int n){
//     int a=1,b=1,i,c=0;
//     for(i=3;i<=n;i++){
//     c=a+b;    
//     a=b;
//     b=c;
//     }
//     return c;
// } 
// public static int prime(int n){
//     int i,nf=0,j,c=0;
//     for(i=2;;i++){      
//       for(j=1;j<=i;j++){
//         if(i%j==0){
//             nf++;
//         }
// }        
// if(nf==2)
//  c+=1;
// if(c==n) {
//  return i;
//        }
//     }
// }
// }

import java.io.*;

import java.util.*;

import java.util.Scanner;

class FiboPrime{

  public static int fibo(int n){

    int i, a=1, b=1,c=0;  

    for (i=3;i<=n;i++){

      c=a+b;

      a=b;

      b=c;

    }

    return c;

  }

  public static boolean isPrime(int n){

    int i;

    for (i=2;i<n;i++){

      if (n%i==0){

        return false;

      }

    }

    return true;

  }

  public static int prime(int n){

    int i,c=2;

    for (i=4;;i++){

      if (isPrime(i)){

        c++;

      }

      if(c==n){

        return i;

      }

    }

  }
public static void main(String args[]){

    Scanner s = new Scanner(System.in);

    int n = s.nextInt();

    if (n%2==0){

      System.out.println(prime((int)(n/2)));

    }

    else{

      System.out.println(fibo((int)(n/2)+1));

    }

  }

}
