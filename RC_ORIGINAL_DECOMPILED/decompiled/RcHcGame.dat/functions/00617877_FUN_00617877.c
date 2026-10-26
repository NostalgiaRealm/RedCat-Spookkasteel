/*
 * FUN_00617877 at 00617877
 * undefined FUN_00617877(void)
 * Address ranges: 00617877-006178bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00617877(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    uVar2 = FUN_0061013c();
    return uVar2;
  }
  if ((DAT_0071007c != (code *)0x0) && (iVar3 = FUN_0061ceb0(DAT_0071007c), iVar3 != 0)) {
    uVar2 = (*DAT_0071007c)(param_1);
    return uVar2;
  }
  return 0;
}

