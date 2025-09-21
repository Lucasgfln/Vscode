import java.util.Scanner;

public class Utilitys {
    static Scanner sc = new Scanner(System.in);
    public static void espaco(int n, String s) {
        for (int i = 0; i < n; i++) {
            System.out.println(""+s);
        }
    }

    public static void pause(){
        System.out.println("Pressione Enter para continuar...");
        sc.nextLine();
    }
}
