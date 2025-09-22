import java.util.ArrayList;
import java.util.Scanner;

public class MenuClientes {
    private final ArrayList<Cliente> listaClientes = new ArrayList<>();
    private final Scanner sc;

    public MenuClientes(Scanner sc) {
        this.sc = sc;
    }

    public void exibirMenu() {
        int opcao;
        do {
            System.out.println("=== MENU CLIENTES ===");
            System.out.println("[1] Cadastrar Cliente");
            System.out.println("[2] Ver lista de Clientes");
            System.out.println("[3] Editar Cliente");
            System.out.println("[0] Voltar");
            System.out.print("Opção: ");
            opcao = sc.nextInt();
            sc.nextLine();

            switch (opcao) {
                case 1:
                    cdstrCliente();
                    break;
                case 2:
                    verClientes();
                    break;
                case 3:
                    editarCliente();
                    break;
                case 0:
                    break;
                default:
                    System.out.println(" !! NÚMERO INVÁLIDO !!");
                    break;
            }
        } while (opcao != 0);
    }
    private int id = 1;
    private void cdstrCliente() {
        Utilitys.espaco(3, "\n");

        System.out.print("Nome do(a) Cliente: ");
        String nomeCliente = sc.nextLine();
        Utilitys.espaco(1, "");

        System.out.print("Digite o CPF do cliente (123.456.789-10): ");
        String cpf = sc.nextLine();
        Utilitys.espaco(1, "");

        System.out.print("E-mail: ");
        String email = sc.nextLine();
        Utilitys.espaco(1, "");

        System.out.print("Telefone((84)98765-4321): ");
        String telefone = sc.nextLine();

        System.out.print("Endereço: ");
        String endereco = sc.nextLine();

        Utilitys.espaco(1, "");

        Cliente cliente = new Cliente(id, nomeCliente, cpf, email, telefone, endereco);
        listaClientes.add(cliente);

        System.out.println("Cliente cadastrado com sucesso!");
        Utilitys.espaco(4, "\n");
        id++;
    }

    private void verClientes() {
        Utilitys.espaco(3, "\n");
        if (listaClientes.isEmpty()) {
            System.out.println("Nenhum Cliente Cadastrado.");
            Utilitys.pause();
            return;
        }
        int contador = 1;
        for (Cliente cliente : listaClientes) {
            Utilitys.espaco(1, "");
            System.out.println(" ==== CLIENTE nº" + contador + " ====");
            cliente.show();
            contador++;
        }
        Utilitys.pause();
    }

    private void editarCliente() {
        System.out.print("Digite o ID: ");
        int idBusca = sc.nextInt();
        sc.nextLine();

        Cliente cliente = buscarCliente(idBusca);

        if (cliente == null) {
            System.out.println("Cliente não encontrado!");
            Utilitys.pause();
            return;
        } else {
            System.out.println(" Cliente n°" + cliente.getId() + " selecionado com sucesso!!");
            cliente.show();
            Utilitys.pause();
        }

        int opcao;
        do {
            System.out.println("\n=== Editar Cliente " + cliente.getId() + " ===");
            System.out.println("[1] Alterar ID do Cliente"); 
            System.out.println("[2] Alterar Nome");
            System.out.println("[3] Alterar CPF");
            System.out.println("[4] Alterar E-mail");
            System.out.println("[5] Alterar Telefone");
            System.out.println("[6] Alterar Endereço");
            System.out.println("[7] Deletar Cliente");
            System.out.println("[0] Voltar");
            System.out.print("Escolha: ");
            opcao = sc.nextInt();
            sc.nextLine();

            switch (opcao) {
                case 1:
                    System.out.print("Novo ID do Cliente: ");
                    int novoIdC = sc.nextInt();
                    sc.nextLine();
                    cliente.alterarId(novoIdC);
                    break;

                case 2:
                    System.out.print("Novo Nome: ");
                    String novoN = sc.nextLine();
                    cliente.alterarNome(novoN);
                    break;

                case 3:
                    System.out.print("Novo CPF: ");
                    String novoCpf = sc.nextLine();
                    cliente.alterarCpf(novoCpf);
                    break;

                case 4:
                    System.out.print("Novo E-mail: ");
                    String novoEmail = sc.nextLine();
                    cliente.alterarEmail(novoEmail);
                    break;

                case 5:
                    System.out.print("Novo Telefone((84)98765-4321): ");
                    String novoTelefone = sc.nextLine();
                    cliente.alterarTelefone(novoTelefone);
                    break;

                case 6:
                    System.out.print("Novo endereço: ");
                    String novoEndereco = sc.nextLine();
                    cliente.alterarEndereco(novoEndereco);
                    break;

                case 7: 
                    cliente.delete();
                    cliente.show();
                    listaClientes.remove(cliente);
                    System.out.print(" ==== CLIENTE DELETADO COM SUCESSO ====");
                    Utilitys.pause();
                    opcao = 0;
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

    private Cliente buscarCliente(int idBusca) {
        for (Cliente cliente : listaClientes) {
            if (cliente.getId() == idBusca) {
                return cliente;
            }
        }
        return null;
    }
}
