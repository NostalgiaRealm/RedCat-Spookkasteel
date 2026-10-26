/*
 * FUN_0059a6c0 at 0059a6c0
 * undefined FUN_0059a6c0(void)
 * Address ranges: 0059a6c0-0059a6eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0059a6c0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 4;
  puVar3 = (undefined4 *)(param_1 + 0x54);
  do {
    cVar1 = FUN_0059b1f0();
    if (cVar1 != '\0') {
      FUN_00598dd0(*puVar3);
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

