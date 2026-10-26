/*
 * FUN_0054d350 at 0054d350
 * undefined __register FUN_0054d350(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 0054d350-0054d3a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054d350(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = FUN_0045cc88(DAT_005747b8,param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*DAT_005747b8 + 4))(DAT_005747b8,param_1,param_2,param_3);
  }
  (**(code **)*DAT_005747b8)(DAT_005747b8,param_1,param_2,param_4,param_3);
  return;
}

