/*
 * FUN_0055a280 at 0055a280
 * undefined __register FUN_0055a280(int param_1)
 * Address ranges: 0055a280-0055a381
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0055a280(int param_1)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_8 = param_1;
  FUN_0055a090(param_1,*(int *)(param_1 + 0x308),&local_c);
  FUN_0055a090(local_8,*(int *)(local_8 + 0x314),&local_10);
  FUN_0055a090(local_8,*(int *)(local_8 + 0x30c),&local_14);
  FUN_0055a090(local_8,*(int *)(local_8 + 0x310),&local_18);
  FUN_0055a090(local_8,*(int *)(local_8 + 0x318),&local_1c);
  FUN_0055a090(local_8,*(int *)(local_8 + 800),&local_20);
  FUN_0055a090(local_8,*(int *)(local_8 + 0x31c),&local_24);
  *(undefined4 *)(*(int *)(local_8 + 0x358) + 8) = local_c;
  *(undefined4 *)(*(int *)(local_8 + 0x358) + 0xc) = local_10;
  *(undefined4 *)(*(int *)(local_8 + 0x358) + 0x10) = local_14;
  *(undefined4 *)(*(int *)(local_8 + 0x358) + 0x14) = local_18;
  *(undefined4 *)(*(int *)(local_8 + 0x358) + 0x18) = local_1c;
  *(undefined4 *)(*(int *)(local_8 + 0x358) + 0x1c) = local_20;
  *(undefined4 *)(*(int *)(local_8 + 0x358) + 0x20) = local_24;
  return;
}

