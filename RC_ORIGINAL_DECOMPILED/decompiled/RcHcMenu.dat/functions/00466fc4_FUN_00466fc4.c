/*
 * FUN_00466fc4 at 00466fc4
 * undefined __register FUN_00466fc4(int param_1, int * param_2, int * param_3)
 * Address ranges: 00466fc4-00467044
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00466fc4(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_c;
  int *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_c = 0;
  puStack_20 = &LAB_00467045;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar2 = *param_2;
  local_8 = param_3;
  while( true ) {
    iVar1 = FUN_00404030(param_1);
    if ((iVar1 < iVar2) || (*(char *)(param_1 + -1 + iVar2) == ';')) break;
    iVar2 = iVar2 + 1;
  }
  FUN_00404238(param_1,*param_2,iVar2 - *param_2,&local_c);
  FUN_00409924(local_c,local_8);
  iVar1 = FUN_00404030(param_1);
  if ((iVar2 <= iVar1) && (*(char *)(param_1 + -1 + iVar2) == ';')) {
    iVar2 = iVar2 + 1;
  }
  *param_2 = iVar2;
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0046704c;
  puStack_20 = (undefined1 *)0x467044;
  FUN_00403db0(&local_c);
  return;
}

