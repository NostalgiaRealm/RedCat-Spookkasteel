/*
 * FUN_00414874 at 00414874
 * undefined __register FUN_00414874(int * param_1, int * param_2, int param_3)
 * Address ranges: 00414874-00414916
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00414874(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int local_14;
  
  if (param_3 == 0) {
    puStack_28 = (undefined1 *)0x414893;
    FUN_004147c0(param_2,0);
    puStack_28 = (undefined1 *)0x41489b;
    param_3 = FUN_004147cc(param_2);
  }
  local_14 = param_3;
  if (0xf000 < param_3) {
    local_14 = 0xf000;
  }
  puStack_28 = (undefined1 *)0x4148bc;
  iVar1 = FUN_004027e8(local_14);
  puStack_2c = &LAB_00414917;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  puStack_28 = &stack0xfffffffc;
  for (; param_3 != 0; param_3 = param_3 - iVar2) {
    iVar2 = param_3;
    if (local_14 < param_3) {
      iVar2 = local_14;
    }
    FUN_00414804(param_2,iVar1,iVar2);
    FUN_0041483c(param_1,iVar1,iVar2);
  }
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0041491e;
  puStack_2c = (undefined1 *)0x414916;
  FUN_00402800(iVar1);
  return;
}

