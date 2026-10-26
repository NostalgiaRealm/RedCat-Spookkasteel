/*
 * FUN_10001f50 at 10001f50
 * undefined __cdecl FUN_10001f50(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10001f50-10001f85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_10001f50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = _malloc(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = param_1;
  puVar1[2] = param_3;
  puVar1[1] = param_2;
  puVar1[3] = param_2;
  return;
}

