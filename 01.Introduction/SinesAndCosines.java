import java.io.*;
import java.util.*;

public class SinesAndCosines{
    public static void main(String [] args){
        double j,sinx=0, cosx=0;
        Scanner sc = new Scanner(System.in);
        int z = sc.nextInt();
        for(int i=0;i<z;i++){
            int m = sc.nextInt();
            int n = sc.nextInt();
            int t = sc.nextInt();
            if(m==0){
                for(j=0;j<=t;j++){
                    sinx+=(Math.pow(-1, j)/fact(2*j+1))*Math.pow(n, 2*j+1);
                }
                System.out.println(sinx);
            }
            else if(m==1){
                for(j=0;j<=t;j++){
                    cosx+=(Math.pow(-1, j)/fact(2*j))*Math.pow(n, 2*j);
                }
                System.out.println(cosx);
            }
        }
    }
    public static int fact(int n){
        int f=1;
        for(int i=1;i<=n;i++){
            f=f*i;
        }
        return f;
    }
}