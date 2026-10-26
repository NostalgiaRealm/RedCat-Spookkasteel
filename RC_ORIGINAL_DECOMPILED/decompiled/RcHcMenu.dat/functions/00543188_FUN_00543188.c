/*
 * FUN_00543188 at 00543188
 * undefined4 __register FUN_00543188(int param_1)
 * Address ranges: 00543188-005431dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00543188(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  
  uVar2 = FUN_005416c0(param_1);
  if ((((char)uVar2 != '\0') && (*(int *)(param_1 + 0x22c) != 0)) &&
     (*(char *)(param_1 + 0x298) != '\0')) {
    uVar3 = FUN_005430c8(param_1);
    if ((char)uVar3 == '\0') {
      uVar3 = FUN_00543134(param_1);
      if ((char)uVar3 == '\0') {
        uVar4 = (undefined3)((uint)uVar3 >> 8);
        uVar1 = 1;
        goto LAB_005431d3;
      }
    }
  }
  uVar1 = 0;
  uVar4 = 0;
LAB_005431d3:
  return CONCAT31(uVar4,uVar1);
}

