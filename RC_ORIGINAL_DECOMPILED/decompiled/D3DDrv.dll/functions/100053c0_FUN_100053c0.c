/*
 * FUN_100053c0 at 100053c0
 * undefined4 * __cdecl FUN_100053c0(undefined4 param_1)
 * Address ranges: 100053c0-100053ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __cdecl FUN_100053c0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = _malloc(200);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar3 = puVar1;
  for (iVar2 = 0x32; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *puVar1 = param_1;
  puVar1[1] = param_1;
  return puVar1;
}

