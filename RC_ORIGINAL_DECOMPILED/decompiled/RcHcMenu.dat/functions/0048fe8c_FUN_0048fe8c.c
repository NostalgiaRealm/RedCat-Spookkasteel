/*
 * FUN_0048fe8c at 0048fe8c
 * undefined __register FUN_0048fe8c(int * param_1, undefined4 param_2, int param_3)
 * Address ranges: 0048fe8c-0048ff3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048fe8c(int *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_20;
  uint local_14;
  
  puStack_2c = &stack0xfffffffc;
  for (iVar4 = param_3; -1 < iVar4; iVar4 = iVar4 + -1) {
  }
  puStack_30 = &LAB_0048ff3c;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  piVar2 = (int *)FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
  if (-1 < param_3) {
    local_20 = param_3 + 1;
    local_14 = 0;
    do {
      if (((int)local_14 < 0) || (uVar3 = local_14, param_3 < (int)local_14)) {
        uVar3 = thunk_FUN_00402874(local_14);
      }
      FUN_004121d8(piVar2,*(int *)(&stack0xffffffd8 + uVar3 * 4));
      local_14 = local_14 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  FUN_0048ff50(param_1,piVar2);
  puVar1 = puStack_2c;
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_0048ff43;
  if (piVar2 != (int *)0x0) {
    puStack_30 = (undefined1 *)0x48ff33;
    (**(code **)(*piVar2 + 8))(piVar2,*piVar2,puVar1);
    puStack_30 = (undefined1 *)0x48ff3b;
    FUN_00403094(piVar2);
  }
  return;
}

