/*
 * FUN_0060b349 at 0060b349
 * undefined FUN_0060b349(void)
 * Address ranges: 0060b349-0060b364
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

exception * __thiscall FUN_0060b349(exception *param_1,byte param_2)

{
  exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    FUN_005fe5f0(param_1);
  }
  return param_1;
}

