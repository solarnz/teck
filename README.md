You probably don't want to use this. It's not even my code.

It's another keyboard using the `tmk` keyboard firmware, just go look at [tmk_keyboard](https://github.com/tmk/tmk_keyboard)

# home keyboard

```
make KEYMAP=teck_home && teensy-loader-cli -w -mmcu=atmega32u4 -v teck_lufa.hex
```

# work keyboard

```
make KEYMAP=teck_work
```
