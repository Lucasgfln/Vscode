/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package projeto;


public class Principal {
    
    public static void main(String[] args) {
        
        Carros c = new Carros();
        c.setPlaca("qsd-8877");
        c.setModelo("Uno");
        c.setTipo("fiat");
        c.setValor(30000);
        
        System.out.println(c.show());

        Produto abacaxi = new Produto();
        abacaxi.setCodigo(321456);
        abacaxi.setValor(5);
        abacaxi.setDescricao("Abacaxi: Uma Fruta Deliciosa!!");
        abacaxi.setValidade("29/09/2025");

        abacaxi.show();
        abacaxi.delete();
        abacaxi.show();
        
    }
    
}
