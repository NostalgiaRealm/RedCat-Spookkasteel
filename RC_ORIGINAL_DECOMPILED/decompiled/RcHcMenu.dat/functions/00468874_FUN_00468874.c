/*
 * FUN_00468874 at 00468874
 * undefined __register FUN_00468874(int param_1, int param_2)
 * Address ranges: 00468874-004688d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468874(int param_1,int param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_c = (undefined *)0x0;
  puStack_1c = &LAB_004688d5;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_8 = 1;
  while( true ) {
    iVar1 = FUN_00404030(param_2);
    if (iVar1 < local_8) break;
    FUN_00466fc4(param_2,&local_8,(int *)&local_c);
    FUN_00468928(param_1,local_c);
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004688dc;
  puStack_1c = (undefined1 *)0x4688d4;
  FUN_00403db0((int *)&local_c);
  return;
}

