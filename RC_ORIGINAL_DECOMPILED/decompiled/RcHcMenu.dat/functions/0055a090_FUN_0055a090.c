/*
 * FUN_0055a090 at 0055a090
 * undefined __register FUN_0055a090(undefined4 param_1, int param_2, undefined4 * param_3)
 * Address ranges: 0055a090-0055a199
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0055a090(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  byte *local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  undefined4 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = (byte *)0x0;
  local_14 = 0;
  puStack_24 = &LAB_0055a19a;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00432714(param_2,&local_14);
  iVar1 = FUN_00404030(local_14);
  if (iVar1 < 1) {
    if (*(int *)(*(int *)PTR_DAT_00572108 + 200) == *(int *)(local_c + 0x174)) {
      *local_10 = 0x25;
    }
    if (*(int *)(*(int *)PTR_DAT_00572108 + 0xd4) == *(int *)(local_c + 0x174)) {
      *local_10 = 0x26;
    }
    if (*(int *)(*(int *)PTR_DAT_00572108 + 0xcc) == *(int *)(local_c + 0x174)) {
      *local_10 = 0x27;
    }
    if (*(int *)(*(int *)PTR_DAT_00572108 + 0xd0) == *(int *)(local_c + 0x174)) {
      *local_10 = 0x28;
    }
  }
  else {
    FUN_00432714(local_c,(int *)&local_18);
    uVar2 = FUN_00550c78(*(int *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x120) + 0xc),local_18);
    *local_10 = uVar2;
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0055a1a1;
  puStack_24 = (undefined1 *)0x55a199;
  FUN_00403dd4((int *)&local_18,2);
  return;
}

