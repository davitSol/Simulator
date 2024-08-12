//---------------------------------------------------------------------------

#ifndef TFormMainH
#define TFormMainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "CPort.hpp"
#include "te_controls.hpp"
#include "TntComCtrls.hpp"
#include "TntStdCtrls.hpp"
#include <ComCtrls.hpp>
#include "Protocol.h"
#include "TFormMessage.h"
#include "TFormTransfer.h"
#include "TDataModuleClient.h"
#include "TFormASCIISet.h"
#include "TFormSetting.h"
#include "TFormETC.h"
#include "TFormLog.h"
#include "TFormDABITNet.h"
#include "TFormDABITOption.h"
#include <IdAntiFreeze.hpp>
#include <IdAntiFreezeBase.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdDNSResolver.hpp>
#include <IdIcmpClient.hpp>
#include <IdRawBase.hpp>
#include <IdRawClient.hpp>
#include <IdUDPBase.hpp>
#include <IdUDPClient.hpp>
#include <ScktComp.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include "TntButtons.hpp"
#include "TntExtCtrls.hpp"
#include <Buttons.hpp>
#include <IdUDPServer.hpp>
#include <Dialogs.hpp>
#include "SUIURLLabel.hpp"
#include "HanConvert.hpp"
#include <AppEvnts.hpp>
#include "MMTimer.hpp"
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
        TPanel *pnMainDivide;
        TTntBitBtn *BitBtnExit;
        TTePanel *ToolbarMain;
        TTeSpeedButton *NComPort;
        TTntPanel *TntPanel1;
        TsuiURLLabel *suiURLLabel1;
        TTePanel *ToobarSub;
        TsuiURLLabel *suiURLLabel2;
        TComPort *ComPort1;
        TIdDNSResolver *IdDNSResolver;
        TIdIcmpClient *IdIcmpClient1;
        TIdAntiFreeze *IdAntiFreeze1;
        TIdUDPClient *IdUDPClient;
        TIdUDPServer *IdUDPServer;
        TOpenDialog *OpenDialog;
        TServerSocket *ServerSocket1;
        TTimer *PreviewButtonTimer;
        THanConvert *HanConvert;
        TApplicationEvents *ApplicationEvents1;
        TTntPanel *pnMain;
        TTntPanel *pnCaption;
        TTntPanel *pnBorderIcon;
        TTntSpeedButton *btnHide;
        TTntSpeedButton *btnMax;
        TTntSpeedButton *btnExit;
        TTntPanel *pnLogo;
        TTntSpeedButton *btnLogo;
        TTntPanel *tnEnv;
        TTntLabel *Label21;
        TTntLabel *Label20;
        TTntLabel *Label18;
        TTntLabel *Label17;
        TTntLabel *Label15;
        TTntLabel *Label13;
        TTntLabel *Label24;
        TTntLabel *Label23;
        TTntLabel *Label16;
        TTntLabel *Label14;
        TTntLabel *Label12;
        TTntLabel *Label11;
        TTntLabel *Label10;
        TTntLabel *Label9;
        TTntLabel *Label8;
        TTntLabel *Label7;
        TTntLabel *Label6;
        TTntLabel *Label5;
        TTntLabel *Label4;
        TTntLabel *Label3;
        TTntLabel *Label2;
        TTntLabel *Label1;
        TTntLabel *Label19;
        TTntSplitter *TntSplitter1;
        TTntComboBox *cbFontKind;
        TTntRichEdit *eBGColor;
        TTntComboBox *cbBGImage;
        TTntComboBox *cbEndYPos;
        TTntComboBox *cbEndXPos;
        TTntComboBox *cbStartYPos;
        TTntComboBox *cbStartXPos;
        TTntComboBox *cbDelay;
        TTntComboBox *cbSpeed;
        TTntComboBox *cbAssistEffect;
        TTntComboBox *cbLasDirect;
        TTntComboBox *cbLasEffect;
        TTntComboBox *cbEntEffect;
        TTntComboBox *cbEntDirect;
        TTntComboBox *cbFontSize;
        TTntComboBox *cbCodeKind;
        TTntComboBox *cbDispType;
        TTntComboBox *cbDispControl;
        TTntComboBox *cbPageNo;
        TTntPanel *pnSpeedButtonPreview;
        TTntSpeedButton *SpeedButtonPreview;
        TTntPanel *tnSignAddr;
        TTntLabel *TntLabel9;
        TTntLabel *TntLabel8;
        TTntLabel *laAddress;
        TTntComboBox *cbWaitTime;
        TTntComboBox *cbDIBDAddress;
        TTntPanel *pntsButton;
        TTntPanel *tnASCIIMessage;
        TTntLabel *TntLabel4;
        TTntLabel *TntLabel7;
        TTntLabel *laDefault;
        TTntBitBtn *btnAdd;
        TTntBitBtn *btnDelete;
        TTntListBox *lbMesageList;
        TTntPanel *pnbtnSave1;
        TTntSpeedButton *btnSave1;
        TTntPanel *pnbtnSave2;
        TTntSpeedButton *btnSave2;
        TTntPanel *pnbtnSave3;
        TTntSpeedButton *btnSave3;
        TTntPanel *pnbtnSave4;
        TTntSpeedButton *btnSave4;
        TTntPanel *pnbtnSave5;
        TTntSpeedButton *btnSave5;
        TTntPanel *pnbtnSave6;
        TTntSpeedButton *btnSave6;
        TTntPanel *pnbtnSave7;
        TTntSpeedButton *btnSave7;
        TTntPanel *pnbtnSave8;
        TTntSpeedButton *btnSave8;
        TTntPanel *pnbtnSave9;
        TTntSpeedButton *btnSave9;
        TTntPanel *pnSBASCIIPreview;
        TTntSpeedButton *SBASCIIPreview;
        TTntPanel *pnBtnFactoryReset;
        TTntSpeedButton *BtnFactoryReset;
        TTntPanel *pnASCIISend1;
        TTntSpeedButton *ASCIISend1;
        TTntPanel *pnASCIISend2;
        TTntSpeedButton *ASCIISend2;
        TTntPanel *pnASCIISend3;
        TTntSpeedButton *ASCIISend3;
        TTntPanel *pnASCIISend4;
        TTntSpeedButton *ASCIISend4;
        TTntPanel *pnASCIISend5;
        TTntSpeedButton *ASCIISend5;
        TTntPanel *pnASCIISend6;
        TTntSpeedButton *ASCIISend6;
        TTntPanel *pnASCIISend7;
        TTntSpeedButton *ASCIISend7;
        TTntPanel *pnASCIISend8;
        TTntSpeedButton *ASCIISend8;
        TTntPanel *pnASCIISend9;
        TTntSpeedButton *ASCIISend9;
        TTntPanel *pnDivide;
        TTntPanel *rgPageNo;
        TTntPanel *pnPageNo;
        TTntRadioButton *rbPageNo1;
        TTntRadioButton *rbPageNo2;
        TTntPanel *rbTextNo;
        TTntPanel *pnTextNo;
        TTntRadioButton *rbNo1;
        TTntRadioButton *rbNo2;
        TTntRadioButton *rbNo3;
        TTntPanel *pnASCII;
        TTntSpeedButton *tsASCIIMessage;
        TTntSpeedButton *tsEnv;
        TTntPanel *pnDataSend;
        TTntSpeedButton *DataSend;
        TTntRichEdit *eColor;
        TTntRichEdit *eData;
        TTntPanel *tnInfor;
        TTntPanel *pnTapInfor;
        TTntSpeedButton *tsInfor;
        TPanel *pnLog;
        TRichEdit *RichEditLog;
        TTntPanel *pnLogCaption;
        TTntPanel *pnBtnLogButton;
        TTntSpeedButton *BtnLogClear;
        TTntPanel *pnICON;
        TTntSpeedButton *btnSetup;
        TTntSpeedButton *btnHelp;
        TTntPanel *pnBtnMsgErase;
        TTntSpeedButton *BtnMsgErase;
        TTntPanel *tnSpecial;
        TLabel *Label25;
        TTntPanel *gbMemInput;
        TTntPanel *pnMemInput;
        TTntPanel *pnBtnMemInput;
        TTntSpeedButton *BtnMemInput;
        TTntComboBox *cbMsgInput;
        TTntPanel *pnBitBtnPowerLEDOn;
        TTntSpeedButton *BitBtnPowerLEDOn;
        TTntPanel *pnBitBtnPowerLEDOff;
        TTntSpeedButton *BitBtnPowerLEDOff;
        TTntPanel *pnBtnTimeRead;
        TTntSpeedButton *BtnTimeRead;
        TTntPanel *pnBtnTimeSet;
        TTntSpeedButton *BtnTimeSet;
        TTntPanel *pnBtnFReset;
        TTntSpeedButton *BtnFReset;
        TTntPanel *gbBGImage;
        TTntPanel *pnBGImage;
        TTntPanel *gbSync;
        TTntPanel *pnSync;
        TTeLabel *SLabel1;
        TTeLabel *SLabel2;
        TTntComboBox *cbSoundSec1;
        TTntComboBox *cbSoundSec2;
        TTntPanel *pnBtnSendSync;
        TTntSpeedButton *BtnSendSync;
        TTntPanel *gbBright;
        TTntPanel *pnBright;
        TTntPanel *lapnBGImage;
        TTntPanel *lapnBright;
        TTntPanel *laSync;
        TTntPanel *laMemInput;
        TTntPanel *pnSpecial;
        TTntSpeedButton *tsSpecial;
        TTntPanel *pnBtnLog;
        TTntSpeedButton *BtnLog;
        TTntPanel *laSignSize;
        TTntPanel *gbSignSize;
        TTntPanel *pnSignSize;
        TTntLabel *TntLabel6;
        TTntLabel *TntLabel5;
        TTntLabel *TntLabel3;
        TTntLabel *TntLabel2;
        TTntLabel *TntLabel11;
        TTntLabel *TntLabel10;
        TTntLabel *TntLabel1;
        TTntPanel *pnBtnSignSize;
        TTntSpeedButton *BtnSignSize;
        TTntComboBox *cbProgramType;
        TTntComboBox *cbDirection;
        TTntCheckBox *cbDirectCheck;
        TTntUpDown *UpDownWidth;
        TTntUpDown *UpDownHeight;
        TTntEdit *TntEdit2;
        TTntEdit *TntEdit1;
        TTntPanel *gbSettings;
        TTntPanel *pnSettings;
        TTntPanel *laSettings;
        TTntPanel *pnBtnLEDSetting;
        TTntSpeedButton *BtnLEDSetting2;
        TTntPanel *pnBtnFontSend;
        TTntSpeedButton *BtnFontSend2;
        TTntPanel *pnBtnETC;
        TTntSpeedButton *BtnETC;
        TTntPanel *pnBtnDIBDDownload;
        TTntSpeedButton *BtnDIBDDownload2;
        TTntPanel *pnBtnDABITOption;
        TTntSpeedButton *BtnDABITOption2;
        TTntPanel *gbProtocol;
        TTntPanel *pnProtocol;
        TTntRadioButton *rgASCII;
        TTntRadioButton *rgHex;
        TTntPanel *laProgram;
        TTntPanel *pnBtnApply;
        TTntSpeedButton *BtnApply;
        TTntPanel *pnASCIISend10;
        TTntSpeedButton *ASCIISend10;
        TTntPanel *pnbtnSave10;
        TTntSpeedButton *btnSave10;
        TTntComboBox *cbMsgMemClear;
        TTntPanel *pnDivide2;
        TTntPanel *pnBtnMsgMemClear;
        TTntSpeedButton *BtnMsgMemClear;
        TTntLabel *TntLabel12;
        TTntLabel *TntLabel13;
        TTntLabel *laScreen;
        TTntComboBox *cbScreen;
        TTntPanel *pnBtnScreen;
        TTntSpeedButton *BtnScreen;
        TTntPanel *pnBtnBGImage;
        TTntSpeedButton *BtnBGImage;
        TTntComboBox *cbBGISelect;
        TTntLabel *laBGImage;
        TTntPanel *pnBtnBright;
        TTntSpeedButton *BtnBright;
        TTntComboBox *cbBright;
        TTntLabel *laLanguage;
        TTntComboBox *cbLanguage;
        TTntPanel *pnBtnComPort;
        TTntSpeedButton *BtnComPort2;
        TTntLabel *laProtocol;
        TTntComboBox *cbProtocol;
        TTntLabel *laBright;
        TTeButton *BtnComPort;
        TTeButton *BtnFontSend;
        TTeButton *BtnLEDSetting;
        TTeButton *BtnDABITOption;
        TTeButton *BtnDIBDDownload;
        TTntRichEdit *mASCIIText1;
        TTntRichEdit *mASCIIText2;
        TTntRichEdit *mASCIIText3;
        TTntRichEdit *mASCIIText4;
        TTntRichEdit *mASCIIText5;
        TTntRichEdit *mASCIIText6;
        TTntRichEdit *mASCIIText7;
        TTntRichEdit *mASCIIText8;
        TTntRichEdit *mASCIIText9;
        TTntRichEdit *mASCIIText10;
        TTntLabel *laHelp;
        TTntLabel *laRealTime;
        TTntComboBox *cbRealTime;
        TTntPanel *pnBtnRealTime;
        TTntSpeedButton *BtnRealTime;
        TTntPanel *pnBtnPacketRead;
        TTntSpeedButton *BtnPacketRead;
        TTntComboBox *cbSoundSec3;
        TTntComboBox *cbSoundSec4;
        TTeLabel *SLabel4;
        TTeLabel *SLabel3;
        TTntPanel *pnBtnReset;
        TTntSpeedButton *BtnReset;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall BitBtnExitClick(TObject *Sender);
        void __fastcall ComPort1RxChar(TObject *Sender, int Count);
        void __fastcall FormCloseQuery(TObject *Sender, bool &CanClose);
        void __fastcall IdUDPClientStatus(TObject *ASender,
          const TIdStatus AStatus, const AnsiString AStatusText);
        void __fastcall IdUDPServerStatus(TObject *ASender,
          const TIdStatus AStatus, const AnsiString AStatusText);
        void __fastcall IdUDPServerUDPRead(TObject *Sender, TStream *AData,
          TIdSocketHandle *ABinding);
        void __fastcall cbEntEffectClick(TObject *Sender);
        void __fastcall cbEntEffectDropDown(TObject *Sender);
        void __fastcall cbEntDirectDropDown(TObject *Sender);
        void __fastcall cbLasEffectClick(TObject *Sender);
        void __fastcall cbLasEffectDropDown(TObject *Sender);
        void __fastcall cbLasDirectDropDown(TObject *Sender);
        void __fastcall rbTextNoClick(TObject *Sender);
        void __fastcall cbFontSizeClick(TObject *Sender);
        void __fastcall rbTextNoRoadClick(TObject *Sender);
        void __fastcall tsShow(TObject *Sender);
        void __fastcall DataSendClick(TObject *Sender);
        void __fastcall BtnSignSizeClick(TObject *Sender);
        void __fastcall sbLogClearClick(TObject *Sender);
        void __fastcall cbDIBDAddressClick(TObject *Sender);
        void __fastcall rbPageNoClick(TObject *Sender);
        void __fastcall btnAddClick(TObject *Sender);
        void __fastcall btnDeleteClick(TObject *Sender);
        void __fastcall btnSave1Click(TObject *Sender);
        void __fastcall ASCIISend1Click(TObject *Sender);
        void __fastcall lbMesageListClick(TObject *Sender);
        void __fastcall lbMesageListDrawItem(TWinControl *Control,
          int Index, TRect &Rect, TOwnerDrawState State);
        void __fastcall cbWaitTimeClick(TObject *Sender);
        void __fastcall ServerSocket1ClientConnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ServerSocket1ClientDisconnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ServerSocket1ClientError(TObject *Sender,
          TCustomWinSocket *Socket, TErrorEvent ErrorEvent,
          int &ErrorCode);
        void __fastcall ServerSocket1ClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall btnMsgEraseClick(TObject *Sender);
        void __fastcall eDataKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall eColorKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall SpeedButtonPreviewClick(TObject *Sender);
        void __fastcall PreviewButtonTimerTimer(TObject *Sender);
        void __fastcall SBASCIIPreviewClick(TObject *Sender);
        void __fastcall mASCIITextClick(TObject *Sender);
        void __fastcall BtnFactoryResetClick(TObject *Sender);
        void __fastcall tsASCIIMessageClick(TObject *Sender);
        void __fastcall btnSetupClick(TObject *Sender);
        void __fastcall btnHelpClick(TObject *Sender);
        void __fastcall btnHideClick(TObject *Sender);
        void __fastcall btnMaxClick(TObject *Sender);
        void __fastcall btnExitClick(TObject *Sender);
        void __fastcall ApplicationEvents1ShortCut(TWMKey &Msg,
          bool &Handled);
        void __fastcall pnCaptionMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall pnCaptionMouseUp(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall eBGColorKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall BtnETCClick(TObject *Sender);
        void __fastcall BtnLogClick(TObject *Sender);
        void __fastcall BtnApplyClick(TObject *Sender);
        void __fastcall cbDirectCheckClick(TObject *Sender);
        void __fastcall TntLabel10Click(TObject *Sender);
        void __fastcall BtnLogClearClick(TObject *Sender);
        void __fastcall rgASCIIClick(TObject *Sender);
        void __fastcall BtnMemInputClick(TObject *Sender);
        void __fastcall BtnMsgMemClearClick(TObject *Sender);
        void __fastcall BtnSendSyncClick(TObject *Sender);
        void __fastcall BtnBrightClick(TObject *Sender);
        void __fastcall BitBtnPowerLEDClick(TObject *Sender);
        void __fastcall BtnTimeReadClick(TObject *Sender);
        void __fastcall BtnTimeSetClick(TObject *Sender);
        void __fastcall BtnFResetClick(TObject *Sender);
        void __fastcall cbLanguageClick(TObject *Sender);
        void __fastcall pnCaptionMouseMove(TObject *Sender,
          TShiftState Shift, int X, int Y);
        void __fastcall BtnComPortClick(TObject *Sender);
        void __fastcall BtnFontSendClick(TObject *Sender);
        void __fastcall BtnLEDSettingClick(TObject *Sender);
        void __fastcall BtnDABITOptionClick(TObject *Sender);
        void __fastcall BtnDIBDDownloadClick(TObject *Sender);
        void __fastcall BtnScreenClick(TObject *Sender);
        void __fastcall mASCIITextMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall laHelpClick(TObject *Sender);
        void __fastcall laHelpMouseDown(TObject *Sender,
          TMouseButton Button, TShiftState Shift, int X, int Y);
        void __fastcall laHelpMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall BtnRealTimeClick(TObject *Sender);
        void __fastcall mASCIITextKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall mASCIITextKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall eDataKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall eBGColorKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall eColorKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall cbRealTimeClick(TObject *Sender);
        void __fastcall BtnPacketReadClick(TObject *Sender);
private:	// User declarations
        TFormMessage *FMessage; //�޽��� ��
        TFormFont *FFont;     // ��Ʈ ���� ��
        TFormLEDSet *FLEDSet; // LED ��� ���� ���� ��
        TFormDABITOption *FDABITOption; // DABIT Option ���� ��
        AnsiString Status; // ���� üũ
        Response RP; // ���ú� �������� ����ü
        BYTE FailData; // ���ú� ������ ���� ������
        int ProtocolTabKind; // ���/ASCII/Ư�� ���� ��
        int MessageKind; // �Ϲ�/������� ����
        int ProtocolPageNo2; // �Ϲݹ��� ���� ������
        int ProtocolBlockNo; // ��޹��� ���� ����
        int ProtocolBlockNo2; // �Ϲݹ��� ���� ����
        AnsiString OldLogDate; // �α� ������ ���� ��¥
        AnsiString asJohap;
        int OldXPos;
        int OldYPos;
        int NewXPos;
        int NewYPos;
        bool bTextKeyDown;
        bool bPacketOpen;
        void __fastcall SendData(BYTE ComKind, BYTE Add, BYTE *Data, DWORD DataLen, int Number, OPCode OPC); // ������ �������� ���� �Լ�
        void __fastcall SendFontFileData(BYTE ComKind, BYTE Add, OPCode OPC, BYTE *Data, int TotBlockCnt, int BlockCnt, int FontTotBlockCnt, int FontBlockCnt, int Number, int ImgCnt); // ��Ʈ �������� ���� �Լ�
        void __fastcall SendASCIIData(BYTE ComKind, BYTE Add, BYTE *Data, DWORD DataLen); // ASCII ������ �������� ���� �Լ�
        void __fastcall ButtonEnabled(bool bEnabled); // ��ư Ȱ��ȭ �Լ�
        void __fastcall PreviewSaveIniFile();
        void __fastcall PreviewRoadIniFile();
        void __fastcall ShowSetting();
public:		// User declarations
        TFormMessage *formMessage; // �޽��� �Լ� ��
        TFormTransfer *FTransfer;
        TFormSetting *FSetting; // ��޼��� ��
        TFormASCIISet *FASCIISet;
        TFormETC *FETC;
        TFormComPort *FComPort; // ��ż��� ��
        TFormFirmware *FFirmware; // �߿��� ����â ��
        TFormDABITNet *FDABITNet;
        TFormBluetoothSet * FBluetoothSet;
        TDataModuleClient *DMClient; // TCP/IP Ŭ���̾�Ʈ ����
        TCustomWinSocket *ServerClientSocket;  // TCP/IP ���� ����
        TIdSocketHandle *SH; // UDP ���� ����
        AnsiString DNSAddress; // DDNS ���� IP �ּ�
        bool DNSConnect; // TCP/IP ���� ���� ����
        bool bDisConnect; // TCP/IP ���� ������ ����
        bool FlagCrcPacket; // CRC ���� �÷���
        bool FlagDlePacket; // DLE ���� �÷���
        AnsiString    PortUse1; // COM ��Ʈ ����
        eBaudRate     BaudRateUse1; // COM BaudRate ����
        int Controler1; // ������ ��巹�� ����
        AnsiString    IPAddress; // TCP/IP ����
        int IPPort; // TCP/IP Client ��Ʈ ����
        int ServerPort; // TCP/IP Server ��Ʈ ����
        AnsiString    UDPIPAddress; // UDP IP ����
        int DSPPort; // UDP ������ ��Ʈ ����
        int SRCPort; // UDP DabitChe ��Ʈ ����
        BYTE ComKind; // ��� ���� ����
        bool bStopSend; // ���� ���� �÷���
        Language LangFile; // ��� ���� ����ü
        AnsiString BasePath; // ���� ����
        AnsiString DestSysPath; // System ����
        AnsiString DestLogPath; // Log ����
        AnsiString DestFontPath;// Font ����
        AnsiString DestFirmwarePath; // �߿��� ����
        AnsiString VerMj[4];
        int ModuleWidth; // ������ ���� ũ��
        int ModuleHeight; // ������ ���� ũ��
        int ProgramType; // ������ �÷� ����
        int DisplayType; // LED ��� ����
        int ColorOder;   // RGB ���� ����
        int ScanOder;    // ��� Scan ����
        int Bright;   // ��� ��
        int Lang; // ����ڵ� �ɼ�
        int iLanguage; // ��� �ɼ�
        int MessageCount; // �Ϲݹ��� �ִ� ����
        int ProtocolPageNo; // �Ϲݹ��� ���� ������
        AnsiString asUDPIPAddress; // ���۵� UDP IP
        AnsiString LastFirmwarePathFile; // ������ �߿��� �Լ� ���� �̸�
        AnsiString    FontFileName[4][3]; // ��Ʈ ���� �̸�
        AnsiString    FontFileNameVersion[4][3]; // ��Ʈ ���� �̸�
        bool          FontCountCheck[4];  // üũ�� ��Ʈ
        int           FontIndex[4][3];    // ��Ʈ����
        int           LanDelayTime;       // ����� ������ �ð�
        int           FontSizeIndex[4];    // ��Ʈũ������
        sASCIIMessage ASCIIMessageData[20]; // ASCII �޽��� ����ü
        AnsiString asLogMessage; // �α� �޽���
        bool SchBmpFile; // ���ú� ������ Ȯ�� �÷���
        bool DelayRun; // ���ú� ������ ���� �ð� �÷���
        bool bCRCFail; // CRC ���� Ȯ�� �÷���
        bool bDataFail; // ���� ������ Ȯ�� �÷���
        int PreviewMode;
        int ImageSendingBlockCount; //���ۺ�����
        sProtocolData ProtocolData; // ���/�Ϲ� ���� ���� ����ü
        sProtocolData ASCIIData; // ASCII ���� ���� ����ü
        WideString EffectType[EffectTypeCount]; // ȿ�� ����
        WideString DirType[DirTypeCount]; // ȿ�� ����
        AnsiString SpeedValue[22]; // �ӵ�
        AnsiString DelayValue[20]; // �����ð�
        int ASCIIBlockNo; // ASCII���� ���� ��
        int ASCIIPageNo;  // ASCII���� ���� ������
        int PorotocolType; // Porotocol ���� ����
        int Direct; // ������ ǥ�� ����
        bool DirectCheck; // ������ ǥ�� ���� Ȱ��ȭ üũ
        int LogFileCnt; // �α� ���� ���� ī��Ʈ
        int WaitTime;   //���ú� ������ ��� �ð�
        int DelayTime;  //���ú� ������ ���� ��� �ð�
        int ServerCommOpenDelay; // TCP/IP ��ý� ������ ���� �ȵɶ� ��� �ð�
        bool bMsg; // �α� �޽��� ���� �÷���
        TColor MainColor; // ������ ����
        TColor MainDivideColor; // ������ ����
        TColor TextBGColor; // �ؽ�Ʈ ��� ����
        TColor TextColor; // �ؽ�Ʈ ��Ʈ��
        TColor ButtonColor; // ��ư ����
        TColor MainRectangleColor;
        TColor CaptionPanelColor;
        TColor CaptionTextColor;
        AnsiString MainFont;
        BYTE MainFontSize;
        int DetailDelayBefore;
        int DetailDelayAfter;
        int SignalAutoDelayTime;
        int RetryCnt;
        BYTE bOptionDubug;
        BYTE bOptionBoardRate232;
        BYTE bOptionBoardRateTTL;
        BYTE bOptionBoardRate485;
        BYTE bOptionBH1;
        BYTE bOptionJ4;
        bool bCaptionMove; // ĸ�� Move �������� Ȯ�� �÷���
        bool bRS485;
        bool bFirst; // ó�� ���� �÷���
        bool bLogviewall;
        BYTE bRealTimeIndex;
        AnsiString BluetoothName;
        AnsiString BluetoothPassword;
        int BluetoothDelayTime;
        AnsiString __fastcall VersionInfo(const AnsiString & sQuery);
        void __fastcall RoadIniFile(); // ����� ���� ini ���Ͽ��� �ҷ����� �Լ�
        void __fastcall SaveIniFile(); // ini ���� ���� �Լ�
        void __fastcall RoadLangFile(AnsiString aslang); // ������� �ҷ����� �Լ�
        void __fastcall ReadParsing(BYTE ComKind, char Add, BYTE *ParsingData, int ParsingSize); // �Ľ� �Լ�
        void __fastcall InputLang(); // ��� ������ �Լ�
        bool __fastcall ModuleData(BYTE ComKind, BYTE Addr, BYTE *Data, DWORD DataLen, int Number, OPCode OPC, bool bMessage); // �Ϲ� ������ ������ ���ú� ������ �޴� �Ǵ� �Լ�
        bool __fastcall ModuleFontPacketData(BYTE ComKind, BYTE Add, OPCode OPC, BYTE *Data, int TotBlockCnt, int BlockCnt, int FontTotBlockCnt, int FontBlockCnt, int Number, int ImgCnt);  // Font ������ ������ ���ú� ������ �޴� �Ǵ� �Լ�
        bool __fastcall ModuleASCIIData(BYTE ComKind, BYTE Addr, BYTE *Data, DWORD DataLen, bool bMessage);  // ASCII ������ ������ ���ú� ������ �޴� �Ǵ� �Լ�
        bool __fastcall ComPortSet(BYTE ComKind, AnsiString PortUse, BYTE BaudRateUse, BYTE DTR, BYTE RTS, AnsiString IPAddress, int IPPort, bool bMessage); // ��� ���� �Լ�
        bool __fastcall ComClose(BYTE ComKind); // ��� �ݴ� �Լ�
        void __fastcall DelayCount(int Cnt);// ��� ���ú� ������ �Լ�
        void __fastcall NoneDelayCount(int Cnt); // ������ �Լ�
        void __fastcall LANDelayCount(int Cnt); // ��� ������ �Լ�
        AnsiString __fastcall GetDNS(); // PC DNS �о���� �Լ�
        unsigned short int __fastcall Calc_crc(unsigned char *buf, int numbytes); // CRC �Լ�
        AnsiString __fastcall Byte2HexConvert(BYTE Value); // Byte ���� �� String Hex ��ȯ �Լ�
        BYTE __fastcall Hex2ByteConvert(AnsiString Value); // String Hex ���� Byte �� ��ȯ �Լ�
        int __fastcall Message(WideString Mes, WideString wsYes, WideString wsNo, WideString wsCancel, int Width, int Height, int btnCnt, TColor FontColor); // �޽��� �Լ�
        void __fastcall AddLog(AnsiString Msg, TColor Color); // �α� ǥ�� �� ���� �Լ�
        void __fastcall DeleteOldLogFile(AnsiString SitePath); // ������ �α� ���� �Լ�
        int __fastcall FindItemIndex(AnsiString Data, int Col); // ȿ��,���� �ε��� ���� �Լ�
        BYTE __fastcall InputSchEffect(TGEffectType eEff, TGEffectDirection dDirect); // ������ ȿ���� ���� �Լ�
        BYTE __fastcall SetDelayTime(int DelayTime); // �����̰� ���� �Լ�
        AnsiString __fastcall GetDay(int iDay); // ���� ���� String ���� �Լ�
        BYTE *__fastcall SetLEDModuleValue(BYTE bDispType, BYTE bDispColor, BYTE bScanOder);// LED ��� ���� �Լ�
        AnsiString __fastcall GetLocalIP(); //���� PC IP ������ �Լ�
        bool __fastcall CurrenTimeSync(); // PC ����ð� ����
        int __fastcall ReturnDay(TDateTime Time); // ���� ���� �� �Լ�
        AnsiString __fastcall IntTo485Address(int Value); // 485 �ּ� ���� �� �Լ�
        TColor __fastcall GetColor(int iColor);
        bool __fastcall PacketParsing(BYTE * ParsingData, int iDataSize);
        WideString __fastcall TFormMain::UTF8ToANSI(const char *pszCode, int &length);
        AnsiString __fastcall Int2HexConvert(BYTE Value);
        __fastcall TFormMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
