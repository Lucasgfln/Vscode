/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package projeto;

/**
 *
 * @author 1037100
 */
public class Carros {
    
    private String placa;
    private String modelo;
    private String tipo;
    private double valor;

    public String getPlaca() {
        return placa;
    }

    public void setPlaca(String placa) {
        this.placa = placa;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public double getValor() {
        return valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }
    
    public String show(){
        System.out.println("======== V E Í C U L O ========");
        return "placa: "+placa+"\nmodelo: "+modelo+"\ntipo: "+tipo+
                "\nvalor"+valor;
                
    }
    
    
}
