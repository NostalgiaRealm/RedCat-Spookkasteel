/*
 * FUN_005530e0 at 005530e0
 * undefined FUN_005530e0(void)
 * Address ranges: 005530e0-0055312a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005530e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 0x38) != '\0') && (*(int *)(param_1 + 0x1c) != 0)) {
    FUN_00554070();
    uVar1 = FUN_00552fd0();
    uVar1 = FUN_00553e20(uVar1);
    iVar2 = FUN_005c80b0(uVar1);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x38) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}

