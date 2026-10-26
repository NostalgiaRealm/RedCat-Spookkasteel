/*
 * FUN_00592de0 at 00592de0
 * undefined FUN_00592de0(void)
 * Address ranges: 00592de0-00592e50
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00592de0(int param_1,char param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x2f0) != param_2) {
    *(char *)(param_1 + 0x2f0) = param_2;
    if (param_2 != '\0') {
      if (DAT_006b915c == 0) {
        FUN_004bc480();
      }
      uVar1 = FUN_005aab50(*(undefined4 *)(param_1 + 0x30c));
      *(undefined4 *)(param_1 + 0x310) = uVar1;
      if (DAT_006b915c == 0) {
        FUN_004bc480();
      }
      FUN_004c4380();
      return;
    }
    if (DAT_006b915c == 0) {
      FUN_004bc480();
    }
    FUN_005aab50(*(undefined4 *)(param_1 + 0x310));
  }
  return;
}

