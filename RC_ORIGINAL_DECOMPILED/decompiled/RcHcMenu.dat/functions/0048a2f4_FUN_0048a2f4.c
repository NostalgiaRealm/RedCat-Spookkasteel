/*
 * FUN_0048a2f4 at 0048a2f4
 * undefined __register FUN_0048a2f4(int * param_1, int * param_2, byte param_3)
 * Address ranges: 0048a2f4-0048a35d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048a2f4(int *param_1,int *param_2,byte param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_1c;
  int local_18;
  undefined4 local_14;
  byte local_d;
  int *local_c;
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = 0;
  puStack_28 = &LAB_0048a35e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_d = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004966b4(param_2,&local_18);
  iVar1 = local_18;
  FUN_004966b4(local_8,&local_1c);
  local_14 = FUN_0045a780(local_1c,iVar1,local_d);
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_0048a365;
  puStack_28 = (undefined1 *)0x48a35d;
  FUN_00403dd4(&local_1c,2);
  return;
}

