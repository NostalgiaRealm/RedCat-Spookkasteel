/*
 * FUN_005f4460 at 005f4460
 * undefined FUN_005f4460(void)
 * Address ranges: 005f4460-005f44a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005f4460(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_005ec380();
  if (*(int *)(param_1 + 0x20) == 3) {
    iVar2 = FUN_005f9320();
    if (-1 < iVar2 + -1) {
      puVar3 = (undefined4 *)(iVar1 + (iVar2 + -1) * 4);
      do {
        FUN_0060b25d(*puVar3);
        puVar3 = puVar3 + -1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  FUN_005fe5f0(iVar1);
  return;
}

