import java.util.ArrayList;
import java.util.Scanner;

public class MenuPedidos {
    private ArrayList<Pedido> listaPedidos = new ArrayList<>();
    private Scanner sc;
    private int id = 1;

    public MenuPedidos(Scanner sc) {
        this.sc = sc;
    }

    public void exibirMenu() {
        int opcao;
        do {
            System.out.println("=== MENU PEDIDOS ===");
            System.out.println("[1] Novo Pedido");
            System.out.println("[2] Ver Pedidos");
            System.out.println("[3] Alterar Pedido");
            System.out.println("[0] Voltar");
            System.out.print("Opção: ");
            opcao = sc.nextInt();
            sc.nextLine();

            switch (opcao) {
                case 1: 
                    novoPedido(); 
                    break;
                case 2: 
                    verPedidos(); 
                    break;
                case 3: 
                    alterarPedido(); 
                    break;
            }
        } while (opcao != 0);
    }
}
