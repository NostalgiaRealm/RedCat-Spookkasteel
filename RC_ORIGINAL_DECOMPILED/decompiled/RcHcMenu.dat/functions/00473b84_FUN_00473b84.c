/*
 * FUN_00473b84 at 00473b84
 * undefined __register FUN_00473b84(int param_1, int * param_2, int param_3)
 * Address ranges: 00473b84-00473bf5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00473b84(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *local_10;
  int local_c;
  int local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_10 = (undefined *)0x0;
  puStack_20 = &LAB_00473bf6;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = 1;
  local_8 = param_1;
  while( true ) {
    iVar1 = FUN_00404030(param_3);
    if (iVar1 < local_c) break;
    FUN_00466fc4(param_3,&local_c,(int *)&local_10);
    iVar1 = FUN_00472080(local_8,local_10);
    if (param_2 != (int *)0x0) {
      FUN_004121d8(param_2,iVar1);
    }
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00473bfd;
  puStack_20 = (undefined1 *)0x473bf5;
  FUN_00403db0((int *)&local_10);
  return;
}

