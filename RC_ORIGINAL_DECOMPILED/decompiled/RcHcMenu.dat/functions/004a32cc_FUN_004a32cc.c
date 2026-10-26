/*
 * FUN_004a32cc at 004a32cc
 * undefined __register FUN_004a32cc(int * param_1)
 * Address ranges: 004a32cc-004a3359
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a32cc(int *param_1)

{
  int iVar1;
  
  FUN_004340c0((int)param_1);
  *(undefined1 *)(param_1 + 0x84) = 1;
  iVar1 = *(int *)PTR_DAT_005723fc;
  param_1[0x8c] = *(int *)(iVar1 + 0x108);
  param_1[0x8d] = *(int *)(iVar1 + 0x10c);
  iVar1 = *(int *)PTR_DAT_005723fc;
  *(int **)(iVar1 + 0x10c) = param_1;
  *(undefined4 *)(iVar1 + 0x108) = *(undefined4 *)(*param_1 + 0xc4);
  (**(code **)(*param_1 + 0x74))();
  if (*(short *)((int)param_1 + 0x222) != 0) {
    (*(code *)param_1[0x88])(param_1[0x89],param_1);
  }
  return;
}

