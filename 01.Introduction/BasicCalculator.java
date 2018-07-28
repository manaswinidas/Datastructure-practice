import java.io.*;
import java.util.*;
import java.util.Scanner;
public class BasicCalculator{
    public static void main(String[] args){
        double a,b,output=0;
        char c;
        Scanner sc=new Scanner(System.in);
        try{
        if(sc.hasNext()){
            a=sc.nextInt();
            c=sc.next().charAt(0);
            b=sc.nextInt();
            if(c=='+') output=a+b;
            else if(c=='-') output=a-b;
            else if(c=='*') output=a*b;
            else if(c=='/') output=a/b;
            else if(c=='%') output=a%b;
            System.out.println(output);
             }
        }
        catch(InputMismatchException e){
            System.out.println("Invalid Input");
        }
    }
}