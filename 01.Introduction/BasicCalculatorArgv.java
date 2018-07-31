import java.util.*;
import java.io.*;
import java.util.Scanner;
public class BasicCalculatorArgv{
    public static void main(String[] args){
        double output;
        if(args.length!=3){
            System.out.println("Invalid Input");
            return;
        }
        double a = Double.parseDouble(args[0]);
        char b= args[1].charAt(0);
        double c = Double.parseDouble(args[2]);
        switch(b){
            case '+': {
                output = a+c;
            System.out.println(output);
            break;
            }
            case '-': {
                output=a-c;
            System.out.println(output);
            break;
            }
            case '*': {
                output=a*c;
            System.out.println(output);
            break;
            }
            case '/': {
                output=a/c;
            System.out.println(output);
            break;
            }
            case '%': {
                output=a%c;
            System.out.println(output);
            break;
            }
            default:
            System.out.println("Invalid Input");
            break;
        }
    }
}