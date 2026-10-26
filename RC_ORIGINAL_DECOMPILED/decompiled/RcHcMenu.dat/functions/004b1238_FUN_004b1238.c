/*
 * FUN_004b1238 at 004b1238
 * undefined __register FUN_004b1238(int param_1, int param_2)
 * Address ranges: 004b1238-004b12aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b1238(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_c;
  int local_8;
  
  local_c = param_2;
  local_8 = param_1;
  if (-1 < param_2) {
    puStack_10 = (undefined1 *)0x4b1255;
    iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x14))();
    if (local_c < iVar1) goto LAB_004b126e;
  }
  puStack_10 = (undefined1 *)0x4b126e;
  FUN_00403d94("Assertion failure");
LAB_004b126e:
  puStack_14 = &LAB_004b12ab;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  piVar2 = (int *)(**(code **)(**(int **)(local_8 + 4) + 0x18))(*(int **)(local_8 + 4),local_c);
  FUN_00403094(piVar2);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004b12b2;
  puStack_14 = (undefined1 *)0x4b12aa;
  (**(code **)(**(int **)(local_8 + 4) + 0x44))(*(int **)(local_8 + 4),local_c);
  return;
}

