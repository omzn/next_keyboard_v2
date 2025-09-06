# NeXT Keyboard v2

*A NeXT keyboard with reverse L-type enter key*

* Keyboard Maintainer: [omzn](https://github.com/omzn)
* Hardware Supported: Old NeXT Keyboard as a Junk
* Hardware Availability: none (DIY)

Make example for this keyboard (after setting up your build environment):

    make next_keyboard_v2:default

Flashing example for this keyboard:

    make next_keyboard_v2:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available (Power + Esc)

## アイコン作成
* https://javl.github.io/image2cpp/

## Keyboard Layout editor
* http://www.keyboard-layout-editor.com/#/gists/c612c96a738505e96405d6d47ed0b286
