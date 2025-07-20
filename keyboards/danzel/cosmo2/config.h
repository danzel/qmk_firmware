//https://docs.qmk.fm/drivers/serial#setup-2
#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0     // USART TX pin
#define SERIAL_USART_RX_PIN GP1     // USART RX pin

#define SPLIT_WATCHDOG_ENABLE

//https://www.reddit.com/r/ErgoMechKeyboards/comments/1kr7efr/psa_to_those_who_want_hrm/
//https://docs.qmk.fm/tap_hold#chordal-hold
#define CHORDAL_HOLD

#define PERMISSIVE_HOLD

//Maybe to try https://docs.qmk.fm/tap_hold#flow-tap