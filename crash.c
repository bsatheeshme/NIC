#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void usage(const char* name) {
	printf("Usage: %s [int code]\n", name);
	exit(1);
}

void doInterrupt(uint8_t code) {
	switch (code) {
		case 0: asm volatile("int $0"); break;
		case 1: asm volatile("int $1"); break;
		case 2: asm volatile("int $2"); break;
		case 3: asm volatile("int $3"); break;
		case 4: asm volatile("int $4"); break;
		case 5: asm volatile("int $5"); break;
		case 6: asm volatile("int $6"); break;
		case 7: asm volatile("int $7"); break;
		case 8: asm volatile("int $8"); break;
		case 9: asm volatile("int $9"); break;
		case 10: asm volatile("int $10"); break;
		case 11: asm volatile("int $11"); break;
		case 12: asm volatile("int $12"); break;
		case 13: asm volatile("int $13"); break;
		case 14: asm volatile("int $14"); break;
		case 15: asm volatile("int $15"); break;
		case 16: asm volatile("int $16"); break;
		case 17: asm volatile("int $17"); break;
		case 18: asm volatile("int $18"); break;
		case 19: asm volatile("int $19"); break;
		case 20: asm volatile("int $20"); break;
		case 21: asm volatile("int $21"); break;
		case 22: asm volatile("int $22"); break;
		case 23: asm volatile("int $23"); break;
		case 24: asm volatile("int $24"); break;
		case 25: asm volatile("int $25"); break;
		case 26: asm volatile("int $26"); break;
		case 27: asm volatile("int $27"); break;
		case 28: asm volatile("int $28"); break;
		case 29: asm volatile("int $29"); break;
		case 30: asm volatile("int $30"); break;
		case 31: asm volatile("int $31"); break;
		case 32: asm volatile("int $32"); break;
		case 33: asm volatile("int $33"); break;
		case 34: asm volatile("int $34"); break;
		case 35: asm volatile("int $35"); break;
		case 36: asm volatile("int $36"); break;
		case 37: asm volatile("int $37"); break;
		case 38: asm volatile("int $38"); break;
		case 39: asm volatile("int $39"); break;
		case 40: asm volatile("int $40"); break;
		case 41: asm volatile("int $41"); break;
		case 42: asm volatile("int $42"); break;
		case 43: asm volatile("int $43"); break;
		case 44: asm volatile("int $44"); break;
		case 45: asm volatile("int $45"); break;
		case 46: asm volatile("int $46"); break;
		case 47: asm volatile("int $47"); break;
		case 48: asm volatile("int $48"); break;
		case 49: asm volatile("int $49"); break;
		case 50: asm("int $50"); break;
		case 51: asm volatile("int $51"); break;
		case 52: asm volatile("int $52"); break;
		case 53: asm volatile("int $53"); break;
		case 54: asm volatile("int $54"); break;
		case 55: asm volatile("int $55"); break;
		case 56: asm volatile("int $56"); break;
		case 57: asm volatile("int $57"); break;
		case 58: asm volatile("int $58"); break;
		case 59: asm volatile("int $59"); break;
		case 60: asm volatile("int $60"); break;
		case 61: asm volatile("int $61"); break;
		case 62: asm volatile("int $62"); break;
		case 63: asm volatile("int $63"); break;
		case 64: asm volatile("int $64"); break;
		case 65: asm volatile("int $65"); break;
		case 66: asm volatile("int $66"); break;
		case 67: asm volatile("int $67"); break;
		case 68: asm volatile("int $68"); break;
		case 69: asm volatile("int $69"); break;
		case 70: asm volatile("int $70"); break;
		case 71: asm volatile("int $71"); break;
		case 72: asm volatile("int $72"); break;
		case 73: asm volatile("int $73"); break;
		case 74: asm volatile("int $74"); break;
		case 75: asm volatile("int $75"); break;
		case 76: asm volatile("int $76"); break;
		case 77: asm volatile("int $77"); break;
		case 78: asm volatile("int $78"); break;
		case 79: asm volatile("int $79"); break;
		case 80: asm volatile("int $80"); break;
		case 81: asm volatile("int $81"); break;
		case 82: asm volatile("int $82"); break;
		case 83: asm volatile("int $83"); break;
		case 84: asm volatile("int $84"); break;
		case 85: asm volatile("int $85"); break;
		case 86: asm volatile("int $86"); break;
		case 87: asm volatile("int $87"); break;
		case 88: asm volatile("int $88"); break;
		case 89: asm volatile("int $89"); break;
		case 90: asm volatile("int $90"); break;
		case 91: asm volatile("int $91"); break;
		case 92: asm volatile("int $92"); break;
		case 93: asm volatile("int $93"); break;
		case 94: asm volatile("int $94"); break;
		case 95: asm volatile("int $95"); break;
		case 96: asm volatile("int $96"); break;
		case 97: asm volatile("int $97"); break;
		case 98: asm volatile("int $98"); break;
		case 99: asm volatile("int $99"); break;
		case 100: asm volatile("int $100"); break;
		case 101: asm volatile("int $101"); break;
		case 102: asm volatile("int $102"); break;
		case 103: asm volatile("int $103"); break;
		case 104: asm volatile("int $104"); break;
		case 105: asm volatile("int $105"); break;
		case 106: asm volatile("int $106"); break;
		case 107: asm volatile("int $107"); break;
		case 108: asm volatile("int $108"); break;
		case 109: asm volatile("int $109"); break;
		case 110: asm volatile("int $110"); break;
		case 111: asm volatile("int $111"); break;
		case 112: asm volatile("int $112"); break;
		case 113: asm volatile("int $113"); break;
		case 114: asm volatile("int $114"); break;
		case 115: asm volatile("int $115"); break;
		case 116: asm volatile("int $116"); break;
		case 117: asm volatile("int $117"); break;
		case 118: asm volatile("int $118"); break;
		case 119: asm volatile("int $119"); break;
		case 120: asm volatile("int $120"); break;
		case 121: asm volatile("int $121"); break;
		case 122: asm volatile("int $122"); break;
		case 123: asm volatile("int $123"); break;
		case 124: asm volatile("int $124"); break;
		case 125: asm volatile("int $125"); break;
		case 126: asm volatile("int $126"); break;
		case 127: asm volatile("int $127"); break;
		case 128: asm volatile("int $128"); break;
		case 129: asm volatile("int $129"); break;
		case 130: asm volatile("int $130"); break;
		case 131: asm volatile("int $131"); break;
		case 132: asm volatile("int $132"); break;
		case 133: asm volatile("int $133"); break;
		case 134: asm volatile("int $134"); break;
		case 135: asm volatile("int $135"); break;
		case 136: asm volatile("int $136"); break;
		case 137: asm volatile("int $137"); break;
		case 138: asm volatile("int $138"); break;
		case 139: asm volatile("int $139"); break;
		case 140: asm volatile("int $140"); break;
		case 141: asm volatile("int $141"); break;
		case 142: asm volatile("int $142"); break;
		case 143: asm volatile("int $143"); break;
		case 144: asm volatile("int $144"); break;
		case 145: asm volatile("int $145"); break;
		case 146: asm volatile("int $146"); break;
		case 147: asm volatile("int $147"); break;
		case 148: asm volatile("int $148"); break;
		case 149: asm volatile("int $149"); break;
		case 150: asm volatile("int $150"); break;
		case 151: asm volatile("int $151"); break;
		case 152: asm volatile("int $152"); break;
		case 153: asm volatile("int $153"); break;
		case 154: asm volatile("int $154"); break;
		case 155: asm volatile("int $155"); break;
		case 156: asm volatile("int $156"); break;
		case 157: asm volatile("int $157"); break;
		case 158: asm volatile("int $158"); break;
		case 159: asm volatile("int $159"); break;
		case 160: asm volatile("int $160"); break;
		case 161: asm volatile("int $161"); break;
		case 162: asm volatile("int $162"); break;
		case 163: asm volatile("int $163"); break;
		case 164: asm volatile("int $164"); break;
		case 165: asm volatile("int $165"); break;
		case 166: asm volatile("int $166"); break;
		case 167: asm volatile("int $167"); break;
		case 168: asm volatile("int $168"); break;
		case 169: asm volatile("int $169"); break;
		case 170: asm volatile("int $170"); break;
		case 171: asm volatile("int $171"); break;
		case 172: asm volatile("int $172"); break;
		case 173: asm volatile("int $173"); break;
		case 174: asm volatile("int $174"); break;
		case 175: asm volatile("int $175"); break;
		case 176: asm volatile("int $176"); break;
		case 177: asm volatile("int $177"); break;
		case 178: asm volatile("int $178"); break;
		case 179: asm volatile("int $179"); break;
		case 180: asm volatile("int $180"); break;
		case 181: asm volatile("int $181"); break;
		case 182: asm volatile("int $182"); break;
		case 183: asm volatile("int $183"); break;
		case 184: asm volatile("int $184"); break;
		case 185: asm volatile("int $185"); break;
		case 186: asm volatile("int $186"); break;
		case 187: asm volatile("int $187"); break;
		case 188: asm volatile("int $188"); break;
		case 189: asm volatile("int $189"); break;
		case 190: asm volatile("int $190"); break;
		case 191: asm volatile("int $191"); break;
		case 192: asm volatile("int $192"); break;
		case 193: asm volatile("int $193"); break;
		case 194: asm volatile("int $194"); break;
		case 195: asm volatile("int $195"); break;
		case 196: asm volatile("int $196"); break;
		case 197: asm volatile("int $197"); break;
		case 198: asm volatile("int $198"); break;
		case 199: asm volatile("int $199"); break;
		case 200: asm volatile("int $200"); break;
		case 201: asm volatile("int $201"); break;
		case 202: asm volatile("int $202"); break;
		case 203: asm volatile("int $203"); break;
		case 204: asm volatile("int $204"); break;
		case 205: asm volatile("int $205"); break;
		case 206: asm volatile("int $206"); break;
		case 207: asm volatile("int $207"); break;
		case 208: asm volatile("int $208"); break;
		case 209: asm volatile("int $209"); break;
		case 210: asm volatile("int $210"); break;
		case 211: asm volatile("int $211"); break;
		case 212: asm volatile("int $212"); break;
		case 213: asm volatile("int $213"); break;
		case 214: asm volatile("int $214"); break;
		case 215: asm volatile("int $215"); break;
		case 216: asm volatile("int $216"); break;
		case 217: asm volatile("int $217"); break;
		case 218: asm volatile("int $218"); break;
		case 219: asm volatile("int $219"); break;
		case 220: asm volatile("int $220"); break;
		case 221: asm volatile("int $221"); break;
		case 222: asm volatile("int $222"); break;
		case 223: asm volatile("int $223"); break;
		case 224: asm volatile("int $224"); break;
		case 225: asm volatile("int $225"); break;
		case 226: asm volatile("int $226"); break;
		case 227: asm volatile("int $227"); break;
		case 228: asm volatile("int $228"); break;
		case 229: asm volatile("int $229"); break;
		case 230: asm volatile("int $230"); break;
		case 231: asm volatile("int $231"); break;
		case 232: asm volatile("int $232"); break;
		case 233: asm volatile("int $233"); break;
		case 234: asm volatile("int $234"); break;
		case 235: asm volatile("int $235"); break;
		case 236: asm volatile("int $236"); break;
		case 237: asm volatile("int $237"); break;
		case 238: asm volatile("int $238"); break;
		case 239: asm volatile("int $239"); break;
		case 240: asm volatile("int $240"); break;
		case 241: asm volatile("int $241"); break;
		case 242: asm volatile("int $242"); break;
		case 243: asm volatile("int $243"); break;
		case 244: asm volatile("int $244"); break;
		case 245: asm volatile("int $245"); break;
		case 246: asm volatile("int $246"); break;
		case 247: asm volatile("int $247"); break;
		case 248: asm volatile("int $248"); break;
		case 249: asm volatile("int $249"); break;
		case 250: asm volatile("int $250"); break;
		case 251: asm volatile("int $251"); break;
		case 252: asm volatile("int $252"); break;
		case 253: asm volatile("int $253"); break;
		case 254: asm volatile("int $254"); break;
		case 255: asm volatile("int $255"); break;
	}
}

int main(int argc, const char *argv[]) {
	if (argc != 2) {
		usage(argv[0]);
	}
	int intCode = atoi(argv[1]);
	if (intCode < 0 || intCode > 255) {
		usage(argv[0]);
	}
	puts("About to call interrupt");
	doInterrupt((uint8_t)intCode);
	puts("Did interrupt");
	return 0;
}
