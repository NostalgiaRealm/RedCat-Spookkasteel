/*
 * FUN_00553130 at 00553130
 * undefined FUN_00553130(void)
 * Address ranges: 00553130-00553166
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00553130(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_005530e0();
  if (cVar1 != '\0') {
    FUN_00554070();
    uVar2 = FUN_00552fd0();
    uVar2 = FUN_00553e20(uVar2);
    FUN_005c7ff0(uVar2);
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}

