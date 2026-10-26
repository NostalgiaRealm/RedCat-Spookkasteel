/*
 * FUN_005f6840 at 005f6840
 * undefined FUN_005f6840(void)
 * Address ranges: 005f6840-005f6874
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_005f6840(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = operator_new(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    *puVar2 = &PTR_LAB_00650ce0;
    puVar2[1] = uVar1;
    puVar2[2] = *(undefined4 *)(param_1 + 8);
    *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(param_1 + 0xc);
    *puVar2 = &PTR_FUN_00651298;
    return puVar2;
  }
  return (undefined4 *)0x0;
}

