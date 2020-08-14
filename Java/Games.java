// Program to classify games as indoor and outdoor
class Game{
	String name;
	Game(String name){
		this.name = name;
	}
}
class Cricket extends Game{
	Cricket(){
		super("Cricket");
	}
	void type(){
		System.out.println(name + " is an outdoor game");
	}
}
class Chess extends Game{
	Chess(){
		super("Chess");
	}
	void type(){
		System.out.println(name + " is an indoor game");
	}
}
class Games{
	public static void main(String[] args){
		Chess g1 = new Chess();
		g1.type();
		Cricket g2 = new Cricket();
		g2.type();
	}
}