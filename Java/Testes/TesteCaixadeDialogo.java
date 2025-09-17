package Testes;

import javax.swing.JOptionPane;

public class TesteCaixadeDialogo {
    public static void main(String[] args) {
        int recebe = JOptionPane.showConfirmDialog(null,"Fechar app?");

        switch (recebe) {
            case 0:
                JOptionPane.showMessageDialog(null,"Você Respondeu Sim!!");               
                break;
            case 1:
                JOptionPane.showMessageDialog(null,"Você Respondeu Não!!");               
                break;
            case 2:
                JOptionPane.showMessageDialog(null,"Você Respondeu Cancelar!!");               
                break;
        
            default:
                break;
        }
    }
}
