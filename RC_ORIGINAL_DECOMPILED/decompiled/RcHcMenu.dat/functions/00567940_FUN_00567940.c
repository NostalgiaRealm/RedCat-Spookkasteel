/*
 * FUN_00567940 at 00567940
 * undefined __register FUN_00567940(undefined4 param_1, int * param_2)
 * Address ranges: 00567940-00567995
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00567940(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10);
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0x3ff00000;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"Display","SoftwareOnly",0);
  *(undefined4 *)(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x10) + 0x44) = uVar2;
  return;
}

