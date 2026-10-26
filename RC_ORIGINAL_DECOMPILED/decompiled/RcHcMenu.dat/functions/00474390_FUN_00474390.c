/*
 * FUN_00474390 at 00474390
 * int __register FUN_00474390(undefined4 * param_1)
 * Address ranges: 00474390-004743e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00474390(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_00495828(param_1);
  iVar2 = FUN_00403224(piVar1,(int)&PTR_FUN_004740c8);
  *(undefined4 *)(iVar2 + 0x30) = param_1[0xc];
  FUN_00403e04((int *)(iVar2 + 0x34),(undefined4 *)param_1[0xd]);
  *(undefined1 *)(iVar2 + 0x38) = *(undefined1 *)(param_1 + 0xe);
  return iVar2;
}

