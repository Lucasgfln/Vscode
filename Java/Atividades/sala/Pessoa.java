package Atividades.sala;

public class Pessoa {
    private int cpf;
    private String nome;
    private int idade;

    public void setCPF (int c){
        cpf = c;
    }
    public int getCPF(){
        return cpf;
    }

    public void setNome (String n){
        nome = n;
    }
    public String geNome(){
        return nome;
    }

    public void setIdade (int i){
        idade = i;
    }
    public int getIdade(){
        return idade;
    }

    public void exibir(){
        System.out.println("========= V A L O R E S =========");
        System.out.println("CPF: " + cpf);
        System.out.println("Nome: " + nome);
        System.out.println("Idade: " + idade);
    }
}
