/*
 * FUN_005f68b0 at 005f68b0
 * undefined FUN_005f68b0(void)
 * Address ranges: 005f68b0-005f68de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005f68b0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *puVar2 = &PTR_LAB_00650ce0;
    puVar2[1] = uVar1;
    puVar2[2] = *(undefined4 *)(param_1 + 8);
    *puVar2 = &PTR_FUN_006512e8;
    return puVar2;
  }
  return (undefined4 *)0x0;
}

