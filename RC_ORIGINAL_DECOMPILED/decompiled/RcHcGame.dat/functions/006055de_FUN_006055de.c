/*
 * FUN_006055de at 006055de
 * undefined FUN_006055de(void)
 * Address ranges: 006055de-006055fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_006055de(int *param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined2 **)param_1[7];
  if ((puVar1 != (undefined2 *)0x0) && (puVar1 < puVar1 + *(int *)param_1[0xb])) {
    return CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1);
  }
  uVar2 = (**(code **)(*param_1 + 0x10))();
  return uVar2;
}

