public class Main {
	final int x = 4;
	public static void main(String[] args)
	{
		System.out.println("hello world");
		Main obj1 = new Main();
		Main obj2 = new Main();
		Person pObj1 = new Person();
		System.out.println(obj1.x);
		//obj1.x =34;
		System.out.println(obj1.x);
		System.out.println("My name is " + pObj1.name + " and my age is " + pObj1.age);
	}
}
class Person{
	int age = 19;
	String name = "Virendra";
	Person(){
		System.out.println("ja yar contructor called huo he");
	}
}