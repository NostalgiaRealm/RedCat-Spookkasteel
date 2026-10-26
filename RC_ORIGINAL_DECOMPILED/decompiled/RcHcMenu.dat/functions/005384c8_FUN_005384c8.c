/*
 * FUN_005384c8 at 005384c8
 * undefined __register FUN_005384c8(undefined4 param_1, int param_2, char param_3, undefined1 * param_4)
 * Address ranges: 005384c8-00538520
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005384c8(undefined4 param_1,int param_2,char param_3,undefined1 *param_4)

{
  short sVar1;
  
  sVar1 = *(short *)(param_2 + 4);
  if ((param_3 == '\0') && ((sVar1 == 0xd || (sVar1 == 0x1b)))) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *param_4 = 1;
  }
  if (sVar1 == 9) {
    *(undefined4 *)(param_2 + 0xc) = 0;
    *param_4 = 1;
  }
  return;
}

