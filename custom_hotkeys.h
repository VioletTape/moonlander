#pragma once

#ifndef CUSTOM_SAFE_RANGE
  #error "You must specify variable CUSTOM_SAFE_RANGE for custom hotkeys keycodes."
#endif

enum custom_hotkeys_keycodes {
  CUSTOM_HOTKEYS_START = CUSTOM_SAFE_RANGE,

  KG_NEXT,
  MY_SCRN,
  CT_A_C,
  CT_A_V,
  CT_A_X,
  CT_D,
  CT_SLSH,
  CT_Y,
  CT_Z,
  AR_L5,
  TEST_THIS,
  TEST_LAST,
  TEST_ALL,
  TEST_DEBUG,
  TEST_SESSION,
  B_TOGGLE,
  B_PREV,
  B_NEXT,
  R_PU,
  R_INT,
  SPLIT,
  SOLEX,
  GITEX,
  TG_EXP, 
  

  CUSTOM_HOTKEYS_NEW_SAFE_RANGE,
  #undef CUSTOM_SAFE_RANGE
  #define CUSTOM_SAFE_RANGE CUSTOM_HOTKEYS_NEW_SAFE_RANGE
};

// Мои языко-символьные клавиши
bool process_my_hotkeys(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case R_PU:
    if (record->event.pressed) {
      register_code(KC_LALT);
      register_code(KC_LSFT);
      register_code(KC_R);
      unregister_code(KC_LALT);
      unregister_code(KC_LSFT);
      unregister_code(KC_R);
      register_code(KC_U);
      unregister_code(KC_U);
    }
    return false;
    break;

  case R_INT:
    if (record->event.pressed) {
      register_code(KC_LALT);
      register_code(KC_LSFT);
      register_code(KC_R);
      unregister_code(KC_LALT);
      unregister_code(KC_LSFT);
      unregister_code(KC_R);
      register_code(KC_I);
      unregister_code(KC_I);
    }
    return false;
    break;

   case SOLEX:
    if (record->event.pressed) {
      register_code(KC_LCTL);
      register_code(KC_BSLS);
      unregister_code(KC_LCTL);
      unregister_code(KC_BSLS);
      register_code(KC_S);
      unregister_code(KC_S);
    }
    return false;
    break;

  case GITEX:
    if (record->event.pressed) {
      register_code(KC_LCTL);
      register_code(KC_BSLS);
      unregister_code(KC_LCTL);
      unregister_code(KC_BSLS);
      register_code(KC_G);
      unregister_code(KC_G);
    }
    return false;
    break;

  case TG_EXP: // toggle expansion
    if (record->event.pressed) {
      register_code(KC_LCTL);
      register_code(KC_M);
      unregister_code(KC_LCTL);
      unregister_code(KC_M);
      register_code(KC_LCTL);
      register_code(KC_M);
      unregister_code(KC_LCTL);
      unregister_code(KC_M);
    }
    return false;
    break;

  case SPLIT:
    if (record->event.pressed) {
      register_code(KC_LALT);
      register_code(KC_LSFT);
      register_code(KC_R);
      unregister_code(KC_LALT);
      unregister_code(KC_LSFT);
      unregister_code(KC_R);
      register_code(KC_RGHT);
      unregister_code(KC_RGHT);
    }
    return false;
    break;
    
  case TEST_LAST:
    if (record->event.pressed) {
      register_code(KC_LCTL);
      register_code(KC_T);
      unregister_code(KC_LCTL);
      unregister_code(KC_T);
      register_code(KC_LCTL);
      register_code(KC_T);
      unregister_code(KC_LCTL);
      unregister_code(KC_T);
    }
    return false;
    break;

case TEST_THIS:
    if (record->event.pressed) {
      register_code(KC_LCTL);
      register_code(KC_T);
      unregister_code(KC_LCTL);
      unregister_code(KC_T);
      register_code(KC_LCTL);
      register_code(KC_R);
      unregister_code(KC_LCTL);
      unregister_code(KC_R);
    }
    return false;
    break;

  case TEST_ALL:
    if (record->event.pressed) {
      register_code(KC_LCTL);
      register_code(KC_T);
      unregister_code(KC_LCTL);
      unregister_code(KC_T);
      register_code(KC_LCTL);
      register_code(KC_L);
      unregister_code(KC_LCTL);
      unregister_code(KC_L);
    }
    return false;
    break;
  case TEST_DEBUG:
    if (record->event.pressed) {
      register_code(KC_LCTL);
      register_code(KC_T);
      unregister_code(KC_LCTL);
      unregister_code(KC_T);
      register_code(KC_LCTL);
      register_code(KC_D);
      unregister_code(KC_LCTL);
      unregister_code(KC_D);
    }
    return false;
    break;
  case TEST_SESSION:
    if (record->event.pressed) {
      register_code(KC_LCTL);
      register_code(KC_T);
      unregister_code(KC_LCTL);
      unregister_code(KC_T);
      register_code(KC_LCTL);
      register_code(KC_Y);
      unregister_code(KC_LCTL);
      unregister_code(KC_Y);
    }
    return false;
    break;
  case B_TOGGLE:
    if (record->event.pressed) {
      register_code(KC_LCTL);
      register_code(KC_M);
      unregister_code(KC_LCTL);
      unregister_code(KC_M);
      register_code(KC_LCTL);
      register_code(KC_K);
      unregister_code(KC_LCTL);
      unregister_code(KC_K);
    }
    return false;
    break;
  case B_PREV:
    if (record->event.pressed) {
      register_code(KC_LCTL);
      register_code(KC_M);
      unregister_code(KC_LCTL);
      unregister_code(KC_M);
      register_code(KC_LCTL);
      register_code(KC_J);
      unregister_code(KC_LCTL);
      unregister_code(KC_J);
    }
    return false;
    break;
  case B_NEXT:
    if (record->event.pressed) {
      register_code(KC_LCTL);
      register_code(KC_M);
      unregister_code(KC_LCTL);
      unregister_code(KC_M);
      register_code(KC_LCTL);
      register_code(KC_N);
      unregister_code(KC_LCTL);
      unregister_code(KC_N);
    }
    return false;
    break;
    
    case KG_NEXT:
      if (record->event.pressed) {
        register_code(KC_TAB);
        unregister_code(KC_TAB);
        register_code(KC_TAB);
        unregister_code(KC_TAB);
        register_code(KC_LCTRL);
        register_code(KC_RGHT);
        unregister_code(KC_RGHT);
        unregister_code(KC_LCTRL);
      }
      return false;
      break;
    case MY_SCRN:
      if (record->event.pressed) {
        switch (lang_current_change) {
          case LANG_CHANGE_CAPS: {
            register_code(KC_LCTRL);
            register_code(KC_LSHIFT);
            register_code(KC_PSCR);
            unregister_code(KC_PSCR);
            unregister_code(KC_LSHIFT);
            unregister_code(KC_LCTRL);
          } break;
          case LANG_CHANGE_ALT_SHIFT:
          case LANG_CHANGE_CTRL_SHIFT: {
            register_code(KC_LGUI);
              register_code(KC_LSHIFT);
              register_code(KC_S);
            unregister_code(KC_S);
              unregister_code(KC_LSHIFT);
              unregister_code(KC_LGUI);
          } break;
          case LANG_CHANGE_WIN_SPACE: {
            // No screenshot, maybe it android
          } break;
        }
      }
      return false;
      break;
    case CT_A_C:
      if (record->event.pressed) {
        shift_activate(0);
        register_code(KC_LCTRL);
        register_code(KC_A);
        unregister_code(KC_A);
        register_code(KC_C);
        unregister_code(KC_C);
        unregister_code(KC_LCTRL);
      }
      return false;
    case CT_A_V:
      if (record->event.pressed) {
        shift_activate(0);
        register_code(KC_LCTRL);
        register_code(KC_A);
        unregister_code(KC_A);
        register_code(KC_V);
        unregister_code(KC_V);
        unregister_code(KC_LCTRL);
      }
      return false;
    case CT_A_X:
      if (record->event.pressed) {
        shift_activate(0);
        register_code(KC_LCTRL);
        register_code(KC_A);
        unregister_code(KC_A);
        register_code(KC_X);
        unregister_code(KC_X);
        unregister_code(KC_LCTRL);
      }
      return false;
    case CT_D:
      if (record->event.pressed) {
        lang_activate(0);
        register_code(KC_LCTRL);
        register_code(KC_D);
      } else {
        unregister_code(KC_D);
        unregister_code(KC_LCTRL);
      }
      return false;
    case CT_Y:
      if (record->event.pressed) {
        shift_activate(0);
        register_code(KC_LCTRL);
        register_code(KC_Y);
      } else {
        unregister_code(KC_Y);
        unregister_code(KC_LCTRL);
      }
      return false;
    case CT_Z:
      if (record->event.pressed) {
        shift_activate(0);
        register_code(KC_LCTRL);
        register_code(KC_Z);
      } else {
        unregister_code(KC_Z);
        unregister_code(KC_LCTRL);
      }
      return false;
    case CT_SLSH:
      if (record->event.pressed) {
        lang_activate(0);
        register_code(KC_LCTRL);
        register_code(KC_SLSH);
      } else {
        unregister_code(KC_SLSH);
        unregister_code(KC_LCTRL);
      }
      return false;
    case AR_L5:
      if (record->event.pressed) {
        register_code(KC_LEFT);
        unregister_code(KC_LEFT);
        register_code(KC_LEFT);
        unregister_code(KC_LEFT);
        register_code(KC_LEFT);
        unregister_code(KC_LEFT);
        register_code(KC_LEFT);
        unregister_code(KC_LEFT);
        register_code(KC_LEFT);
        unregister_code(KC_LEFT);
      }
      return false;
  }

  return true;
}
