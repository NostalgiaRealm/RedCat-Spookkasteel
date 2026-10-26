/*
 * FUN_004de2d0 at 004de2d0
 * undefined FUN_004de2d0(void)
 * Address ranges: 004de2d0-004de305
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_004de2d0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x15) != '\0') && (iVar1 = *(int *)(param_1 + 0x18), iVar1 != -1)) {
    if ((0 < iVar1) && (param_3 < iVar1)) {
      uVar2 = FUN_00484d70(iVar1,param_3);
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      return;
    }
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  return;
}

