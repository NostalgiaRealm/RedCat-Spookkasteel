/*
 * FUN_005c8020 at 005c8020
 * undefined FUN_005c8020(void)
 * Address ranges: 005c8020-005c80a4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_005c8020(int param_1,undefined4 param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = FUN_005c8ed0(*(undefined4 *)(param_1 + 4),param_2);
  if (iVar1 == 0) {
    return 0;
  }
  local_4 = param_5;
  local_8 = param_4;
  local_c = (*(float *)(param_1 + 8) - 1.0) + param_3;
  if (0.0 <= local_c) {
    if (1.0 < local_c) {
      return 0;
    }
  }
  else {
    local_c = 0.0;
  }
  uVar2 = FUN_005c8d80(iVar1,&local_c);
  return uVar2;
}

