import java.io.*;
import java.util.*;
import java.util.Scanner;

public class IdAndSheep{
    public static void main(String[] args){
        char a;
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            a=sc.next().charAt(0);
            if(a=='b' || a=='B')
               System.out.println("BattleShip");
            else if(a=='c' || a=='C')
               System.out.println("Cruiser");
            else if(a=='d' || a=='D')
               System.out.println("Destroyer"); 
        }
    }
}