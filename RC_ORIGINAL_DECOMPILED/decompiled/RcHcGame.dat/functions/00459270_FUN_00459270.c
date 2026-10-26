/*
 * FUN_00459270 at 00459270
 * undefined FUN_00459270(void)
 * Address ranges: 00459270-004592c9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00459270(int param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x450);
  if ((((param_2 != iVar1) && (4 < param_2)) && (param_2 < 0xc)) ||
     ((param_2 == 9 && (*(int *)(param_1 + 0x480) != param_3)))) {
    if (iVar1 != 9) {
      *(int *)(param_1 + 0x44c) = iVar1;
    }
    *(int *)(param_1 + 0x450) = param_2;
    *(undefined1 *)(param_1 + 0x454) = 1;
    *(int *)(param_1 + 0x480) = param_3;
    *(undefined1 *)(param_1 + 0x484) = param_4;
  }
  return;
}

