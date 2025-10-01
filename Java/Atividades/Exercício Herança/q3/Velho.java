package q3;

public class Velho extends Imovel{
    private double desconto;

    public double getDesconto() {
        return desconto;
    }

    public void setDesconto(double desconto) {
        this.desconto = desconto;
    }

    public void imprime() {
        System.out.println("Valor do Desconto: R$" + desconto);
    }
}
