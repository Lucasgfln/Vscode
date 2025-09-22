public class MainGatoCachorro {
    public static void main(String[] args) {
        Cachorro cachorro = new Cachorro();
        Gato gato = new Gato();

        gato.setNome("Bichano");
        gato.setRaca("Frajola");
        cachorro.setNome("Aurora");
        cachorro.setRaca("PitBull American Terrier");


        System.out.println("Cachorro: \n" + cachorro.getNome() + "\n" + cachorro. getRaca());
        System.out.println("Gato: \n" + gato.getNome() + "\n" + gato.getRaca());
    }
}
