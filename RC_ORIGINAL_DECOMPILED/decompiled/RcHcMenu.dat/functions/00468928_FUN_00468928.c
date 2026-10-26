/*
 * FUN_00468928 at 00468928
 * undefined __register FUN_00468928(int param_1, undefined * param_2)
 * Address ranges: 00468928-00468993
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468928(int param_1,undefined *param_2)

{
  int iVar1;
  int *in_FS_OFFSET;
  int iVar2;
  int iStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined *local_10;
  undefined1 local_c;
  byte *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_24 = &LAB_00468994;
  iStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_28;
  iVar2 = 0x468951;
  iVar1 = FUN_004688e4(param_1,param_2);
  if (iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 8);
    FUN_00406a48((undefined4 *)PTR_PTR_005724e0,(int *)&local_8);
    local_c = 0xb;
    local_10 = param_2;
    FUN_00466e30(local_8,&local_10,0,iVar2);
  }
  *in_FS_OFFSET = iVar2;
  puStack_24 = &LAB_0046899b;
  iStack_28 = 0x468993;
  FUN_00403db0((int *)&local_8);
  return;
}

