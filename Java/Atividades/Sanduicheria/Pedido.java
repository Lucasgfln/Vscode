public class Pedido {
    private int idPedido;
    private int status;
    private int idCliente;
    private int idItem;
    private float valorFinal;
    private int foramPagamento;
    private String observacao;
    private int entrega;
    private String endereco;

    public Pedido(int idPedido, int status, int idCliente, int idItem, float valorFinal, int foramPagamento, String observacao, int entrega, String endereco) {
        this.idPedido = idPedido;
        this.status = status;
        this.idCliente = idCliente;
        this.idItem = idItem;
        this.valorFinal = valorFinal;
        this.foramPagamento = foramPagamento;
        this.observacao = observacao;
        this.entrega = entrega;
        this.endereco = endereco;
    }
    
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

    public void show() {
        System.out.println("ID do Pedido: " + idPedido);
        System.out.println("Status: " + status);
        System.out.println("ID do Cliente: " + idCliente);
        System.out.println("ID do Item: " + idItem);
        System.out.println("Valor Final: " + valorFinal);
        System.out.println("Forma de Pagamento: " + foramPagamento);
        System.out.println("Observação: " + observacao);
        System.out.println("Entrega: " + entrega);
        System.out.println("Endereço: " + endereco);
    }

    public void delete() {
        idPedido = 0;
        status = 0;
        idCliente = 0;
        idItem = 0;
        valorFinal = 0;
        foramPagamento = 0;
        observacao = null;
        entrega = 0;
        endereco = null;
    }
}
