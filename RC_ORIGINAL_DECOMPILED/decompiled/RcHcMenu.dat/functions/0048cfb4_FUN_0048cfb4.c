/*
 * FUN_0048cfb4 at 0048cfb4
 * undefined __register FUN_0048cfb4(int param_1, int * param_2, byte * param_3)
 * Address ranges: 0048cfb4-0048d066
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048cfb4(int param_1,int *param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_18;
  int *local_14;
  byte *local_10;
  int *local_c;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  puStack_24 = &LAB_0048d067;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  local_14 = (int *)FUN_00495ee0((int)param_2);
  while( true ) {
    iVar2 = FUN_00494858(local_14);
    if (iVar2 == local_8) break;
    piVar1 = (int *)FUN_00493c6c((int)local_14);
    if (piVar1 == local_14) {
      FUN_00496d84((int)local_c);
      FUN_004040f0(&local_18,4);
      FUN_00403d94(local_18);
    }
    local_14 = (int *)FUN_00493c6c((int)local_14);
  }
  FUN_0049517c(local_14,local_c,local_10);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0048d06e;
  puStack_24 = (undefined1 *)0x48d066;
  FUN_00403db0(&local_18);
  return;
}

