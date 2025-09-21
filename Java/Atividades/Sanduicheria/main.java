import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    static ArrayList<Pedido> listaPedidos = new ArrayList<>();
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {
        
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
                    menuPedidos();
                    break;
                case 2:

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
            espaco(3,"\n");

            if(opcao == 0) {
                break;
            }

        } while (true);
        sc.close();

        System.out.println(" Até a próxima.....");
    }

    public static void espaco(int n, String s) {
        for (int i = 0; i < n; i++) {
            System.out.println(""+s);
        }
    }

    public static void pause(){
        System.out.println("Pressione Enter para continuar...");
        sc.nextLine();
    }

    public static void menuPedidos(){
        do {
            espaco(3, "\n");
            System.out.println(" =====  MENU  PEDIDOS  =====");
            System.out.println(" > [1] Novo Pedido");
            System.out.println(" > [2] Visualizar Pedidos");
            System.out.println(" > [3] Alterar Pedido/Status");
            System.out.println(" > [0] Voltar");
            System.out.println(" ============================================\n");
            System.out.print(" Escolha uma opção: ");
            int opcao = sc.nextInt();
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
            
                default:
                    System.out.println(" !! NÚMERO INVÁLIDO !!"); 
                    break;
            }

            if(opcao == 0) {
                break;
            }
            espaco(3, "\n");
        } while (true);
    }
    static int id = 1;
    public static void novoPedido() {
        espaco(3, "\n");
        int idPedido = id;

        System.out.print("ID do Cliente: ");
        int idCliente = sc.nextInt();
        sc.nextLine();
        espaco(1,"");
        
        System.out.print("Escreva o Pedido: ");
        String pedido = sc.nextLine();
        espaco(1,"");

        System.out.print("Valor Final: ");
        float valorFinal = sc.nextFloat();
        espaco(1,"");

        int formaPagamento = 0;
        do {
            System.out.println(" => Forma de Pagamento: ");
            System.out.println(" > [1] Pix");
            System.out.println(" > [2] Espécie");
            System.out.println(" > [3] Cartão Débito");
            System.out.println(" > [4] Cartão Crédito");
            System.out.println(" ============================================\n");
            System.out.print(" Escolha uma opção: ");
            formaPagamento = sc.nextInt();
            sc.nextLine();
        } while (formaPagamento < 1 || formaPagamento > 4);
        espaco(1,"");

        System.out.print("Observação: ");
        String observacao = sc.nextLine();
        espaco(1,"");

        int entrega = 0;
        do {
            System.out.println(" > [1] Entrega");
            System.out.println(" > [2] Retirada");
            System.out.println(" > [3] Mesa");
            System.out.println(" ============================================\n");
            System.out.print(" Escolha uma opção: ");
            entrega = sc.nextInt();
            sc.nextLine();
        } while (entrega < 1 || entrega > 3);
        espaco(1,"");

        String endereco;
        if(entrega == 1) {
            System.out.print("Endereço: ");
            endereco = sc.nextLine();
        } else {
            endereco = null;
        }
        espaco(1,"");

        int status = 0;
        do {
            System.out.println(" => Status: ");
            System.out.println(" > [1] Em preparo");
            System.out.println(" > [2] Pronto");
            System.out.println(" > [0] Cancelado");
            System.out.println(" ============================================\n");
            System.out.print(" Escolha uma opção: ");
            status = sc.nextInt();
        } while (status < 0 || status > 2);
        sc.nextLine();
        espaco(1,"");

        Pedido pedidos = new Pedido(idPedido, status, idCliente, pedido, valorFinal, formaPagamento, observacao, entrega, endereco);
        listaPedidos.add(pedidos);

        System.out.println("Pedido cadastrado com sucesso!");
        espaco(4, "\n");
        id++;
    }

    public static void verPedidos(){
        espaco(3, "\n");
        if (listaPedidos.isEmpty()) { 
            System.out.println("Nenhum pedido cadastrado."); 
            pause(); 
            return; 
        }
        int contador = 1;
        for (Pedido pedido : listaPedidos) {
            espaco(1,"");
            System.out.println(" ==== Pedido "+ contador + " ====");
            pedido.show();
            contador++;
        }
        pause();
    }

    public static void alterarPedido() {
        System.out.print("Digite o n° do pedido: ");
        int idBusca = sc.nextInt();
        sc.nextLine();

        Pedido pedido = buscarPedido(idBusca);

        if (pedido == null) {
            System.out.println("Pedido não encontrado!");
            return;
        } else {
            System.out.println(" Pedido n°" + pedido.getIdPedido() + " selecionado com sucesso!!");
            pedido.show();
            pause();
        }

        int opcao;
        do {
            System.out.println("\n=== Alterar Pedido " + pedido.getIdPedido() + " ===");
            System.out.println("[1] Alterar Status");
            System.out.println("[2] Alterar ID do Cliente");
            System.out.println("[3] Alterar Pedido");
            System.out.println("[4] Alterar Valor Final");
            System.out.println("[5] Alterar Forma de Pagamento");
            System.out.println("[6] Alterar Observação");
            System.out.println("[7] Alterar Forma de Entrega");
            System.out.println("[8] Alterar Endereço");
            System.out.println("[0] Voltar");
            System.out.print("Escolha: ");
            opcao = sc.nextInt();
            sc.nextLine();

            switch (opcao) {
                case 1:
                int novoStts;
                    do{
                        System.out.println(" => Status: ");
                        System.out.println(" > [1] Em preparo");
                        System.out.println(" > [2] Pronto");
                        System.out.println(" > [0] Cancelado");
                        System.out.println(" ============================================\n");
                        System.out.print(" Escolha uma opção: ");
                        novoStts = sc.nextInt();
                        sc.nextLine();
                    } while(novoStts < 0 || novoStts > 2);
                    pedido.alterarStatus(novoStts);
                    break;
                case 2:
                    System.out.print("Novo ID do Cliente: ");
                    int novoIdC = sc.nextInt();
                    sc.nextLine();
                    pedido.alterarIdCliente(novoIdC);
                    break;
                case 3:
                    System.out.print("Novo Pedido: ");
                    String novoP = sc.nextLine();
                    pedido.alterarPedido(novoP);
                    break;
                case 4:
                    System.out.print("Novo Valor Final: ");
                    float novoVF = sc.nextFloat();
                    sc.nextLine();
                    pedido.alterarValorFinal(novoVF);
                    break;
                case 5:
                    int novaFP;
                    do {
                        System.out.println(" Nova Forma de Pagamento: ");
                        System.out.println(" > [1] Pix");
                        System.out.println(" > [2] Espécie");
                        System.out.println(" > [3] Cartão Débito");
                        System.out.println(" > [4] Cartão Crédito");
                        System.out.println(" > [0] Voltar");
                        System.out.println(" ============================================\n");
                        System.out.print(" Escolha uma opção: ");
                        novaFP = sc.nextInt();
                        sc.nextLine();
                    } while (novaFP < 0 || novaFP > 4);
                    pedido.alterarFormaPagamento(novaFP);
                    break;
                case 6:
                    System.out.print("Nova observação: ");
                    String novaObs = sc.nextLine();
                    pedido.alterarObservacao(novaObs);
                    break;
                case 7:
                    int novaE;
                    do {
                        System.out.println(" Nova Forma de Entrega: ");
                        System.out.println(" > [1] Entrega");
                        System.out.println(" > [2] Retirada");
                        System.out.println(" > [3] Mesa");
                        System.out.println(" ============================================\n");
                        System.out.print(" Escolha uma opção: ");
                        novaE = sc.nextInt();
                        sc.nextLine();
                    } while (novaE < 1 || novaE > 3);
                    pedido.alterarEntrega(novaE);
                    if (novaE != 1) pedido.alterarEndereco(null);
                    break;
                case 8:
                    System.out.print("Novo endereço: ");
                    String novoEndereco = sc.nextLine();
                    pedido.alterarEndereco(novoEndereco);
                    break;
                case 0: 
                    System.out.println("Voltando...");
                    break;
                default: 
                    System.out.println("Opção inválida.");
                    break;
            }
        } while (opcao != 0);
    }

    public static Pedido buscarPedido(int idBusca) {
        for (Pedido pedido : listaPedidos) {
            if(pedido.getIdPedido() == idBusca) {
                return pedido;
            }
        }

        return null;
    }

}
