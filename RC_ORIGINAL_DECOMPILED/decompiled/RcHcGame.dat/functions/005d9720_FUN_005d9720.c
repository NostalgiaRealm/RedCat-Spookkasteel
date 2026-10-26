/*
 * FUN_005d9720 at 005d9720
 * undefined FUN_005d9720(void)
 * Address ranges: 005d9720-005d978b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005d9720(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    puVar3 = *(undefined4 **)(iVar1 + 8);
    while (puVar3 != (undefined4 *)0x0) {
      FUN_005cf400(puVar3[1]);
      puVar3[1] = 0;
      _DAT_007203c0 = 0;
      puVar2 = (undefined4 *)*puVar3;
      FUN_005cf400(puVar3);
      _DAT_007203c0 = 0;
      puVar3 = puVar2;
    }
    FUN_005cf400(*(undefined4 *)(iVar1 + 0x18));
    *(undefined4 *)(iVar1 + 0x18) = 0;
    _DAT_007203c0 = 0;
    FUN_005cf400(iVar1);
    _DAT_007203c0 = 0;
    *param_1 = 0;
  }
  return;
}

