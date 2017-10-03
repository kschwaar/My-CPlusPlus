//

public class mySphere{
	public static void main (String[]args){
		double delta1 = 2*Math.PI/30;
		double delta2 = Math.PI/30;
		double x1,y1,z1;
		double x2,y2,z2;
		double x3,y3,z3;
		double x4,y4,z4;
		
		for(double phi = 0.0; phi<Math.PI; phi+=delta2){
			for(double theta = 0.0; theta<2*Math.PI; theta = theta +delta1){
				x1 = Math.sin(theta)*Math.sin(phi);
				y1 = Math.cos(theta)*Math.sin(phi);
				z1 = Math.cos(phi);
				x2 = Math.sin(theta+delta1)*Math.sin(phi);
				y2 = Math.cos(theta+delta1)*Math.sin(phi);
				z2 = Math.cos(phi);
				x3 = Math.sin(theta)*Math.sin(phi+delta2);
				y3 = Math.cos(theta)*Math.sin(phi+delta2);
				z3 = Math.cos(phi+delta2);
				x4 = Math.sin(theta+delta1)*Math.sin(phi+delta2);
				y4 = Math.cos(theta+delta1)*Math.sin(phi+delta2);
				z4 = Math.cos(phi+delta2);
				System.out.printf("Quad(%1.4f,%1.4f,%1.4f,",x1,y1,z1);
				System.out.printf("%1.4f,%1.4f,%1.4f,",x2,y2,z2);
				System.out.printf("%1.4f,%1.4f,%1.4f,",x3,y3,z3);
				System.out.printf("%1.4f,%1.4f,%1.4f)\n",x4,y4,z4);
			}
		}
	}
}