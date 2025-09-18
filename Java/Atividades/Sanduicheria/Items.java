
public class Items {

    private String nome;
    private double preco;
    private int quantidade;
    private String categoria;
    private int id;

    public Items(String n, double preco, int Qtn, String categ, int ID) {
        this.nome = n;
        this.preco = preco;
        this.quantidade = Qtn;
        this.categoria = categ;
        this.id = ID;
    }

    public String getNome() {
        return nome;
    }

    public double getPreco() {
        return preco;
    }

    public int getQuantidade() {
        return quantidade;
    }

    public String getCategoria() {
        return categoria;
    }

    public int getId() {
        return id;
    }

    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    public void show() {
        System.out.println("Código: " + id);
        System.out.println("Valor: " + preco);
        System.out.println("Descrição: " + nome);
        System.out.println("Categoria: " + categoria);
    }
}
