import javax.swing.*;
import java.awt.*;

public class app {

    public static void main(String[] args) {

        JFrame frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500, 500);

        GridBagLayout layout = new GridBagLayout();
        frame.setLayout(layout);

        JLabel nameLabel = new JLabel("Name:");
        JTextField nameTextField = new JTextField(20);

        GridBagConstraints gridBagConstraints = new GridBagConstraints();
        gridBagConstraints.gridx = 0;
        gridBagConstraints.gridy = 0;
        frame.add(nameLabel, gridBagConstraints);

        GridBagConstraints gridBagConstraints2 = new GridBagConstraints();
        gridBagConstraints2.gridx = 1;
        gridBagConstraints2.gridy = 0;
        frame.add(nameTextField, gridBagConstraints2);

        JLabel rollLabel = new JLabel("Roll no:");
        JTextField rollTextField = new JTextField(20);

        GridBagConstraints gridBagConstraints3 = new GridBagConstraints();
        gridBagConstraints3.gridx = 0;
        gridBagConstraints3.gridy = 1;
        frame.add(rollLabel, gridBagConstraints3);

        GridBagConstraints gridBagConstraints4 = new GridBagConstraints();
        gridBagConstraints4.gridx = 1;
        gridBagConstraints4.gridy = 1;
        frame.add(rollTextField, gridBagConstraints4);

        frame.setVisible(true);
    }
}