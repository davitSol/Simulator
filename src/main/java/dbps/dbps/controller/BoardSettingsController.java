package dbps.dbps.controller;

import dbps.dbps.Simulator;
import dbps.dbps.service.AsciiMsgTransceiver;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Node;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.ComboBox;
import javafx.scene.control.RadioButton;
import javafx.scene.control.ToggleGroup;
import javafx.scene.input.MouseEvent;
import javafx.scene.layout.AnchorPane;
import javafx.scene.layout.Pane;
import javafx.stage.Modality;
import javafx.stage.Stage;

import java.io.IOException;

public class BoardSettingsController {
    @FXML
    public RadioButton settingRadio;

    @FXML
    public RadioButton readRadio;

    @FXML
    public Pane boardDisable;
    @FXML
    public AnchorPane boardAP;
    @FXML
    public ComboBox<String> debugMethod;
    @FXML
    public ComboBox<String> BH1_Func;
    @FXML
    public ComboBox<String> J4_func;
    @FXML
    public ComboBox<String> J2_baud;
    @FXML
    public ComboBox<String> J3_baud;
    @FXML
    public ComboBox<String> BH1_baud;
    AsciiMsgTransceiver asciiMsgTransceiver;

    ToggleGroup group = new ToggleGroup();
    @FXML
    public void initialize() {
        settingRadio.setToggleGroup(group);
        readRadio.setToggleGroup(group);
        readRadio.setSelected(true);

        group.selectedToggleProperty().addListener((observable, oldValue, newValue) -> {
            if (group.getSelectedToggle() == settingRadio) {
                //3~8까지 활성화
                boardDisable.getChildren().forEach(node -> {
                    node.setDisable(false);
                });
            } else {
                //3~8까지 비활성화
                boardDisable.getChildren().forEach(node -> {
                    node.setDisable(true);
                });
            }
        });

        boardAP.getStylesheets().add(Simulator.class.getResource("/dbps/dbps/css/boardsetting.css").toExternalForm());
        asciiMsgTransceiver = AsciiMsgTransceiver.getInstance();
    }

    @FXML
    public void openCommunicationSetting(MouseEvent mouseEvent) throws IOException {
        FXMLLoader fxmlLoader = new FXMLLoader(Simulator.class.getResource("/dbps/dbps/fxmls/boardSettings.fxml"));
        Parent root = fxmlLoader.load();

        Stage modalStage = new Stage();
        modalStage.setTitle("통신 설정");

        modalStage.initModality(Modality.APPLICATION_MODAL);

        Stage parentStage = (Stage) ((Node) mouseEvent.getSource()).getScene().getWindow();
        modalStage.initOwner(parentStage);

        Scene scene = new Scene(root);
        modalStage.setScene(scene);
        modalStage.setResizable(false);

        modalStage.showAndWait();
    }
    @FXML
    public void closeWindow(MouseEvent mouseEvent) {
        Stage stage = (Stage) ((Node) mouseEvent.getSource()).getScene().getWindow();
        stage.close();
    }

    public void Transfer() {
        if(group.getSelectedToggle().equals(readRadio)){
            asciiMsgTransceiver.sendMessages("![00B30!]");
        }
        else {
            String msg = "![00B2 ";
            String debug = debugMethod.getValue();
            String BH1_F = BH1_Func.getValue();
            String J4 = J4_func.getValue();
            String J2 = J2_baud.getValue();
            String J3 = J3_baud.getValue();
            String BH1_B = BH1_baud.getValue();
            if (debug.equals("disable")){
                msg+="0,";
            }
            else {
                msg+=debug.replaceAll("[^0-9]", "");
            }

            if (BH1_F.equals("TTL/RS485")){
                msg+="0,";
            } else if (BH1_F.equals("CAN")) {
                msg+="1,";
            } else if (BH1_F.equals("12C")) {
                msg+="2,";
            } else if (BH1_F.equals("SPI")) {
                msg+="3,";
            } else if (BH1_F.equals("8Pin Input(HEX)")) {
                msg+="4,";
            } else if (BH1_F.equals("8Pin Input(BCD)")) {
                msg+="5,";
            } else if (BH1_F.equals("8Pin Input(Number)")) {
                msg+="6,";
            } else if (BH1_F.equals("8Pin Input(BitBGSch)")) {
                msg+="7,";
            }

            if (J4.equals("Relay Out")) {
                msg += "0,";
            } else if (J4.equals("CDS")) {
                msg += "1,";
            } else if (J4.equals("DHT22(ONLY NoLAN)")) {
                msg += "2,";
            } else if (J4.equals("DS1302")) {
                msg += "3,";
            } else if (J4.equals("SHT31(DB502)")) {
                msg += "4,";
            } else if (J4.equals("2Port Input")) {
                msg += "5,";
            } else if (J4.equals("Relay Out & NoRTC")) {
                msg += "6,";
            } else if (J4.equals("Relay 4Port")) {
                msg += "7,";
            }
            String[] baudRates = {"9600", "19200", "38400", "57600", "115200", "230400", "460800", "921600"};
            int index = java.util.Arrays.asList(baudRates).indexOf(J2);
            if (index != -1) {
                msg += index + ",";
            }

            index = java.util.Arrays.asList(baudRates).indexOf(J3);
            if (index != -1) {
                msg += index + ",";
            }

            index = java.util.Arrays.asList(baudRates).indexOf(BH1_B);
            if (index != -1) {
                msg += index + ",";
            }

            msg+="!]";
            asciiMsgTransceiver.sendMessages(msg);
        }



    }
}
