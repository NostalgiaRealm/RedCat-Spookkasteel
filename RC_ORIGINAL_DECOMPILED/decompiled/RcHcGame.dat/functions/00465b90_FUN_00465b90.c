/*
 * FUN_00465b90 at 00465b90
 * undefined FUN_00465b90(void)
 * Address ranges: 00465b90-00465bf1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00465b90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x69c);
  *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(iVar1 + 0x10);
  FUN_00502350(1);
  uVar2 = __ftol();
  FUN_004041b0(uVar2);
  *(undefined4 *)(param_1 + 0x6a4) = 0x437f0000;
  *(undefined4 *)(param_1 + 0x6a0) = 0;
  *(undefined4 *)(param_1 + 0x6a8) = 0;
  return;
}

