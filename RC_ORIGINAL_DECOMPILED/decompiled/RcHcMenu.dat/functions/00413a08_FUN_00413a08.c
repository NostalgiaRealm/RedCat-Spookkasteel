/*
 * FUN_00413a08 at 00413a08
 * undefined __register FUN_00413a08(int * param_1, undefined * param_2, int * param_3)
 * Address ranges: 00413a08-00413a86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00413a08(int *param_1,undefined *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int *piVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_10;
  int *local_c;
  undefined *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = 0;
  puStack_20 = &LAB_00413a87;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = param_3;
  local_8 = param_2;
  iVar1 = FUN_00413b14(param_1,param_2);
  if (iVar1 < 0) {
    FUN_00403db0(local_c);
  }
  else {
    piVar3 = local_c;
    (**(code **)(*param_1 + 0xc))(param_1,iVar1,&local_10);
    iVar1 = local_10;
    iVar2 = FUN_00404030((int)local_8);
    FUN_00404238(iVar1,iVar2 + 2,0x7fffffff,piVar3);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00413a8e;
  puStack_20 = (undefined1 *)0x413a86;
  FUN_00403db0(&local_10);
  return;
}

