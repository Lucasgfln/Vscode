package Atividades.sala;

import java.util.Scanner;

public class Teste {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.print("Digite Seu CPF: ");
        int cpf = leitor.nextInt();
        System.out.print("Digite Seu Nome: ");
        String nome = leitor.next();
        System.out.print("Digite Seu Idade: ");
        int idade = leitor.nextInt();

        Pessoa p = new Pessoa();

        p.setCPF(cpf);
        p.setNome(nome);
        p.setIdade(idade);
        
        p.exibir();

        leitor.close();
        
    }
}
