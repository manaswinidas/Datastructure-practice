import java.util.*;
import java.io.*;
import java.util.Scanner;
public class SumOfNumbers{
    public static void main(String[] args){
        int s=0;
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        for(int i=1;i<=n;i++){
            s=s+i;
        }
        System.out.println(s);
    }
}