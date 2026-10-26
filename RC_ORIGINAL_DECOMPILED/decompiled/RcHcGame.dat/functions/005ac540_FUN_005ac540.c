/*
 * FUN_005ac540 at 005ac540
 * undefined FUN_005ac540(void)
 * Address ranges: 005ac540-005ac56e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005ac540(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_006cad90 != 0) {
    iVar3 = *(int *)(DAT_006cad90 + 0x48);
    iVar2 = DAT_006cad90;
    while (iVar1 = iVar3, iVar1 != 0) {
      iVar2 = iVar1;
      iVar3 = *(int *)(iVar1 + 0x48);
    }
    *(int *)(iVar2 + 0x48) = param_1;
    *(undefined4 *)(param_1 + 0x48) = 0;
    return;
  }
  DAT_006cad90 = param_1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}

