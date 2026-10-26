/*
 * FUN_00604051 at 00604051
 * undefined FUN_00604051(void)
 * Address ranges: 00604051-006040aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00604051(undefined1 *param_1,char param_2,uint param_3)

{
  undefined1 *puVar1;
  
  *param_1 = 0x25;
  puVar1 = param_1 + 1;
  if ((param_3 & 0x20) != 0) {
    *puVar1 = 0x2b;
    puVar1 = param_1 + 2;
  }
  if ((param_3 & 8) != 0) {
    *puVar1 = 0x23;
    puVar1 = puVar1 + 1;
  }
  *puVar1 = 0x6c;
  if ((param_3 & 0xe00) == 0x400) {
    param_2 = 'o';
  }
  else if ((param_3 & 0xe00) == 0x800) {
    param_2 = (~(byte)param_3 & 4 | 0xb) << 3;
  }
  puVar1[1] = param_2;
  puVar1[2] = 0;
  return;
}

