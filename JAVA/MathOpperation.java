/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package Mathoperation;

/**
 *
 * @author Jibril
 */
public class MathOpperation {
    private double opperator1;
    private double opperator2;
    MathOpperation(double opperator1,double opperator2){
        if(opperator1 < 0){
            this.opperator1 = 0;
        }else if (opperator1 > 100){
            this.opperator1 = 100;
        }else{
            this.opperator1 =opperator1;
        }
       if(opperator2 < 0){
            this.opperator2 = 0;
        }else if (opperator2 > 100){
            this.opperator2 = 100;
        }else{
            this.opperator2 =opperator2; 
        }
    }
    public double Add(){
        double ans = this.opperator1 + this.opperator2;
        return ans;
    }
    public double sub(){
        double ans = 0.0;
       if(opperator2 > opperator1){
            System.out.println("You can not subtract a large opperator from a smaller opperator");
       }else{
            ans = this.opperator1 - this.opperator2;
       }
       return ans;
    }
    public double Mull (){
        double ans = this.opperator1 * this.opperator2;
        return ans;
    }
    public double Div (){
        double ans = this.opperator1 / this.opperator2;
        return ans;
    }
}
    
    

