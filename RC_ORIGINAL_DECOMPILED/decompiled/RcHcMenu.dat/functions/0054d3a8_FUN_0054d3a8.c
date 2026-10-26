/*
 * FUN_0054d3a8 at 0054d3a8
 * undefined4 __register FUN_0054d3a8(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0054d3a8-0054d3fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0054d3a8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_0045cc88(DAT_005747b8,param_1,param_2);
  if (cVar1 == '\0') {
    (**(code **)(*DAT_005747b8 + 0xc))(DAT_005747b8,param_1,param_2,param_3);
  }
  uVar2 = (**(code **)(*DAT_005747b8 + 8))(DAT_005747b8,param_1,param_2,param_3);
  return uVar2;
}

