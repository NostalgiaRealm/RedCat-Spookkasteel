/*
 * FUN_005cc230 at 005cc230
 * undefined FUN_005cc230(void)
 * Address ranges: 005cc230-005cc284
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cc230(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_005cc3b0(puVar2);
    puVar2 = puVar1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    FUN_005cf400(*(int *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    _DAT_007203c0 = 0;
  }
  FUN_005cf400(param_1);
  _DAT_007203c0 = 0;
  return;
}

