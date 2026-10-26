/*
 * FUN_00422a34 at 00422a34
 * undefined __register FUN_00422a34(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00422a34-00422ac0;00422ad8-00422ae4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00422a34(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  HICON pHVar3;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 local_e;
  int *local_8;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (*(int *)(iVar1 + 0xc) == 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      puStack_20 = (undefined1 *)0x422a57;
      FUN_0041d250();
      param_3 = extraout_ECX;
    }
    puStack_20 = (undefined1 *)0x422a63;
    local_8 = (int *)FUN_00403064((int *)&PTR_FUN_00410f54,'\x01',param_3);
    puStack_24 = &LAB_00422ac1;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    iVar2 = FUN_00422980(param_1);
    if (iVar2 == DAT_00573668) {
      FUN_00402cfc(&local_e,6,0);
      FUN_0041483c(local_8,&local_e,6);
    }
    else {
      pHVar3 = (HICON)FUN_00422980(param_1);
      FUN_0041e2e8(local_8,pHVar3,'\0');
    }
    *in_FS_OFFSET = uStack_28;
    *(int **)(iVar1 + 0xc) = local_8;
  }
  return;
}

