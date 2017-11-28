These are the HwCPP target HALs.

chip-*.hpp files describe a target chip or chip group.

target-*.hpp files describe a target, which can be chip or a board.

Normal use would be for the user to include hwcpp.hpp (in ../library) and specify the target using a command-line define.
Aternately, the user could include one of the target-*.hpp files directly.