import java.io.*;
import java.util.*;

public class ColdNumbers{
    public static void main(String[] args){
        int c_odd=0;
        Scanner sc=new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=1;i<=n;i++){
            if(i%2!=0){
                c_odd++;
            }
        }
        if(n%c_odd==0){
            System.out.println("1");
        }
        else 
        System.out.println("0");
    }
}

//import java.io.*;
// import java.util.*;

// public class ColdNumbers{
//     public static void main(String[] args){
//         int c_odd=0;
//         Scanner sc=new Scanner(System.in);
//         int n = sc.nextInt();
//         if(n%2==0){
//             System.out.println("1");
//         }
//         else 
//         System.out.println("0");
//     }
// }