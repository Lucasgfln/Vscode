public class Cliente {
	private String nome;
	private String cpf;
	private String email;
	private String telefone;
	private String endereco;

	public Cliente(String nome, String cpf, String email, String telefone, String endereco) {
		this.nome = nome;
		this.cpf = cpf;
		this.email = email;
		this.telefone = telefone;
		this.endereco = endereco;
	}

	public String getNome () {
		return nome;
	}
	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getCpf () {
		return cpf;
	}
	public void setCpf(String cpf) {
		this.cpf = cpf;
	}

	public String getEmail () {
		return email;
	}
	public void setEmail(String email) {
		this.email = email;
	}

	public String getTelefone () {
		return telefone;
	}
	public void setTelefone(String telefone) {
		this.telefone = telefone;
	}

	public String getEndereco () {
		return endereco;
	}
	public void setEndereco(String endereco) {
		this.endereco = endereco;
	}

	public void show() {
		System.out.println("Nome: " + nome);
		System.out.println("CPF: " + cpf);
		System.out.println("Email: " + email);
		System.out.println("Telefone: " + telefone);
		System.out.println("Endereço: " + endereco);
	}

	public void delete() {
		nome = null;
		cpf = null;
		email = null;
		telefone = null;
		endereco = null;
	}
}