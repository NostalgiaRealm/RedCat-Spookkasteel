/*
 * FUN_00550afc at 00550afc
 * undefined __register FUN_00550afc(undefined4 param_1, int param_2, int * param_3)
 * Address ranges: 00550afc-00550bdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00550afc(undefined4 param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int iVar2;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  char **ppcVar4;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_1c;
  char *local_18;
  int local_14;
  int *local_10;
  int local_c;
  undefined4 local_8;
  
  local_1c = 0;
  local_18 = (char *)0x0;
  puStack_24 = (undefined1 *)0x550b1c;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_2);
  puStack_28 = &LAB_00550be0;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  FUN_00403e48((int *)&local_18,local_c);
  (**(code **)(*local_10 + 0x40))();
  local_14 = FUN_0040431c(",",local_18);
  while (local_14 != 0) {
    piVar3 = &local_1c;
    uVar1 = local_14 - 1;
    if (SBORROW4(local_14,1)) {
      thunk_FUN_00402874((uint)piVar3);
      uVar1 = extraout_ECX;
    }
    FUN_00404238((int)local_18,0,uVar1,piVar3);
    (**(code **)(*local_10 + 0x34))(local_10,local_1c);
    ppcVar4 = &local_18;
    uVar1 = FUN_00404030((int)local_18);
    iVar2 = local_14 + 1;
    if (SCARRY4(local_14,1)) {
      thunk_FUN_00402874(uVar1);
      uVar1 = extraout_ECX_00;
      iVar2 = extraout_EDX;
    }
    FUN_00404238((int)local_18,iVar2,uVar1,(int *)ppcVar4);
    local_14 = FUN_0040431c(",",local_18);
  }
  (**(code **)(*local_10 + 0x34))(local_10,local_18);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00550be7;
  puStack_28 = (undefined1 *)0x550bd7;
  FUN_00403dd4(&local_1c,2);
  puStack_28 = (undefined1 *)0x550bdf;
  FUN_00403db0(&local_c);
  return;
}

