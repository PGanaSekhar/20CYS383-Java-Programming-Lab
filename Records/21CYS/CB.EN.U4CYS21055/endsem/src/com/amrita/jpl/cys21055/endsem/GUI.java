package com.amrita.jpl.cys21055.endsem;

import javax.swing.*;
import javax.swing.table.DefaultTableModel;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.*;
import java.util.ArrayList;

/**
 * @author Penugonda V S Ganasekhar
 * @version 0.2
 */

/**
 * File class
 */

abstract class File {
    private String fileName;
    private long fileSize;

    public File(String fileName, long fileSize) {
        this.fileName = fileName;
        this.fileSize = fileSize;
    }

    public String getFileName() {
        return fileName;
    }

    public long getFileSize() {
        return fileSize;
    }
}

/**
 * Document Class
 */

class Document extends File {
    private String documentType;

    public Document(String fileName, long fileSize, String documentType) {
        super(fileName, fileSize);
        this.documentType = documentType;
    }

    public String getDocumentType() {
        return documentType;
    }
}

/**
 * Image Class
 */

class Image extends File {
    private String resolution;

    public Image(String fileName, long fileSize, String resolution) {
        super(fileName, fileSize);
        this.resolution = resolution;
    }

    public String getResolution() {
        return resolution;
    }
}

class Video extends File {
    private String duration;

    public Video(String fileName, long fileSize, String duration) {
        super(fileName, fileSize);
        this.duration = duration;
    }

    public String getDuration() {
        return duration;
    }
}

interface FileManager {
    void addFile(File file);
    void deleteFile(String fileName);
    ArrayList<File> getFiles();
}

abstract class FileManagerImpl implements FileManager {

    private ArrayList<File> files;
    public FileManagerImpl() {
        files = new ArrayList<>();
    }
    public void addFile(File file) {
        files.add(file);
    }
    public void deleteFile(String filename) {
        File del = null;
        for (File file : files) {
            if (file.getFileName() == filename) {
                del = file;
                break;
            }
            if (del != null) {
                files.remove(del);
            }
        }
    }

}

class FileManagementSystemUI {
    private JFrame frame;
    private JTextField name;
    private JTextField size;
    private JTextField resolution;
    private JTextField duration;
    private JTable fileTable;
    private DefaultTableModel tableModel;
    private FileManager fileManager;

    public FileManagementSystemUI() {
        fileManager = new FileManagerImpl() {
            @Override
            public ArrayList<File> getFiles() {
                return null;
            }
        };
        createUI();
    }

    private void createUI() {
        frame = new JFrame("21UCYS End Semester Assignment File Manager");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JPanel inputPanel = createInputPanel();
        JPanel filePanel = createFilePanel();
        JPanel buttonPanel = createButtonPanel();

        frame.getContentPane().setLayout(new BorderLayout());
        frame.getContentPane().add(inputPanel, BorderLayout.NORTH);
        frame.getContentPane().add(filePanel, BorderLayout.CENTER);
        frame.getContentPane().add(buttonPanel, BorderLayout.SOUTH);

        frame.pack();
        frame.setVisible(true);
    }

    private JPanel createInputPanel() {
        JPanel panel = new JPanel(new FlowLayout(FlowLayout.LEFT));

        JLabel namela = new JLabel("Name of the file:");
        name = new JTextField(10);
        JLabel sizela = new JLabel("Size of the File:");
        size = new JTextField(10);
        JLabel resolutionla = new JLabel("Resolution of the File:");
        resolution = new JTextField(10);
        JLabel durationla = new JLabel("Enter video duration:");
        duration = new JTextField(10);

        panel.add(namela);
        panel.add(name);
        panel.add(sizela);
        panel.add(size);
        panel.add(resolutionla);
        panel.add(resolution);
        panel.add(durationla);
        panel.add(duration);

        return panel;
    }

    private JPanel createFilePanel() {
        JPanel panel = new JPanel(new BorderLayout());

        tableModel = new DefaultTableModel(new Object[]{"File Name", "File Size", "File Type"}, 0);
        fileTable = new JTable(tableModel);
        JScrollPane scrollPane = new JScrollPane(fileTable);

        panel.add(scrollPane, BorderLayout.CENTER);

        return panel;
    }

    private JPanel createButtonPanel() {
        JPanel panel = new JPanel(new FlowLayout(FlowLayout.CENTER));

        JButton addButton = new JButton("Add File");
        addButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                addFile();
            }
        });

        JButton deleteButton = new JButton("Delete File");
        deleteButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                deleteFile();
            }
        });

        JButton refreshButton = new JButton("Refresh");

        panel.add(addButton);
        panel.add(deleteButton);
        panel.add(refreshButton);

        return panel;
    }

    private void addFile() {
        String fileName = name.getText();
        long fileSize = Long.parseLong(size.getText());
        String Resolution = resolution.getText();
        String Duration = duration.getText();

        if (!fileName.isEmpty() && !Resolution.isEmpty()) {
            if (!Duration.isEmpty()) {
                Video video = new Video(fileName, fileSize, Duration);
                fileManager.addFile(video);
            } else {
                if (Resolution.contains("/")) {
                    Image image = new Image(fileName, fileSize, Resolution);
                    fileManager.addFile(image);
                } else {
                    Document document = new Document(fileName, fileSize, Resolution);
                    fileManager.addFile(document);
                }
            }
            clearInputFields();
            updateFileTable();
        } else {
            JOptionPane.showMessageDialog(frame, "Please enter valid file details.");
        }
    }
    private void deleteFile() {
        int selectedRow = fileTable.getSelectedRow();
        if (selectedRow != -1) {
            String fileName = (String) tableModel.getValueAt(selectedRow, 0);
            fileManager.deleteFile(fileName);
            updateFileTable();
        } else {
            JOptionPane.showMessageDialog(frame, "Please select a file to delete.");
        }
    }
    private void clearInputFields() {
        name.setText("");
        size.setText("");
        resolution.setText("");
        duration.setText("");
    }

    private void updateFileTable() {
        tableModel.setRowCount(0);
        for (File file : fileManager.getFiles()) {
            tableModel.addRow(new Object[]{file.getFileName(), file.getFileSize()});
        }
    }
}

public class GUI {
    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new FileManagementSystemUI();
            }
        });
    }
}







