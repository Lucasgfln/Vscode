/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.



    Faça um software para uma loja de venda de carros
    para tanto é necessário guardar as informações placa,
    modelo, tipo e valor do carro. É necessário mostrar
    todas as informações do carro através de um único método


 */
package projeto;

public class Produto {
    
    private int codigo;
    private double valor;
    private String descricao;
    private String validade;

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public String getValidade() {
        return validade;
    }

    public void setValidade(String validade) {
        this.validade = validade;
    }
    
    public void show(){
        System.out.println("======== P R O D U T O ========");
        System.out.println("Código: "+codigo);
        System.out.println("Valor: R$"+valor);
        System.out.println("Descrição: "+descricao);
        System.out.println("Validade: "+validade);
    }
    
    public void delete(){
        codigo = 0;
        valor = 0;
        descricao = null;
        validade = null;
    }
    
}
