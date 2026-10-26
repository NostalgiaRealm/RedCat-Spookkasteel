/*
 * FUN_00458810 at 00458810
 * undefined __register FUN_00458810(char * param_1, int param_2, int param_3)
 * Address ranges: 00458810-004588b2;004588d4-004588e9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00458810(char *param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  char **ppcVar4;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  char *local_18;
  uint local_14;
  int local_10;
  int local_c;
  char *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_18 = (char *)0x0;
  puStack_2c = &LAB_004588ea;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_3 < 1) {
    puStack_34 = (undefined1 *)0x45884f;
    FUN_00403d94("aStartPos must be > 0");
    puVar1 = puStack_28;
  }
  puStack_28 = puVar1;
  local_14 = 0;
  puStack_38 = &LAB_004588b3;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  ppcVar4 = &local_18;
  puStack_34 = &stack0xfffffffc;
  uVar2 = FUN_00404030(local_c);
  FUN_00404238(local_c,local_10,uVar2,(int *)ppcVar4);
  local_14 = FUN_0040431c(local_8,local_18);
  uVar2 = local_14;
  if (0 < (int)local_14) {
    uVar3 = local_14 + local_10;
    if (SCARRY4(local_14,local_10)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    uVar2 = uVar3 - 1;
    if (SBORROW4(uVar3,1)) {
      uVar2 = thunk_FUN_00402874(uVar3 - 1);
    }
  }
  local_14 = uVar2;
  *in_FS_OFFSET = uStack_3c;
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_004588f1;
  puStack_2c = (undefined1 *)0x4588e9;
  FUN_00403db0((int *)&local_18);
  return;
}

