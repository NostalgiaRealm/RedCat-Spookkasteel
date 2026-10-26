/*
 * FUN_005cc400 at 005cc400
 * undefined FUN_005cc400(void)
 * Address ranges: 005cc400-005cc446
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005cc400(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  if (param_1 != 0) {
    uVar2 = FUN_005cc450(param_1);
    *puVar1 = uVar2;
  }
  puVar1[1] = param_3;
  puVar1[2] = param_2;
  return puVar1;
}

