/*
 * FUN_0054b484 at 0054b484
 * undefined __register FUN_0054b484(int * param_1, byte * param_2, undefined4 * param_3, char param_4, char param_5, char param_6, char param_7)
 * Address ranges: 0054b484-0054b4fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054b484(int *param_1,byte *param_2,undefined4 *param_3,char param_4,char param_5,
                 char param_6,char param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 local_30 [7];
  int *local_14;
  undefined1 local_d;
  byte *local_c;
  int *local_8;
  
  puVar3 = local_30;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_3c = (undefined1 *)0x54b4aa;
  local_c = param_2;
  local_8 = param_1;
  local_14 = FUN_0048ea9c((int *)&PTR_FUN_0048e30c,'\x01',0);
  puStack_40 = &LAB_0054b4fd;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  puStack_3c = &stack0xfffffffc;
  uVar1 = (**(code **)(*local_14 + 0xc))(local_14,local_30);
  uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),param_4);
  local_d = FUN_0054b178(local_8,local_c,local_14,param_4,param_5,param_6,param_7);
  *in_FS_OFFSET = uVar1;
  FUN_00403094(local_14);
  return;
}

