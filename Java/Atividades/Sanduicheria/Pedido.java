public class Pedido {
    private int idPedido;
    private int status;
    private String nomeCliente;
    private String pedido;
    private float valorFinal;
    private int formaPagamento;
    private String observacao;
    private int entrega;
    private String endereco;

    public Pedido(int idPedido, int status, String nomeCliente, String pedido, float valorFinal, int foramPagamento, String observacao, int entrega, String endereco) {
        this.idPedido = idPedido;
        this.status = status;
        this.nomeCliente = nomeCliente;
        this.pedido = pedido;
        this.valorFinal = valorFinal;
        this.formaPagamento = foramPagamento;
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
    public String getNomeCliente() {
        return nomeCliente;
    }
    public void setNomeCliente(String nomeCliente) {
        this.nomeCliente = nomeCliente;
    }
    public String getPedido() {
        return pedido;
    }
    public void setPedido(String pedido) {
        this.pedido = pedido;
    }
    public float getValorFinal() {
        return valorFinal;
    }
    public void setValorFinal(float valorFinal) {
        this.valorFinal = valorFinal;
    }
    public int getForamPagamento() {
        return formaPagamento;
    }
    public void setForamPagamento(int foramPagamento) {
        this.formaPagamento = foramPagamento;
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
        System.out.print("Status: ");
        switch (status) {
            case 1:
                System.out.println("Em preparo");
                break;
            case 2:
                System.out.println("Pronto");
                break;
            case 0:
                System.out.println("Cancelado");
                break;
            default:
                System.out.println(" !!!! OPÇÃO ERRADA VIU !!!!");
                break;
        }
        System.out.println("Nome do(a) Cliente: " + nomeCliente);
        System.out.println("Pedido: " + pedido);
        System.out.println("Valor Final: R$" + valorFinal);
        System.out.print("Forma de Pagamento: ");
        switch (formaPagamento) {
            case 1:
                System.out.println("Pix");
                break;
            case 2:
                System.out.println("Espécie");
                break;
            case 3:
                System.out.println("Cartão Débito");
                break;
            case 4:
                System.out.println("Cartão Crédito");
                break;
            default:
                System.out.println(" !!!! OPÇÃO ERRADA VIU !!!!");
                break;
        }
        System.out.println("Observação: " + observacao);
        System.out.print("Para ");
        switch (entrega) {
            case 1:
                System.out.println("Entrega");
                break;
            case 2:
                System.out.println("Retirada");
                break;
            case 3:
                System.out.println("Mesa");
                break;
            default:
                System.out.println(" !!!! OPÇÃO ERRADA VIU !!!!");
                break;
        }
        System.out.println("Endereço: " + endereco);
    }

    public void delete() {
        idPedido = 0;
        status = 0;
        nomeCliente = null;
        pedido = null;
        valorFinal = 0;
        formaPagamento = 0;
        observacao = null;
        entrega = 0;
        endereco = null;
    }

    public void alterarIdPedido(int idPedido) {
        this.idPedido = idPedido;
    }
    public void alterarStatus(int status) {
        this.status = status;
    }
    public void alterarNomeCliente(String nomeCliente) {
        this.nomeCliente = nomeCliente;
    }
    public void alterarPedido(String pedido) {
        this.pedido = pedido;
    }
    public void alterarValorFinal(float valorFinal) {
        this.valorFinal = valorFinal;
    }
    public void alterarFormaPagamento(int formaPagamento) {
        this.formaPagamento = formaPagamento;
    }
    public void alterarObservacao(String observacao) {
        this.observacao = observacao;
    }
    public void alterarEntrega(int entrega) {
        this.entrega = entrega;

    }
    public void alterarEndereco(String endereco) {
        this.endereco = endereco;
    }
}
