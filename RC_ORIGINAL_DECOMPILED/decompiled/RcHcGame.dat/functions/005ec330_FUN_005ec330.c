/*
 * FUN_005ec330 at 005ec330
 * undefined FUN_005ec330(void)
 * Address ranges: 005ec330-005ec35b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_005ec330(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_00650aec;
  FUN_0060b25d(param_1[1]);
  if ((param_2 & 1) != 0) {
    FUN_005fe5f0(param_1);
  }
  return param_1;
}

