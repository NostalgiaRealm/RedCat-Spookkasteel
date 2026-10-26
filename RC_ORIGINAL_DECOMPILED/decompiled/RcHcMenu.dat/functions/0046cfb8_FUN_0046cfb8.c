/*
 * FUN_0046cfb8 at 0046cfb8
 * undefined __register FUN_0046cfb8(int param_1, int * param_2)
 * Address ranges: 0046cfb8-0046d042
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046cfb8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  short local_14;
  short local_12;
  int local_10;
  int *local_c;
  int *local_8;
  
  puStack_20 = (undefined1 *)0x46cfd1;
  local_8 = param_2;
  local_c = (int *)(**(code **)(**(int **)(param_1 + 0x28) + 0x210))
                             (*(int **)(param_1 + 0x28),param_1,0);
  puStack_24 = &LAB_0046d043;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  iVar1 = FUN_004147cc(local_c);
  if (7 < iVar1) {
    (**(code **)(*local_c + 4))(local_c,&local_14,8);
    if (((local_14 != 1) || (local_12 != 0x100)) || (iVar1 + -8 != local_10)) {
      FUN_004147c0(local_c,0);
    }
  }
  (**(code **)(*local_8 + 0x50))(local_8,local_c);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0046d04a;
  puStack_24 = (undefined1 *)0x46d042;
  FUN_00403094(local_c);
  return;
}

