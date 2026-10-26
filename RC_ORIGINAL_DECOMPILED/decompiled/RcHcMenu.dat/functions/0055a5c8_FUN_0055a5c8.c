/*
 * FUN_0055a5c8 at 0055a5c8
 * undefined __register FUN_0055a5c8(int param_1, int param_2, int param_3)
 * Address ranges: 0055a5c8-0055a70b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0055a5c8(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  byte *local_28;
  uint *local_24;
  byte *local_20;
  uint *local_1c;
  int local_18;
  undefined1 local_11;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_1c = (uint *)0x0;
  local_24 = (uint *)0x0;
  local_28 = (byte *)0x0;
  local_20 = (byte *)0x0;
  puStack_34 = &LAB_0055a70c;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  local_11 = 0;
  local_18 = 0;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_3 == 0x25) {
    local_18 = *(int *)(*(int *)PTR_DAT_00572108 + 200);
  }
  else if (param_3 == 0x26) {
    local_18 = *(int *)(*(int *)PTR_DAT_00572108 + 0xd4);
  }
  else if (param_3 == 0x27) {
    local_18 = *(int *)(*(int *)PTR_DAT_00572108 + 0xcc);
  }
  else if (param_3 == 0x28) {
    local_18 = *(int *)(*(int *)PTR_DAT_00572108 + 0xd0);
  }
  else {
    uVar2 = *(int *)(param_1 + 0x354) == param_2;
    if (!(bool)uVar2) {
      FUN_00432714(param_2,(int *)&local_20);
      FUN_00409690(local_20,(int *)&local_1c);
      puVar1 = local_1c;
      FUN_00550bf8(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),local_10,
                   (int *)&local_28);
      FUN_00409690(local_28,(int *)&local_24);
      FUN_00404140(puVar1,local_24);
      if ((bool)uVar2) {
        local_11 = 1;
      }
    }
  }
  if (((local_18 != 0) && (*(int *)(local_8 + 0x354) != local_c)) &&
     (*(int *)(local_c + 0x174) == local_18)) {
    local_11 = 1;
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_0055a713;
  puStack_34 = (undefined1 *)0x55a6fb;
  FUN_00403dd4((int *)&local_28,2);
  puStack_34 = (undefined1 *)0x55a703;
  FUN_00403db0((int *)&local_20);
  puStack_34 = (undefined1 *)0x55a70b;
  FUN_00403db0((int *)&local_1c);
  return;
}

