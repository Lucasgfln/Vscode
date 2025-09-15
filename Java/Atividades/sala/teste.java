package Atividades.sala;

import java.util.Scanner;

public class Teste {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        System.out.println("Digite Seu CPF: ");
        int cpf = leitor.nextInt();
        System.out.println("Digite Seu Nome: ");
        String nome = leitor.next();
        System.out.println("Digite Seu Idade: ");
        int idade = leitor.nextInt();        
    }
}
