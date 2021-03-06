/*! \mainpage This project needs implementation.
 * Its goal is to allow game developers to have a portable interface
 * which provides a basic computer interface, not some overly fancy
 * email program that takes up the entire screen.
 *
 * It should be able to support small one-window screens to theoretically 16K+ windows
 *
 * Windows are only capturing objects. It is the processes, which can house multiple
 * windows which process all the events and draw back on the SDL_Surface
 *
 * A conceptual slideshow with images and all is at http://engine.corditestudios.com/dm/
 *
 */
#ifndef CORDITE_EVENTS
#define CORDITE_EVENTS
#include <vector>
namespace cordite {
  namespace dm {
    namespace events {
      /*! \enum General button event
       * 
       * Just general button events.
       */
      enum E_TYPE {
	PRESS,
	RELEASE,
	HOLD
      };
      /*! \enum Each key/button is enumerated here
       * 
       * Some of the keys are mapped to their actual char equiv, but don't depend on that in case things need to be reorganized.
       * A key event should always come with this.
       */
      enum E_KEY {
	KEY_NULL,
	KEY_LMOUSE,
	KEY_RMOUSE,
	KEY_MMOUSE,
	KEY_MX1,
	KEY_MX2,
	KEY_BACK,
	KEY_TAB = '\t',
	KEY_RETURN,
	KEY_SHIFT,
	KEY_CONTROL,
	KEY_LALT,
	KEY_RALT,
	KEY_PAUSE,
	KEY_CAPSLOCK,
	KEY_ESCAPE,
	KEY_SPACE = ' ',
	KEY_PGUP,
	KEY_PGDOWN,
	KEY_END,
	KEY_HOME,
	KEY_INSERT,
	KEY_DELETE,
	KEY_LEFT,
	KEY_RIGHT,
	KEY_DOWN,
	KEY_UP,
	KEY_PRINTSCR,
	KEY_KEY_0 = 0x30,
	KEY_KEY_1,
	KEY_KEY_2,
	KEY_KEY_3,
	KEY_KEY_4,
	KEY_KEY_5,
	KEY_KEY_6,
	KEY_KEY_7,
	KEY_KEY_8,
	KEY_KEY_9,
	KEY_KEY_A = 0x61,
	KEY_KEY_B,
	KEY_KEY_C,
	KEY_KEY_D,
	KEY_KEY_E,
	KEY_KEY_F,
	KEY_KEY_G,
	KEY_KEY_H,
	KEY_KEY_I,
	KEY_KEY_J,
	KEY_KEY_K,
	KEY_KEY_L,
	KEY_KEY_M,
	KEY_KEY_N,
	KEY_KEY_O,
	KEY_KEY_P,
	KEY_KEY_Q,
	KEY_KEY_R,
	KEY_KEY_S,
	KEY_KEY_T,
	KEY_KEY_U,
	KEY_KEY_V,
	KEY_KEY_W,
	KEY_KEY_X,
	KEY_KEY_Y,
	KEY_KEY_Z,
	KEY_LMETA,//I refuse to call it the windows key.
	KEY_RMETA,
	KEY_NUM_0,
	KEY_NUM_1,
	KEY_NUM_2,
	KEY_NUM_3,
	KEY_NUM_4,
	KEY_NUM_5,
	KEY_NUM_6,
	KEY_NUM_7,
	KEY_NUM_8,
	KEY_NUM_9,
	KEY_NUM_MULT,
	KEY_NUM_ADD,
	KEY_NUM_SUBTRACT,
	KEY_NUM_DIVIDE,
	KEY_NUM_DECIMAL,
	KEY_F1,
	KEY_F2,
	KEY_F3,
	KEY_F4,
	KEY_F5,
	KEY_F6,
	KEY_F7,
	KEY_F8,
	KEY_F9,
	KEY_F10,
	KEY_F11,
	KEY_F12,
	KEY_NUMLOCK,
	KEY_SCROLL,
	KEY_LSHIFT,
	KEY_RSHIFT,
	KEY_COMMA,
	KEY_PERIOD,
	KEY_QUOTE
      };
      /*! \brief a information pair for an event
       * Holds the kind of event and the key associated
       */
      struct eventBase {
	E_TYPE kind;
	E_KEY key;
      };
      /*! \brief holds a collection of the eventBase for the client to process
       * This should be forwarded to any clients which are focused when the event is not used by the manager for things like dragging.
       */
      struct eventList {
	std::vector<eventBase> events;
	//!is true when it has events
	bool hasEvents;
      };
    };
  };
};

#endif