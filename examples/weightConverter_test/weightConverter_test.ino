//
//    FILE: weightConverter_test.ino
//  AUTHOR: Rob Tillaart
// PURPOSE: demo
//    DATE: 2022-12-05


#include "weight.h"

const float accuracy = 0.0001;


void setup()
{
  Serial.begin(115200);
  Serial.println(__FILE__);

  weightConvertor WC;

  WC.setKilogram(1);
  Serial.println(WC.getKilogram(), 4);

  WC.setGram(1);
  Serial.println(WC.getGram(), 4);

  WC.setLBS(1);
  Serial.println(WC.getLBS(), 4);

  WC.setStone(1);
  Serial.println(WC.getStone(), 4);

  WC.setOunce(1);
  Serial.println(WC.getOunce(), 4);

  WC.setLongTonUK(1);
  Serial.println(WC.getLongTonUK(), 4);

  WC.setShortTonUS(1);
  Serial.println(WC.getShortTonUS(), 4);

  WC.setQuarterUK(1);
  Serial.println(WC.getQuarterUK(), 4);

  WC.setQuarterUS(1);
  Serial.println(WC.getQuarterUS(), 4);

  WC.setSlug(1);
  Serial.println(WC.getSlug(), 4);

  WC.setTroyPound(1);
  Serial.println(WC.getTroyPound(), 4);

  WC.setTroyOunce(1);
  Serial.println(WC.getTroyOunce(), 4);

  WC.setRobie(1);
  Serial.println(WC.getRobie(), 4);

  WC.setDram(1);
  Serial.println(WC.getDram(), 4);

  WC.setDrachme(1);
  Serial.println(WC.getDrachme(), 4);

  WC.setPoint(1);
  Serial.println(WC.getPoint(), 4);

  WC.setGrain(1);
  Serial.println(WC.getGrain(), 4);

  WC.setCarat(1);
  Serial.println(WC.getCarat(), 4);
}


void loop()
{
}


// -- END OF FILE --
