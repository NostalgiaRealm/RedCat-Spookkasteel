/*
 * FUN_005f0530 at 005f0530
 * undefined FUN_005f0530(void)
 * Address ranges: 005f0530-005f055e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005f0530(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = operator_new(0xc);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *puVar2 = &PTR_LAB_00650d6c;
    puVar2[1] = uVar1;
    puVar2[2] = *(undefined4 *)(param_1 + 8);
    *puVar2 = &PTR_FUN_00650c54;
    return puVar2;
  }
  return (undefined4 *)0x0;
}

