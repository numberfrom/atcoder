import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Main p = new Main();
    }

    public Main(){
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        solve(s);
    }

    public void solve(String s){
        StringBuilder sb = new StringBuilder(s.length());
        for (int i=0; i<s.length(); i++){
            sb.append((char)(26+(s.charAt(i)-"A"-(i+1)%26)%26)+"A");
        }
        System.out.println(sb.toString());
    }
}