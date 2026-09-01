#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>

/ {
    keymap {
        compatible = "zmk,keymap";

        layer_0 {
            bindings = <
                &kp ESC  &kp F1  &kp F2  &kp F3  &kp F4  &kp F5  &kp F6  &kp F7  &kp F8  &kp F9  &kp F10  &kp F11  &kp F12  &kp PRINTSCREEN  &kp SCROLLLOCK  &kp PAUSE_BREAK  
                &kp GRAVE  &kp N1  &kp N2  &kp N3  &kp N4  &kp N5  &kp N6  &kp N7  &kp N8  &kp N9  &kp N0  &kp MINUS  &kp EQUAL  &kp BSPC  &kp INSERT  &kp HOME  &kp PAGE_UP  &kp KP_NUMLOCK  &kp KP_SLASH  &kp KP_ASTERISK  &kp KP_SUBTRACT  
                &kp TAB  &kp Q  &kp W  &kp E  &kp R  &kp T  &kp Y  &kp U  &kp I  &kp O  &kp P  &kp LBKT  &kp RBKT  &kp BSLH  &kp DEL  &kp END  &kp PAGE_DOWN  &kp KP_NUMBER_7  &kp KP_NUMBER_8  &kp KP_NUMBER_9  &kp KP_PLUS  
                &kp CAPS  &kp A  &kp S  &kp D  &kp F  &kp G  &kp H  &kp J  &kp K  &kp L  &kp SEMI  &kp APOS  &kp ENTER  &kp KP_NUMBER_4  &kp KP_NUMBER_5  &kp KP_NUMBER_6  
                &kp LSHFT  &kp Z  &kp X  &kp C  &kp V  &kp B  &kp N  &kp M  &kp COMMA  &kp DOT  &kp FSLH  &kp RSHFT  &kp UP  &kp KP_NUMBER_1  &kp KP_NUMBER_2  &kp KP_NUMBER_3  &kp KP_ENTER  
                &kp LCTRL  &kp LALT  &kp SPACE  &kp RALT  &kp RCTRL  &kp LEFT  &kp DOWN  &kp RIGHT  &kp KP_NUMBER_0  &kp KP_DOT
            >;
        };
    };
};
