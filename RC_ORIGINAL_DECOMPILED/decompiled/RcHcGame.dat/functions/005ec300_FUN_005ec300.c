/*
 * FUN_005ec300 at 005ec300
 * undefined FUN_005ec300(void)
 * Address ranges: 005ec300-005ec32a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005ec300(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_00650aec;
  param_1[3] = 10000;
  pvVar1 = _malloc(10000);
  param_1[1] = pvVar1;
  param_1[2] = 0;
  return param_1;
}

