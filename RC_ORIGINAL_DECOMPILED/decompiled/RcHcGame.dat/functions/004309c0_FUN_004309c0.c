/*
 * FUN_004309c0 at 004309c0
 * undefined FUN_004309c0(void)
 * Address ranges: 004309c0-00430ab6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004309c0(int param_1,undefined4 *param_2,float *param_3)

{
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c [60];
  
  local_48 = 0;
  local_54 = *param_3;
  local_44 = 0x3f800000;
  local_50 = param_3[1];
  local_40 = 0;
  local_4c = param_3[2];
  FUN_005b3670();
  if ((local_54 == 0.0) && (local_4c == 0.0)) {
    local_54 = 1.0;
  }
  local_50 = 0.0;
  FUN_005b2f20();
  FUN_005b2e60(local_3c);
  FUN_005b38e0(&local_48,&local_54);
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  *(undefined4 *)(param_1 + 0x28) = param_2[1];
  *(undefined4 *)(param_1 + 0x2c) = param_2[2];
  FUN_005b30f0(0xbfc90fdb);
  FUN_005b32c0(param_1);
  FUN_005b3170(0x40490fdb);
  FUN_005b32c0(param_1);
  return;
}

