/*
 * FUN_004d059c at 004d059c
 * undefined __register FUN_004d059c(int * param_1)
 * Address ranges: 004d059c-004d0646
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d059c(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_118 = &LAB_004d0647;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puVar3 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[8] < 1) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    pcStack_12c = ": no transaction active";
    FUN_004040f0(&local_c,4);
    FUN_00403d94(local_c);
    puVar3 = puStack_114;
  }
  puStack_114 = puVar3;
  (**(code **)(*local_8 + 0x20))();
  piVar1 = local_8 + 8;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  if (SBORROW4(iVar2,1)) {
    thunk_FUN_00402874((uint)local_8);
  }
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_10,2);
  return;
}

