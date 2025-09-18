
public class Produto {

    private int id;
    private String nome;
    private double preco;
    private int quantidade;
    private String categoria;

    public Produto(int id, String nome, double preco, int quantidade, String categoria) {
        this.id = id;
        this.nome = nome;
        this.preco = preco;
        this.quantidade = quantidade;
        this.categoria = categoria;
    }

    public int getId() {
        return id;
    }
    public void setId(int id) {
        this.id = id;
    }


    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }


    public double getPreco() {
        return preco;
    }
    public void setPreco(double preco) {
        this.preco = preco;
    }


    public int getQuantidade() {
        return quantidade;
    }
    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }


    public String getCategoria() {
        return categoria;
    }
    public void setCategoria(String categoria) {
        this.categoria = categoria;
    }



    public void show() {
        System.out.println("Código: " + id);
        System.out.println("Valor: " + preco);
        System.out.println("Descrição: " + nome);
        System.out.println("Categoria: " + categoria);
        System.out.println("Quantidade: " + quantidade);
    }
    public void delete() {
        id = 0;
        nome = null;
        preco = 0;
        quantidade = 0;
        categoria = null;
    }

}
