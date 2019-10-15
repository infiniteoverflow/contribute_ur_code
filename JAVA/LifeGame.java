/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author dror
 */

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class LifeGame extends JApplet implements ActionListener {

    private Container c;
    private JTextArea displayBoard; // display board
    private JButton nextGeneration; // button to generate next generation
    private int x; // the length of the board
    private int y; // the width of the board
    private String[][] lifeStatus; // the info saver

    public void init() {// Applet init() method
        getXY(); // get the x and y
        randomLife(); // start with a random life and save it
        
        // set layout manager
        c = getContentPane();
        c.setLayout(new BorderLayout());

        // setup components
        displayBoard = new JTextArea();
        nextGeneration = new JButton("Next generation");
        nextGeneration.addActionListener(this);

        // add components to applet
        c.add(displayBoard, BorderLayout.CENTER);
        c.add(nextGeneration, BorderLayout.SOUTH);
        
        // set the font to make the size of the signes even
        displayBoard.setFont(new Font("monospaced", Font.PLAIN, 12));
        
        // display the random life
        displayLife();
    }
    
    // display the life using applet
    public void displayLife() {
        String output = "";
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                output += lifeStatus[i][j] + " ";
            }
            output += "\n";
        }
        // display the life using applet
        displayBoard.setText(output);
    }
    // happen when the button is clicked
    // implementation of ActionListener interface
    @Override
    public void actionPerformed(ActionEvent e) {
        // calculate the statu of the next generation
        generateNextGeneration();
        
        // display the new generation
        displayLife();
    }
    
    // take a random number x * y times and create the random placement
    public void randomLife() {
        int rnd;
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                rnd = (int) (Math.random() * 2);
                if (rnd == 0) {
                    lifeStatus[i][j] = "-";
                } else {
                    lifeStatus[i][j] = "+";
                }
            }
        }
    }
    
    // generate a new generation
    public void generateNextGeneration() {
        boolean stati = true; // used to check if something changed
        String[][] nextGeneration = new String[y][x];
        int counter;
        for (int i = 0; i < y; i++) {
            for (int j = 0; j < x; j++) {
                counter = countNeighbors(i, j); // count living neighbors
                // if the value is non life
                if (lifeStatus[i][j].equals("-")) {
                    // check updates depends on the game rules
                    if (counter == 3) {
                        nextGeneration[i][j] = "+";
                        stati = false;
                    } else {
                        nextGeneration[i][j] = lifeStatus[i][j];
                    }
                // if the value is alive
                } else {
                    counter--; // don't count yourself
                    // check updates depends on the game rules
                    if (counter < 2 || counter > 3) {
                        nextGeneration[i][j] = "-";
                        stati = false;
                    } else {
                        nextGeneration[i][j] = lifeStatus[i][j];
                    }
                }
            }
        }
        lifeStatus = nextGeneration;
        
        if (stati) { // if nothing have changed
            int go;
            go = JOptionPane.showConfirmDialog(null, "Do you want to start again?", "The game is static", JOptionPane.YES_NO_OPTION);
            if (go == JOptionPane.YES_OPTION) { // ask if you want to start again
                getXY(); // get a new size
                randomLife(); // generate random life
            }
        }
    }
    
    // count living neighbors
    public int countNeighbors(int y2, int x2) {
        int counter = 0;
        for (int i = y2 - 1; i < y2 + 2; i++) {
            for (int j = x2 - 1; j < x2 + 2; j++) {
                try { // if the values are inside the matrix
                    if (lifeStatus[i][j].equals("+")) {
                        counter++;
                    }
                } catch (IndexOutOfBoundsException e) {
                }
            }
        }
        return counter;
    }
    
    // get the x and y values
    public void getXY(){
        while (true) {
            try { // check if the values are ok
                x = Integer.parseInt(JOptionPane.showInputDialog("Give x"));
                y = Integer.parseInt(JOptionPane.showInputDialog("Give y"));
                if(x>-1 && y>-1)
                {
                    break;
                }                
            } catch (NumberFormatException e) {
            }
        }
        lifeStatus = new String[y][x]; // create tne new life status
    }

}