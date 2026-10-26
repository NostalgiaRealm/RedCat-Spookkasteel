/*
 * FUN_00599470 at 00599470
 * undefined FUN_00599470(void)
 * Address ranges: 00599470-005994b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00599470(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 100) != param_2) {
    FUN_00599540(param_2);
    puVar3 = (undefined4 *)(param_1 + 0x34);
    iVar2 = 8;
    do {
      cVar1 = FUN_0059b1f0();
      if (cVar1 != '\0') {
        iVar4 = param_2;
        FUN_0059df90(*puVar3);
        FUN_00599470(iVar4);
      }
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

