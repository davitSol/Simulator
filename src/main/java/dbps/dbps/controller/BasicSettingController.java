package dbps.dbps.controller;


import dbps.dbps.service.MainService;
import javafx.fxml.FXML;
import javafx.scene.control.ChoiceBox;
import javafx.scene.layout.Pane;
import static dbps.dbps.Constants.isAscii;

public class BasicSettingController {
    @FXML
    public Pane basicPane;

    MainService mainService;
    @FXML
    public ChoiceBox<String> protocolFormat;
    @FXML
    public void initialize() {
        mainService = MainService.getInstance();
        protocolFormat.valueProperty().addListener((observable, oldValue, newValue) -> {
            if (newValue.equals("아스키 프로토콜")) {
                mainService.showASCiiMsgTab();
                isAscii = true;
            } else if (newValue.equals("헥사 프로토콜")) {
                mainService.showHEXMsgTab();
                isAscii = false;
            }
        });

        if (protocolFormat.getValue().equals("아스키 프로토콜")) {
            isAscii = true;
        } else if (protocolFormat.getValue().equals("헥사 프로토콜")) {
            isAscii = false;
        }


    }
}
