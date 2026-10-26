/*
 * FUN_004248d0 at 004248d0
 * undefined FUN_004248d0(void)
 * Address ranges: 004248d0-00424944
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004248d0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00502350(0);
  uVar2 = 0;
  (**(code **)(*param_1 + 0x9c))(0);
  FUN_00502350(uVar2);
  iVar1 = (**(code **)(*param_1 + 0x9c))();
  if ((*(float *)(iVar1 + 0x210) != 0.0) &&
     (*(undefined4 *)(iVar1 + 0x210) = 0, *(int *)(iVar1 + 0x18) != 0)) {
    uVar2 = 0;
    FUN_004247e0(0);
    FUN_005b3ae0(uVar2);
  }
  FUN_00502220();
  (**(code **)(*param_1 + 0x9c))();
  FUN_00502220();
  return;
}

