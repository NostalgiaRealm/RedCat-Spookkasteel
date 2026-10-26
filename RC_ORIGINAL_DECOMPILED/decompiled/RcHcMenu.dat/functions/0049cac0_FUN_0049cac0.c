/*
 * FUN_0049cac0 at 0049cac0
 * undefined __register FUN_0049cac0(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0049cac0-0049cb20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049cac0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (*(char *)(param_1 + 0x2c) != '\0') {
    piVar1 = FUN_0049cbb0(&LAB_0049c984,param_2,param_3);
    FUN_0049d0c4(piVar1,param_1);
    *(undefined1 *)(param_1 + 0x2c) = 0;
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  if (((*(int *)(param_1 + 0x28) != 0) && (*(char *)(param_1 + 0x24) != '\0')) &&
     (*(short *)(param_1 + 0x3a) != 0)) {
    piVar1 = FUN_0049cbb0(&LAB_0049c984,param_2,param_3);
    FUN_0049d038((int)piVar1,param_1);
    *(undefined1 *)(param_1 + 0x2c) = 1;
  }
  return;
}

