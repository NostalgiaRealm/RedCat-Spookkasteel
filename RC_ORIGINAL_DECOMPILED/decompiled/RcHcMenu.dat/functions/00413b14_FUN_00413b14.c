/*
 * FUN_00413b14 at 00413b14
 * undefined __register FUN_00413b14(int * param_1, undefined * param_2)
 * Address ranges: 00413b14-00413bba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00413b14(int *param_1,undefined *param_2)

{
  int iVar1;
  PCNZCH pCVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined *local_18;
  undefined *local_14;
  int local_10;
  undefined *local_c;
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_18 = (undefined *)0x0;
  local_14 = (undefined *)0x0;
  puStack_28 = &LAB_00413bbb;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_2;
  local_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  if (-1 < iVar1 + -1) {
    local_10 = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,local_10,&local_14);
      pCVar2 = FUN_0040da1c(&DAT_00413bd4,local_14);
      if (pCVar2 != (PCNZCH)0x0) {
        FUN_00404238((int)local_14,1,(uint)(pCVar2 + -1),(int *)&local_18);
        iVar3 = FUN_00409870(local_18,local_c);
        if (iVar3 == 0) goto LAB_00413ba0;
      }
      local_10 = local_10 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_10 = -1;
LAB_00413ba0:
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00413bc2;
  puStack_28 = (undefined1 *)0x413bba;
  FUN_00403dd4((int *)&local_18,2);
  return;
}

