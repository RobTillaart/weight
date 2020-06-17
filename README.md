# weight

Library of weight conversion functions

## Description

Weight.h is a library containing weight conversion functions.

Overview of conversions:

```
          stone - lbs - ounce
            |      |      |
           kilo   kilo - gram


           kilo - (stone, lbs, ounce)
```

Open for additions, including obscure weight metrics or 
weight related math functions and constants.

## ideas for future (TBD)
* mass of all elements - 
  - an array of floats 
  - a compressed format with access function (1 byte/ element)
  - constants e.g. MASS_OXYGEN
* molarity functions
* mass of common substances.
* large masses - sun planets ?
* gravity constants of planets REL or ABS eg REL_GRAVITY_EARTH 1.0
* teaspoon
  - although that is a volume unit.
  - volume conversion too?
* create datatypes of stone lbs kilo etc.?

## Operation

See examples
