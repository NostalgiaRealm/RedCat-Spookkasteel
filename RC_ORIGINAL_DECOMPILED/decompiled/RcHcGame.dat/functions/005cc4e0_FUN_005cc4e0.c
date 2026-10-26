/*
 * FUN_005cc4e0 at 005cc4e0
 * undefined FUN_005cc4e0(void)
 * Address ranges: 005cc4e0-005cc524
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005cc4e0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)FUN_005cf3b0(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar4 = puVar1;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puVar1[1] = param_1;
  if (param_2 != 0) {
    uVar2 = FUN_005cc450(param_2);
    *puVar1 = uVar2;
  }
  puVar1[2] = param_3;
  return puVar1;
}

