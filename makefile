EE_BIN = scripts/RandomLaddersMKA.elf
EE_OBJS = source\main.o \
source\ladder.o \
source\ps2mem.o \
source\mka\core.c \

NEWLIB_NANO = 1
KERNEL_NOPATCH = 1

BASE_ADDRESS = 0x9F0000
EE_LINKFILE = linkfile

EE_CFLAGS =  -fno-zero-initialized-in-bss
EE_LDFLAGS = -Wl,--entry=INVOKER -Wl,-Map,scripts/RandomLaddersMKA.map -Wl,'--defsym=BASE_ADDRESS=$(BASE_ADDRESS)'

all: $(EE_BIN)

PS2SDK = external/ps2sdk/ps2sdk
include $(PS2SDK)/samples/Makefile.pref
include eemakefile.eeglobal
