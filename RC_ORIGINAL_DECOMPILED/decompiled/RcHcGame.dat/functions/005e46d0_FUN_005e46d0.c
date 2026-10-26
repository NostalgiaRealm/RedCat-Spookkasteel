/*
 * FUN_005e46d0 at 005e46d0
 * undefined FUN_005e46d0(void)
 * Address ranges: 005e46d0-005e4700
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005e46d0(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = &PTR_FUN_006515fc;
  uVar1 = param_1[0xd];
  if (uVar1 != 0) {
    iVar2 = *(int *)(uVar1 + 4);
    if ((iVar2 != 0) && (iVar2 != -1)) {
      *(int *)(uVar1 + 4) = iVar2 + -1;
    }
    puVar3 = (undefined4 *)(~-(uint)(*(int *)(uVar1 + 4) != 0) & uVar1);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
  }
  return;
}

