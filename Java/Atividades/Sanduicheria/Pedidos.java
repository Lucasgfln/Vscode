package Atividades.Sanduicheria;

public class Pedidos {
    private int idPedido;
    private int status;
    private int idCliente;
    private int idItem;
    private float valorFinal;
    private int foramPagamento;
    private String observacao;
    private int entrega;
    private String endereco;
    
    public int getIdPedido() {
        return idPedido;
    }
    public void setIdPedido(int idPedido) {
        this.idPedido = idPedido;
    }
    public int getStatus() {
        return status;
    }
    public void setStatus(int status) {
        this.status = status;
    }
    public int getIdCliente() {
        return idCliente;
    }
    public void setIdCliente(int idCliente) {
        this.idCliente = idCliente;
    }
    public int getIdItem() {
        return idItem;
    }
    public void setIdItem(int idItem) {
        this.idItem = idItem;
    }
    public float getValorFinal() {
        return valorFinal;
    }
    public void setValorFinal(float valorFinal) {
        this.valorFinal = valorFinal;
    }
    public int getForamPagamento() {
        return foramPagamento;
    }
    public void setForamPagamento(int foramPagamento) {
        this.foramPagamento = foramPagamento;
    }
    public String getObservacao() {
        return observacao;
    }
    public void setObservacao(String observacao) {
        this.observacao = observacao;
    }
    public int getEntrega() {
        return entrega;
    }
    public void setEntrega(int entrega) {
        this.entrega = entrega;
    }
    public String getEndereco() {
        return endereco;
    }
    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    
}
