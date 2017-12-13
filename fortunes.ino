////////////////////////////////////////////////////////////////////////////////
// thermal printer

#include "Adafruit_Thermal.h"
#include "SoftwareSerial.h"
#define TX_PIN 6 // Arduino transmit  YELLOW WIRE  labeled RX on printer
#define RX_PIN 5 // Arduino receive   GREEN WIRE   labeled TX on printer
SoftwareSerial mySerial(RX_PIN, TX_PIN); // Declare SoftwareSerial obj first
Adafruit_Thermal printer(&mySerial);     // Pass addr to printer constructor

////////////////////////////////////////////////////////////////////////////////
// fortunes

#include <avr/pgmspace.h>

const char string_0[] PROGMEM = "An arrival";
const char string_1[] PROGMEM = "camouflage";
const char string_2[] PROGMEM = "strong defense";
const char string_3[] PROGMEM = "A feather is better than a bird";
const char string_4[] PROGMEM = "fresh start";
const char string_5[] PROGMEM = "Your time not your money";
const char string_6[] PROGMEM = "A present";
const char string_7[] PROGMEM = "A gamble";
const char string_8[] PROGMEM = "golden egg of opportunity";
const char string_9[] PROGMEM = "passionate romance";
const char string_10[] PROGMEM = "A good time";
const char string_11[] PROGMEM = "finish up old tasks";
const char string_12[] PROGMEM = "follow that hunch";
const char string_13[] PROGMEM = "happiness lies";
const char string_14[] PROGMEM = "light heart";
const char string_15[] PROGMEM = "hard times";
const char string_16[] PROGMEM = "a 5 dollar bill";
const char string_17[] PROGMEM = "the closest beggar";
const char string_18[] PROGMEM = "Great expectations";
const char string_19[] PROGMEM = "Persuasive soft voice";
const char string_20[] PROGMEM = "fresh bread";
const char string_21[] PROGMEM = "smell of rain";
const char string_22[] PROGMEM = "art in abundance";
const char string_23[] PROGMEM = "Accept change";
const char string_24[] PROGMEM = "Seek Adventure";
const char string_25[] PROGMEM = "Kissing";
const char string_26[] PROGMEM = "Advice is needed";
const char string_27[] PROGMEM = "your new project will go well";
const char string_28[] PROGMEM = "the pay off";
const char string_29[] PROGMEM = "don't let the past affect you";
const char string_30[] PROGMEM = "appearance of romance";
const char string_31[] PROGMEM = "support";
const char string_32[] PROGMEM = "an inch of gold";
const char string_33[] PROGMEM = "a good decision";
const char string_34[] PROGMEM = "the touch of love";
const char string_35[] PROGMEM = "some tricks";
const char string_36[] PROGMEM = "Beauty in various forms";
const char string_37[] PROGMEM = "Others’ respect";
const char string_38[] PROGMEM = "Belief";
const char string_39[] PROGMEM = "ask twice";
const char string_40[] PROGMEM = "Bide your time";
const char string_41[] PROGMEM = "success is near";
const char string_42[] PROGMEM = "On your heart";
const char string_43[] PROGMEM = "Not Marble";
const char string_44[] PROGMEM = "Change";
const char string_45[] PROGMEM = "Competence";
const char string_46[] PROGMEM = "You are underrated";
const char string_47[] PROGMEM = "some directions";
const char string_48[] PROGMEM = "begin in the home";
const char string_49[] PROGMEM = "Curious";
const char string_50[] PROGMEM = "a calm mind";
const char string_51[] PROGMEM = "task in hand";
const char string_52[] PROGMEM = "Depart not from the path";
const char string_53[] PROGMEM = "Determination";
const char string_54[] PROGMEM = "Disbelief destroys the magic";
const char string_55[] PROGMEM = "Distance yourself";
const char string_56[] PROGMEM = "the eloquence of others";
const char string_57[] PROGMEM = "someone’s soul";
const char string_58[] PROGMEM = "overshadow";
const char string_59[] PROGMEM = "extra work";
const char string_60[] PROGMEM = "unlimited potentials";
const char string_61[] PROGMEM = "every wrong attempt discarded";
const char string_62[] PROGMEM = "spend time";
const char string_63[] PROGMEM = "your existence";
const char string_64[] PROGMEM = "useless detail";
const char string_65[] PROGMEM = "Don’t worry";
const char string_66[] PROGMEM = "Compel yourself";
const char string_67[] PROGMEM = "Meet life’s situations";
const char string_68[] PROGMEM = "Emulate what you admire";
const char string_69[] PROGMEM = "every flower";
const char string_70[] PROGMEM = "sweet time";
const char string_71[] PROGMEM = "many questions";
const char string_72[] PROGMEM = "a special occasion";
const char string_73[] PROGMEM = "A victory";
const char string_74[] PROGMEM = "The roses";
const char string_75[] PROGMEM = "No sign needed";
const char string_76[] PROGMEM = "Listen";
const char string_77[] PROGMEM = "Kindness";
const char string_78[] PROGMEM = "A little confidence";
const char string_79[] PROGMEM = "Rest";
const char string_80[] PROGMEM = "Good news";
const char string_81[] PROGMEM = "In the mail";
const char string_82[] PROGMEM = "a smile and a wink";
const char string_83[] PROGMEM = "good luck";
const char string_84[] PROGMEM = "in front of you";
const char string_85[] PROGMEM = "depends on where you go";
const char string_86[] PROGMEM = "a sense of value";
const char string_87[] PROGMEM = "uncertainty";
const char string_88[] PROGMEM = "Imagination rules";
const char string_89[] PROGMEM = "world of contradiction";
const char string_90[] PROGMEM = "It could be better";
const char string_91[] PROGMEM = "some old lessons";
const char string_92[] PROGMEM = "admit fault";
const char string_93[] PROGMEM = "devote time";
const char string_94[] PROGMEM = "Your spirits will lift";
const char string_95[] PROGMEM = "Keep your face";
const char string_96[] PROGMEM = "In the shadows";
const char string_97[] PROGMEM = "Fill with tranquility";
const char string_98[] PROGMEM = "Some things are just meant to be";
const char string_99[] PROGMEM = "Ideas come from everywhere";
const char string_100[] PROGMEM = "a commitment";
const char string_101[] PROGMEM = "a warm fire";
const char string_102[] PROGMEM = "good to the last drop";
const char string_103[] PROGMEM = "original dimensions";
const char string_104[] PROGMEM = "Meditation with an old enemy";
const char string_105[] PROGMEM = "one step at a time";
const char string_106[] PROGMEM = "Nature";
const char string_107[] PROGMEM = "time and patience";
const char string_108[] PROGMEM = "The end of something";
const char string_109[] PROGMEM = "The start of something";
const char string_110[] PROGMEM = "Profitable Ideas";
const char string_111[] PROGMEM = "New people";
const char string_112[] PROGMEM = "A realization";
const char string_113[] PROGMEM = "buy stock";
const char string_114[] PROGMEM = "try something new";
const char string_115[] PROGMEM = "Observe";
const char string_116[] PROGMEM = "The positive side";
const char string_117[] PROGMEM = "Others can help";
const char string_118[] PROGMEM = "Pennies from heaven";
const char string_119[] PROGMEM = "Physical activity";
const char string_120[] PROGMEM = "Pick battles";
const char string_121[] PROGMEM = "old friendship";
const char string_122[] PROGMEM = "dipped in chocolate";
const char string_123[] PROGMEM = "Protective measures";
const char string_124[] PROGMEM = "Romance";
const char string_125[] PROGMEM = "a process";
const char string_126[] PROGMEM = "Sift through your past";
const char string_127[] PROGMEM = "reconciliation";
const char string_128[] PROGMEM = "Stand tall";
const char string_129[] PROGMEM = "close to home";
const char string_130[] PROGMEM = "inside out";
const char string_131[] PROGMEM = "loss of enthusiasm";
const char string_132[] PROGMEM = "Take care";
const char string_133[] PROGMEM = "the high road";
const char string_134[] PROGMEM = "like a veil";
const char string_135[] PROGMEM = "Be ready";
const char string_136[] PROGMEM = "far-reaching effects";
const char string_137[] PROGMEM = "The first man";
const char string_138[] PROGMEM = "night life";
const char string_139[] PROGMEM = "recognize the illusion";
const char string_140[] PROGMEM = "keep on trying";
const char string_141[] PROGMEM = "no secret to you";
const char string_142[] PROGMEM = "trust your intuitions";
const char string_143[] PROGMEM = "Invent it";
const char string_144[] PROGMEM = "the weather";
const char string_145[] PROGMEM = "an ordinary cat";
const char string_146[] PROGMEM = "make the effort";
const char string_147[] PROGMEM = "assert yourself";
const char string_148[] PROGMEM = "blinded by passion";
const char string_149[] PROGMEM = "our habits make us";
const char string_150[] PROGMEM = "Welcome change";
const char string_151[] PROGMEM = "Well done";
const char string_152[] PROGMEM = "An empty box";
const char string_153[] PROGMEM = "A clear mind";
const char string_154[] PROGMEM = "Another time";
const char string_155[] PROGMEM = "You are almost there";
const char string_156[] PROGMEM = "some new clothes";
const char string_157[] PROGMEM = "good hands";
const char string_158[] PROGMEM = "the dream";
const char string_159[] PROGMEM = "open-minded";
const char string_160[] PROGMEM = "a secret";
const char string_161[] PROGMEM = "second base";
const char string_162[] PROGMEM = "keep your foot on first";
const char string_163[] PROGMEM = "you will find it";
const char string_164[] PROGMEM = "a deep appreciation";
const char string_165[] PROGMEM = "a deep interest";
const char string_166[] PROGMEM = "a friendly heart";
const char string_167[] PROGMEM = "a shrewd knack";
const char string_168[] PROGMEM = "a yearning for perfection";
const char string_169[] PROGMEM = "an active mind";
const char string_170[] PROGMEM = "a keen imagination";
const char string_171[] PROGMEM = "an ambitious nature";
const char string_172[] PROGMEM = "make a name for yourself";
const char string_173[] PROGMEM = "unusual equipment";
const char string_174[] PROGMEM = "a good start";
const char string_175[] PROGMEM = "You look pretty";
const char string_176[] PROGMEM = "Treasure you lost";
const char string_177[] PROGMEM = "Be generous";
const char string_178[] PROGMEM = "enjoy your solitude";
const char string_179[] PROGMEM = "true friends";
const char string_180[] PROGMEM = "your charm";
const char string_181[] PROGMEM = "good health";
const char string_182[] PROGMEM = "routine activities";
const char string_183[] PROGMEM = "a large sum of money";
const char string_184[] PROGMEM = "laughter";
const char string_185[] PROGMEM = "within your reach";
const char string_186[] PROGMEM = "sooner or later";
const char string_187[] PROGMEM = "prestige";
const char string_188[] PROGMEM = "tears";
const char string_189[] PROGMEM = "flashing lights";
const char string_190[] PROGMEM = "soft spot";
const char string_191[] PROGMEM = "obsession";
const char string_192[] PROGMEM = "competition";
const char string_193[] PROGMEM = "show who you are";
const char string_194[] PROGMEM = "the real deal";
const char string_195[] PROGMEM = "carry yourself";
const char string_196[] PROGMEM = "simple binary choices";
const char string_197[] PROGMEM = "on the move";
const char string_198[] PROGMEM = "break away";
const char string_199[] PROGMEM = "caverns map strangers";
const char string_200[] PROGMEM = "no possible counterpart";
const char string_201[] PROGMEM = "catch an echo";
const char string_202[] PROGMEM = "waking world";
const char string_203[] PROGMEM = "take a seat";
const char string_204[] PROGMEM = "accept the existence";
const char string_205[] PROGMEM = "unrealized durations";
const char string_206[] PROGMEM = "meaningless pathway";
const char string_207[] PROGMEM = "balanced phenomena";
const char string_208[] PROGMEM = "effortless";
const char string_209[] PROGMEM = "perceptions";
const char string_210[] PROGMEM = "expressible terms";
const char string_211[] PROGMEM = "in the gutter";
const char string_212[] PROGMEM = "mercifully limited";
const char string_213[] PROGMEM = "actions";
const char string_214[] PROGMEM = "a modest portal";
const char string_215[] PROGMEM = "fictitious deeds";
const char string_216[] PROGMEM = "error";
const char string_217[] PROGMEM = "a serious attempt";
const char string_218[] PROGMEM = "sunset";
const char string_219[] PROGMEM = "stillness of branches";
const char string_220[] PROGMEM = "cold winter afternoon";
const char string_221[] PROGMEM = "shimmering nimbus";
const char string_222[] PROGMEM = "minimal meaning";
const char string_223[] PROGMEM = "traffic";
const char string_224[] PROGMEM = "the scale continues upwards";
const char string_225[] PROGMEM = "occasional table";
const char string_226[] PROGMEM = "coherent proposition";
const char string_227[] PROGMEM = "at the same time";
const char string_228[] PROGMEM = "arc of a circle";
const char string_229[] PROGMEM = "straight lines";
const char string_230[] PROGMEM = "tangible subterranean chord";
const char string_231[] PROGMEM = "distances";
const char string_232[] PROGMEM = "meandering truck";
const char string_233[] PROGMEM = "profound quality";
const char string_234[] PROGMEM = "endless stream";
const char string_235[] PROGMEM = "between Hamlet and the ghost";
const char string_236[] PROGMEM = "abandon the unresolvable";
const char string_237[] PROGMEM = "the eye jumps back";
const char string_238[] PROGMEM = "ambitious projects";
const char string_239[] PROGMEM = "paradox";
const char string_240[] PROGMEM = "projection of consciousness";
const char string_241[] PROGMEM = "specific problems";
const char string_242[] PROGMEM = "Whatever the history";
const char string_243[] PROGMEM = "powerful reasons";
const char string_244[] PROGMEM = "making a decision";
const char string_245[] PROGMEM = "elusive anguish";
const char string_246[] PROGMEM = "proper preliminaries";
const char string_247[] PROGMEM = "day develops";
const char string_248[] PROGMEM = "an advance";
const char string_249[] PROGMEM = "the unexpected";
const char string_250[] PROGMEM = "spotting insincerity";

const int fortuneCount = 251;

const char* const fortunes[] PROGMEM = {string_250, string_0, string_1, string_2, string_3, string_4, string_5, string_6, string_7, string_8, string_9, string_10, string_11, string_12, string_13, string_14, string_15, string_16, string_17, string_18, string_19, string_20, string_21, string_22, string_23, string_24, string_25, string_26, string_27, string_28, string_29, string_30, string_31, string_32, string_33, string_34, string_35, string_36, string_37, string_38, string_39, string_40, string_41, string_42, string_43, string_44, string_45, string_46, string_47, string_48, string_49, string_50, string_51, string_52, string_53, string_54, string_55, string_56, string_57, string_58, string_59, string_60, string_61, string_62, string_63, string_64, string_65, string_66, string_67, string_68, string_69, string_70, string_71, string_72, string_73, string_74, string_75, string_76, string_77, string_78, string_79, string_80, string_81, string_82, string_83, string_84, string_85, string_86, string_87, string_88, string_89, string_90, string_91, string_92, string_93, string_94, string_95, string_96, string_97, string_98, string_99, string_100, string_101, string_102, string_103, string_104, string_105, string_106, string_107, string_108, string_109, string_110, string_111, string_112, string_113, string_114, string_115, string_116, string_117, string_118, string_119, string_120, string_121, string_122, string_123, string_124, string_125, string_126, string_127, string_128, string_129, string_130, string_131, string_132, string_133, string_134, string_135, string_136, string_137, string_138, string_139, string_140, string_141, string_142, string_143, string_144, string_145, string_146, string_147, string_148, string_149, string_150, string_151, string_152, string_153, string_154, string_155, string_156, string_157, string_158, string_159, string_160, string_161, string_162, string_163, string_164, string_165, string_166, string_167, string_168, string_169, string_170, string_171, string_172, string_173, string_174, string_175, string_176, string_177, string_178, string_179, string_180, string_181, string_182, string_183, string_184, string_185, string_186, string_187, string_188, string_189, string_190, string_191, string_192, string_193, string_194, string_195, string_196, string_197, string_198, string_199, string_200, string_201, string_202, string_203, string_204, string_205, string_206, string_207, string_208, string_209, string_210, string_211, string_212, string_213, string_214, string_215, string_216, string_217, string_218, string_219, string_220, string_221, string_222, string_223, string_224, string_225, string_226, string_227, string_228, string_229, string_230, string_231, string_232, string_233, string_234, string_235, string_236, string_237, string_238, string_239, string_240, string_241, string_242, string_243, string_244, string_245, string_246, string_247, string_248, string_249};

char buffer[40];

////////////////////////////////////////////////////////////////////////////////
// cap sensor

#include "mpr121.h"
#include <Wire.h>

int irqpin = 2;  // Digital 2
boolean touchStates[12]; //to keep track of the previous touch states

void setup() {
  pinMode(irqpin, INPUT);
  digitalWrite(irqpin, HIGH); //enable pullup resistor

  Serial.begin(9600);
  Wire.begin();

  mpr121_setup();

  mySerial.begin(19200);
  printer.begin();
}

void loop() {
  readTouchInputs();
}


void readTouchInputs() {
  if (!checkInterrupt()) {

    //read the touch state from the MPR121
    Wire.requestFrom(0x5A, 2);

    byte LSB = Wire.read();
    byte MSB = Wire.read();

    uint16_t touched = ((MSB << 8) | LSB); //16bits that make up the touch states


    for (int i = 0; i < 12; i++) { // Check what electrodes were pressed
      if (touched & (1 << i)) {

        if (touchStates[i] == 0) {
          //pin i was just touched
          //          Serial.print("pin ");
          //          Serial.print(i);
          //          Serial.println(" was just touched");
          //          Serial.println("dispense fortune");
          dispenseFortune();

        } else if (touchStates[i] == 1) {
          //pin i is still being touched
        }

        touchStates[i] = 1;
      } else {
        if (touchStates[i] == 1) {
          //          Serial.print("pin ");
          //          Serial.print(i);
          //          Serial.println(" is no longer being touched");
          //          Serial.println("(let go)");

          //pin i is no longer being touched
        }

        touchStates[i] = 0;
      }

    }

  }
}




void mpr121_setup(void) {

  set_register(0x5A, ELE_CFG, 0x00);

  // Section A - Controls filtering when data is > baseline.
  set_register(0x5A, MHD_R, 0x01);
  set_register(0x5A, NHD_R, 0x01);
  set_register(0x5A, NCL_R, 0x00);
  set_register(0x5A, FDL_R, 0x00);

  // Section B - Controls filtering when data is < baseline.
  set_register(0x5A, MHD_F, 0x01);
  set_register(0x5A, NHD_F, 0x01);
  set_register(0x5A, NCL_F, 0xFF);
  set_register(0x5A, FDL_F, 0x02);

  // Section C - Sets touch and release thresholds for each electrode
  set_register(0x5A, ELE0_T, TOU_THRESH);
  set_register(0x5A, ELE0_R, REL_THRESH);

  set_register(0x5A, ELE1_T, TOU_THRESH);
  set_register(0x5A, ELE1_R, REL_THRESH);

  set_register(0x5A, ELE2_T, TOU_THRESH);
  set_register(0x5A, ELE2_R, REL_THRESH);

  set_register(0x5A, ELE3_T, TOU_THRESH);
  set_register(0x5A, ELE3_R, REL_THRESH);

  set_register(0x5A, ELE4_T, TOU_THRESH);
  set_register(0x5A, ELE4_R, REL_THRESH);

  set_register(0x5A, ELE5_T, TOU_THRESH);
  set_register(0x5A, ELE5_R, REL_THRESH);

  set_register(0x5A, ELE6_T, TOU_THRESH);
  set_register(0x5A, ELE6_R, REL_THRESH);

  set_register(0x5A, ELE7_T, TOU_THRESH);
  set_register(0x5A, ELE7_R, REL_THRESH);

  set_register(0x5A, ELE8_T, TOU_THRESH);
  set_register(0x5A, ELE8_R, REL_THRESH);

  set_register(0x5A, ELE9_T, TOU_THRESH);
  set_register(0x5A, ELE9_R, REL_THRESH);

  set_register(0x5A, ELE10_T, TOU_THRESH);
  set_register(0x5A, ELE10_R, REL_THRESH);

  set_register(0x5A, ELE11_T, TOU_THRESH);
  set_register(0x5A, ELE11_R, REL_THRESH);

  // Section D
  // Set the Filter Configuration
  // Set ESI2
  set_register(0x5A, FIL_CFG, 0x04);

  // Section E
  // Electrode Configuration
  // Set ELE_CFG to 0x00 to return to standby mode
  set_register(0x5A, ELE_CFG, 0x0C);  // Enables all 12 Electrodes


  // Section F
  // Enable Auto Config and auto Reconfig
  /*set_register(0x5A, ATO_CFG0, 0x0B);
    set_register(0x5A, ATO_CFGU, 0xC9);  // USL = (Vdd-0.7)/vdd*256 = 0xC9 @3.3V   set_register(0x5A, ATO_CFGL, 0x82);  // LSL = 0.65*USL = 0x82 @3.3V
    set_register(0x5A, ATO_CFGT, 0xB5);*/  // Target = 0.9*USL = 0xB5 @3.3V

  set_register(0x5A, ELE_CFG, 0x0C);

}


boolean checkInterrupt(void) {
  return digitalRead(irqpin);
}


void set_register(int address, unsigned char r, unsigned char v) {
  Wire.beginTransmission(address);
  Wire.write(r);
  Wire.write(v);
  Wire.endTransmission();
}

void dispenseFortune() {
  int index = random(fortuneCount);
  strcpy_P(buffer, (char*)pgm_read_word(&(fortunes[index]))); // Necessary casts and dereferencing, just copy.

  Serial.println(buffer);

  printer.feed(5);
  printer.justify('C');
  printer.println(buffer);
  printer.feed(8);

  printer.sleep();
  delay(3000L);
  printer.wake();
  printer.setDefault();
}

