/*
 * FUN_005c5890 at 005c5890
 * undefined FUN_005c5890(void)
 * Address ranges: 005c5890-005c58ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005c5890(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x40) & 1) != 0) {
    FUN_005c5600();
  }
  iVar1 = FUN_005c56e0(param_3,param_2);
  if (iVar1 == 0) {
    FUN_005b5fd0();
  }
  iVar1 = FUN_005c56e0(param_3,param_4);
  if (iVar1 == 0) {
    param_4[2] = 0;
    param_4[1] = 0;
    *param_4 = 0;
  }
  return;
}

