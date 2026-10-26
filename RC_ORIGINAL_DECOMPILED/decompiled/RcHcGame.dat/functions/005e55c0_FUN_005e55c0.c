/*
 * FUN_005e55c0 at 005e55c0
 * undefined FUN_005e55c0(void)
 * Address ranges: 005e55c0-005e568f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __thiscall FUN_005e55c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x50) == 0) {
    iVar1 = FUN_005fee45(param_2,param_3);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0xc) = param_1 + 4;
      *(int *)(param_1 + 0x1c) = param_1 + 0x14;
      *(int *)(param_1 + 0x20) = param_1 + 0x18;
      *(int *)(param_1 + 0x2c) = param_1 + 0x24;
      *(undefined1 *)(param_1 + 0x48) = 1;
      *(undefined4 **)(param_1 + 0x10) = (undefined4 *)(param_1 + 8);
      *(int *)(param_1 + 0x30) = param_1 + 0x28;
      *(undefined4 *)(param_1 + 8) = 0;
      **(undefined4 **)(param_1 + 0x20) = 0;
      **(undefined4 **)(param_1 + 0x30) = 0;
      **(undefined4 **)(param_1 + 0xc) = 0;
      **(undefined4 **)(param_1 + 0x1c) = 0;
      **(undefined4 **)(param_1 + 0x2c) = 0;
      if (*(char *)(param_1 + 0x48) == '\0') {
        *(int *)(param_1 + 0x1c) = iVar1;
        *(int *)(param_1 + 0xc) = iVar1 + 8;
        *(int *)(param_1 + 0x10) = iVar1 + 8;
        *(int *)(param_1 + 0x20) = iVar1;
        *(int *)(param_1 + 0x2c) = iVar1 + 4;
        *(int *)(param_1 + 0x30) = iVar1 + 4;
      }
      *(int *)(param_1 + 0x50) = iVar1;
      *(undefined4 *)(param_1 + 0x40) = DAT_00747b58;
      *(undefined4 *)(param_1 + 0x3c) = DAT_00747b58;
      *(undefined4 *)(param_1 + 0x38) = 0;
      FUN_005e57d0();
      return param_1;
    }
  }
  return 0;
}

