package q3;

public class Novo extends Imovel{
    private double adicional;

    public double getAdicional() {
        return adicional;
    }

    public void setAdicional(double adicional) {
        this.adicional = adicional;
    }


    public void imprime() {
        System.out.println("Valor adicional: R$" + adicional);
    }
}
