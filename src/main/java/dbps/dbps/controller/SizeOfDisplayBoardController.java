package dbps.dbps.controller;

import dbps.dbps.Simulator;
import javafx.fxml.FXML;
import javafx.scene.control.CheckBox;
import javafx.scene.control.ChoiceBox;
import javafx.scene.control.Spinner;
import javafx.scene.control.SpinnerValueFactory;
import javafx.scene.layout.Pane;

public class SizeOfDisplayBoardController {

    @FXML
    public CheckBox arrayChk;

    @FXML
    public ChoiceBox<String> howToArray;

    @FXML
    public Pane dpPane;

    @FXML
    private Spinner<Integer> spinnerForRow;

    @FXML
    private Spinner<Integer> spinnerForColumn;


    @FXML
    public void initialize(){
        dpPane.getStylesheets().add(Simulator.class.getResource("/dbps/dbps/css/sizeOfDisplayBoard.css").toExternalForm());

        SpinnerValueFactory<Integer> valueFactoryForRow = new SpinnerValueFactory.IntegerSpinnerValueFactory(1, 99, 6);
        SpinnerValueFactory<Integer> valueFactoryForColumn = new SpinnerValueFactory.IntegerSpinnerValueFactory(1, 99, 2);

        spinnerForRow.setValueFactory(valueFactoryForRow);
        spinnerForColumn.setValueFactory(valueFactoryForColumn);

        spinnerForColumn.setEditable(true);
        spinnerForRow.setEditable(true);


        arrayChk.selectedProperty().addListener((observable, oldValue, newValue) -> {
            if(newValue){
                howToArray.setDisable(false);
            }else{
                howToArray.setDisable(true);
            }
        });
    }
}
