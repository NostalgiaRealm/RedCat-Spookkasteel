/*
 * FUN_005f6880 at 005f6880
 * undefined FUN_005f6880(void)
 * Address ranges: 005f6880-005f68a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005f6880(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = operator_new(8);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *puVar2 = &PTR_FUN_006512c0;
    puVar2[1] = uVar1;
    return puVar2;
  }
  return (undefined4 *)0x0;
}

