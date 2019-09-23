/* Automatically generated HAL from hal.xml */
/* NEVER EDIT MANUALLY */

/* Generated on: 2019-08-21 18:04:12 */

#ifndef __HAL_H__
#define __HAL_H__

#include <avr/io.h>

#define nop()                                    __asm__ __volatile__("nop")

/* OUT0 -> PA0 (Output, Initially Inactive) */
#define OUT0_BIT                                 0
#define OUT0_PIN                                 PINA
#define OUT0_PORT                                PORTA
#define OUT0_DDR                                 DDRA
#define OUT0_ModeOutput()                        OUT0_DDR |= _BV(OUT0_BIT)
#define OUT0_IsOutput()                          ((OUT0_DDR & _BV(OUT0_BIT)) != 0)
#define OUT0_SetHIGH()                           OUT0_PORT |= _BV(OUT0_BIT)
#define OUT0_SetLOW()                            OUT0_PORT &= ~_BV(OUT0_BIT)
#define OUT0_Get()                               (OUT0_PIN & _BV(OUT0_BIT))
#define OUT0_SetInactive()                       OUT0_SetLOW()
#define OUT0_SetActive()                         OUT0_SetHIGH()
#define OUT0_Toggle()                            OUT0_PORT ^= _BV(OUT0_BIT)
#define OUT0_SetConditional(condition)           if (condition) OUT0_SetActive(); else OUT0_SetInactive()
#define OUT0_SetConditionalToggle(conditionon, conditionoff, conditiontoggle) if (conditionon) { OUT0_SetActive(); } else if (conditionoff) { OUT0_SetInactive(); } else if (conditiontoggle) { OUT0_Toggle(); }
#define OUT0_Pulse()                             { OUT0_SetActive(); OUT0_SetInactive(); }
#define OUT0_PulseNop()                          { OUT0_SetActive(); nop(); OUT0_SetInactive(); }
#define OUT0_IsInactive()                        (OUT0_Get() == 0)
#define OUT0_IsActive()                          (OUT0_Get() != 0)
#define OUT0_Init()                              { OUT0_SetInactive(); OUT0_ModeOutput(); }

/* OUT1 -> PA1 (Output, Initially Inactive) */
#define OUT1_BIT                                 1
#define OUT1_PIN                                 PINA
#define OUT1_PORT                                PORTA
#define OUT1_DDR                                 DDRA
#define OUT1_ModeOutput()                        OUT1_DDR |= _BV(OUT1_BIT)
#define OUT1_IsOutput()                          ((OUT1_DDR & _BV(OUT1_BIT)) != 0)
#define OUT1_SetHIGH()                           OUT1_PORT |= _BV(OUT1_BIT)
#define OUT1_SetLOW()                            OUT1_PORT &= ~_BV(OUT1_BIT)
#define OUT1_Get()                               (OUT1_PIN & _BV(OUT1_BIT))
#define OUT1_SetInactive()                       OUT1_SetLOW()
#define OUT1_SetActive()                         OUT1_SetHIGH()
#define OUT1_Toggle()                            OUT1_PORT ^= _BV(OUT1_BIT)
#define OUT1_SetConditional(condition)           if (condition) OUT1_SetActive(); else OUT1_SetInactive()
#define OUT1_SetConditionalToggle(conditionon, conditionoff, conditiontoggle) if (conditionon) { OUT1_SetActive(); } else if (conditionoff) { OUT1_SetInactive(); } else if (conditiontoggle) { OUT1_Toggle(); }
#define OUT1_Pulse()                             { OUT1_SetActive(); OUT1_SetInactive(); }
#define OUT1_PulseNop()                          { OUT1_SetActive(); nop(); OUT1_SetInactive(); }
#define OUT1_IsInactive()                        (OUT1_Get() == 0)
#define OUT1_IsActive()                          (OUT1_Get() != 0)
#define OUT1_Init()                              { OUT1_SetInactive(); OUT1_ModeOutput(); }

/* OUT2 -> PA2 (Output, Initially Inactive) */
#define OUT2_BIT                                 2
#define OUT2_PIN                                 PINA
#define OUT2_PORT                                PORTA
#define OUT2_DDR                                 DDRA
#define OUT2_ModeOutput()                        OUT2_DDR |= _BV(OUT2_BIT)
#define OUT2_IsOutput()                          ((OUT2_DDR & _BV(OUT2_BIT)) != 0)
#define OUT2_SetHIGH()                           OUT2_PORT |= _BV(OUT2_BIT)
#define OUT2_SetLOW()                            OUT2_PORT &= ~_BV(OUT2_BIT)
#define OUT2_Get()                               (OUT2_PIN & _BV(OUT2_BIT))
#define OUT2_SetInactive()                       OUT2_SetLOW()
#define OUT2_SetActive()                         OUT2_SetHIGH()
#define OUT2_Toggle()                            OUT2_PORT ^= _BV(OUT2_BIT)
#define OUT2_SetConditional(condition)           if (condition) OUT2_SetActive(); else OUT2_SetInactive()
#define OUT2_SetConditionalToggle(conditionon, conditionoff, conditiontoggle) if (conditionon) { OUT2_SetActive(); } else if (conditionoff) { OUT2_SetInactive(); } else if (conditiontoggle) { OUT2_Toggle(); }
#define OUT2_Pulse()                             { OUT2_SetActive(); OUT2_SetInactive(); }
#define OUT2_PulseNop()                          { OUT2_SetActive(); nop(); OUT2_SetInactive(); }
#define OUT2_IsInactive()                        (OUT2_Get() == 0)
#define OUT2_IsActive()                          (OUT2_Get() != 0)
#define OUT2_Init()                              { OUT2_SetInactive(); OUT2_ModeOutput(); }

/* OUT3 -> PA3 (Output, Initially Inactive) */
#define OUT3_BIT                                 3
#define OUT3_PIN                                 PINA
#define OUT3_PORT                                PORTA
#define OUT3_DDR                                 DDRA
#define OUT3_ModeOutput()                        OUT3_DDR |= _BV(OUT3_BIT)
#define OUT3_IsOutput()                          ((OUT3_DDR & _BV(OUT3_BIT)) != 0)
#define OUT3_SetHIGH()                           OUT3_PORT |= _BV(OUT3_BIT)
#define OUT3_SetLOW()                            OUT3_PORT &= ~_BV(OUT3_BIT)
#define OUT3_Get()                               (OUT3_PIN & _BV(OUT3_BIT))
#define OUT3_SetInactive()                       OUT3_SetLOW()
#define OUT3_SetActive()                         OUT3_SetHIGH()
#define OUT3_Toggle()                            OUT3_PORT ^= _BV(OUT3_BIT)
#define OUT3_SetConditional(condition)           if (condition) OUT3_SetActive(); else OUT3_SetInactive()
#define OUT3_SetConditionalToggle(conditionon, conditionoff, conditiontoggle) if (conditionon) { OUT3_SetActive(); } else if (conditionoff) { OUT3_SetInactive(); } else if (conditiontoggle) { OUT3_Toggle(); }
#define OUT3_Pulse()                             { OUT3_SetActive(); OUT3_SetInactive(); }
#define OUT3_PulseNop()                          { OUT3_SetActive(); nop(); OUT3_SetInactive(); }
#define OUT3_IsInactive()                        (OUT3_Get() == 0)
#define OUT3_IsActive()                          (OUT3_Get() != 0)
#define OUT3_Init()                              { OUT3_SetInactive(); OUT3_ModeOutput(); }

/* OUT4 -> PA4 (Output, Initially Inactive) */
#define OUT4_BIT                                 4
#define OUT4_PIN                                 PINA
#define OUT4_PORT                                PORTA
#define OUT4_DDR                                 DDRA
#define OUT4_ModeOutput()                        OUT4_DDR |= _BV(OUT4_BIT)
#define OUT4_IsOutput()                          ((OUT4_DDR & _BV(OUT4_BIT)) != 0)
#define OUT4_SetHIGH()                           OUT4_PORT |= _BV(OUT4_BIT)
#define OUT4_SetLOW()                            OUT4_PORT &= ~_BV(OUT4_BIT)
#define OUT4_Get()                               (OUT4_PIN & _BV(OUT4_BIT))
#define OUT4_SetInactive()                       OUT4_SetLOW()
#define OUT4_SetActive()                         OUT4_SetHIGH()
#define OUT4_Toggle()                            OUT4_PORT ^= _BV(OUT4_BIT)
#define OUT4_SetConditional(condition)           if (condition) OUT4_SetActive(); else OUT4_SetInactive()
#define OUT4_SetConditionalToggle(conditionon, conditionoff, conditiontoggle) if (conditionon) { OUT4_SetActive(); } else if (conditionoff) { OUT4_SetInactive(); } else if (conditiontoggle) { OUT4_Toggle(); }
#define OUT4_Pulse()                             { OUT4_SetActive(); OUT4_SetInactive(); }
#define OUT4_PulseNop()                          { OUT4_SetActive(); nop(); OUT4_SetInactive(); }
#define OUT4_IsInactive()                        (OUT4_Get() == 0)
#define OUT4_IsActive()                          (OUT4_Get() != 0)
#define OUT4_Init()                              { OUT4_SetInactive(); OUT4_ModeOutput(); }

/* OUT5 -> PA5 (Output, Initially Inactive) */
#define OUT5_BIT                                 5
#define OUT5_PIN                                 PINA
#define OUT5_PORT                                PORTA
#define OUT5_DDR                                 DDRA
#define OUT5_ModeOutput()                        OUT5_DDR |= _BV(OUT5_BIT)
#define OUT5_IsOutput()                          ((OUT5_DDR & _BV(OUT5_BIT)) != 0)
#define OUT5_SetHIGH()                           OUT5_PORT |= _BV(OUT5_BIT)
#define OUT5_SetLOW()                            OUT5_PORT &= ~_BV(OUT5_BIT)
#define OUT5_Get()                               (OUT5_PIN & _BV(OUT5_BIT))
#define OUT5_SetInactive()                       OUT5_SetLOW()
#define OUT5_SetActive()                         OUT5_SetHIGH()
#define OUT5_Toggle()                            OUT5_PORT ^= _BV(OUT5_BIT)
#define OUT5_SetConditional(condition)           if (condition) OUT5_SetActive(); else OUT5_SetInactive()
#define OUT5_SetConditionalToggle(conditionon, conditionoff, conditiontoggle) if (conditionon) { OUT5_SetActive(); } else if (conditionoff) { OUT5_SetInactive(); } else if (conditiontoggle) { OUT5_Toggle(); }
#define OUT5_Pulse()                             { OUT5_SetActive(); OUT5_SetInactive(); }
#define OUT5_PulseNop()                          { OUT5_SetActive(); nop(); OUT5_SetInactive(); }
#define OUT5_IsInactive()                        (OUT5_Get() == 0)
#define OUT5_IsActive()                          (OUT5_Get() != 0)
#define OUT5_Init()                              { OUT5_SetInactive(); OUT5_ModeOutput(); }

/* OUT6 -> PA6 (Output, Initially Inactive) */
#define OUT6_BIT                                 6
#define OUT6_PIN                                 PINA
#define OUT6_PORT                                PORTA
#define OUT6_DDR                                 DDRA
#define OUT6_ModeOutput()                        OUT6_DDR |= _BV(OUT6_BIT)
#define OUT6_IsOutput()                          ((OUT6_DDR & _BV(OUT6_BIT)) != 0)
#define OUT6_SetHIGH()                           OUT6_PORT |= _BV(OUT6_BIT)
#define OUT6_SetLOW()                            OUT6_PORT &= ~_BV(OUT6_BIT)
#define OUT6_Get()                               (OUT6_PIN & _BV(OUT6_BIT))
#define OUT6_SetInactive()                       OUT6_SetLOW()
#define OUT6_SetActive()                         OUT6_SetHIGH()
#define OUT6_Toggle()                            OUT6_PORT ^= _BV(OUT6_BIT)
#define OUT6_SetConditional(condition)           if (condition) OUT6_SetActive(); else OUT6_SetInactive()
#define OUT6_SetConditionalToggle(conditionon, conditionoff, conditiontoggle) if (conditionon) { OUT6_SetActive(); } else if (conditionoff) { OUT6_SetInactive(); } else if (conditiontoggle) { OUT6_Toggle(); }
#define OUT6_Pulse()                             { OUT6_SetActive(); OUT6_SetInactive(); }
#define OUT6_PulseNop()                          { OUT6_SetActive(); nop(); OUT6_SetInactive(); }
#define OUT6_IsInactive()                        (OUT6_Get() == 0)
#define OUT6_IsActive()                          (OUT6_Get() != 0)
#define OUT6_Init()                              { OUT6_SetInactive(); OUT6_ModeOutput(); }

/* OUT7 -> PA7 (Output, Initially Inactive) */
#define OUT7_BIT                                 7
#define OUT7_PIN                                 PINA
#define OUT7_PORT                                PORTA
#define OUT7_DDR                                 DDRA
#define OUT7_ModeOutput()                        OUT7_DDR |= _BV(OUT7_BIT)
#define OUT7_IsOutput()                          ((OUT7_DDR & _BV(OUT7_BIT)) != 0)
#define OUT7_SetHIGH()                           OUT7_PORT |= _BV(OUT7_BIT)
#define OUT7_SetLOW()                            OUT7_PORT &= ~_BV(OUT7_BIT)
#define OUT7_Get()                               (OUT7_PIN & _BV(OUT7_BIT))
#define OUT7_SetInactive()                       OUT7_SetLOW()
#define OUT7_SetActive()                         OUT7_SetHIGH()
#define OUT7_Toggle()                            OUT7_PORT ^= _BV(OUT7_BIT)
#define OUT7_SetConditional(condition)           if (condition) OUT7_SetActive(); else OUT7_SetInactive()
#define OUT7_SetConditionalToggle(conditionon, conditionoff, conditiontoggle) if (conditionon) { OUT7_SetActive(); } else if (conditionoff) { OUT7_SetInactive(); } else if (conditiontoggle) { OUT7_Toggle(); }
#define OUT7_Pulse()                             { OUT7_SetActive(); OUT7_SetInactive(); }
#define OUT7_PulseNop()                          { OUT7_SetActive(); nop(); OUT7_SetInactive(); }
#define OUT7_IsInactive()                        (OUT7_Get() == 0)
#define OUT7_IsActive()                          (OUT7_Get() != 0)
#define OUT7_Init()                              { OUT7_SetInactive(); OUT7_ModeOutput(); }

#define initHAL() {\
		OUT0_Init();\
		OUT1_Init();\
		OUT2_Init();\
		OUT3_Init();\
		OUT4_Init();\
		OUT5_Init();\
		OUT6_Init();\
		OUT7_Init();\
}

#endif
