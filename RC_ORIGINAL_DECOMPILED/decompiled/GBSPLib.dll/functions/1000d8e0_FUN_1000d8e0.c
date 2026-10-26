/*
 * FUN_1000d8e0 at 1000d8e0
 * undefined FUN_1000d8e0(void)
 * Address ranges: 1000d8e0-1000d92f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1000d8e0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)FUN_10014310(0x48);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  if (param_1 == 0) {
    puVar1[2] = 0;
  }
  else {
    iVar2 = FUN_1000c250(param_1);
    puVar1[2] = iVar2;
    if (iVar2 == 0) {
      FUN_1000d930(puVar1);
      return (undefined4 *)0x0;
    }
  }
  return puVar1;
}

