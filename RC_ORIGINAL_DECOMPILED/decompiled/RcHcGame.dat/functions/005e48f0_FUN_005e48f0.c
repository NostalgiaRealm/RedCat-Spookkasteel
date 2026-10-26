/*
 * FUN_005e48f0 at 005e48f0
 * undefined FUN_005e48f0(void)
 * Address ranges: 005e48f0-005e4932
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x6515fc slot 9 for .?AV?$basic_streambuf@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x6515fc slot 9 for
   .?AV?$basic_streambuf@DU?$char_traits@D@std@@@std@@. Original bytes unchanged; names and types
   still inferred. */

void FUN_005e48f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_18 [6];
  
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[0] = 0xffffffff;
  local_18[4] = DAT_00747b54;
  puVar2 = local_18;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

