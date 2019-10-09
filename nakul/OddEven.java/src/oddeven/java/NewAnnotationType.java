import java.util.Scanner;
class evenodd{
    public static void main(string args[]){
        int c;
        System.out.println("enter an integer");
        Scanner in =new Scanner(System.in);
        c=in.nextInt();
        if((c/2)*2 == c)
            System.out.println("even");
        else
            System.out.println("odd");
    }
}