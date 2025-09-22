import java.util.Scanner;

public class Main {
    //continuar os menus como o de profutos etc....
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        MenuPedidos menuPedidos = new MenuPedidos(sc);
        MenuClientes menuClientes = new MenuClientes(sc);
        
        do {
            System.out.println(" ===  S A N D U I C H E R I A  -  N C  ===");
            System.out.println(" > [1] Pedidos");
            System.out.println(" > [2] Clientes");
            System.out.println(" > [3] Produtos");
            System.out.println(" > [4] Funcionários");
            System.out.println(" > [0] Sair do Programa");
            System.out.println(" ============================================\n");
            System.out.print(" Escolha uma opção: ");
            int opcao = sc.nextInt();
            sc.nextLine();

            switch (opcao) {
                case 1:
                    menuPedidos.exibirMenu();
                    break;
                case 2:
                    menuClientes.exibirMenu();
                    break;
                case 3:
                    
                    break;
                case 4:
            
                    break;
                case 0:
                    
                    break;

                default:
                    System.out.println(" !! NÚMERO INVÁLIDO !!");
                    break;
            }
            Utilitys.espaco(3,"\n");

            if(opcao == 0) {
                break;
            }

        } while (true);
        sc.close();

        System.out.println(" Até a próxima.....");
    }
}
