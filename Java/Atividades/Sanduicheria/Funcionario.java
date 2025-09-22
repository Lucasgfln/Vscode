public class Funcionario {
    private String nome;
    private String cpf;
    private String email;
    private int idade;
    private String endereço;
    private boolean ativo;
    private String cargo;
    private double salario;

    public Funcionario(String nome, String cpf, String email, int idade, String endereço, boolean ativo, String cargo, double salario) {
        this.nome = nome;
        this.cpf = cpf;
        this.email = email;
        this.idade = idade;
        this.endereço = endereço;
        this.ativo = ativo;
        this.cargo = cargo;
        this.salario = salario;
    }
    
    public String getNome(){
    return nome;
    }
    
    public void setNome(String nome){
        this.nome = nome;
    }

    public String getCpf() {
        return cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public String getEndereço() {
        return endereço;
    }

    public void setEndereço(String endereço) {
        this.endereço = endereço;
    }

    public boolean isAtivo() {
        return ativo;
    }

    public void setAtivo(boolean ativo) {
        this.ativo = ativo;
    }

    public String getCargo() {
        return cargo;
    }

    public void setCargo(String cargo) {
        this.cargo = cargo;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }
    
    public void show() {
        System.out.println("Nome: " + nome);
        System.out.println("CPF: " + cpf);
        System.out.println("Email: " + email);
        System.out.println("Idade: " + idade);
        System.out.println("Endereço: " + endereço);
        System.out.println("Ativo: " + ativo);
        System.out.println("Cargo: " + cargo);
        System.out.println("Salário: R$" + salario);
    }

    public void delete() {
        nome = null;
        cpf = null;
        email = null;
        idade = 0;
        endereço = null;
        ativo = false;
        cargo = null;
        salario = 0.0;
    }
}
