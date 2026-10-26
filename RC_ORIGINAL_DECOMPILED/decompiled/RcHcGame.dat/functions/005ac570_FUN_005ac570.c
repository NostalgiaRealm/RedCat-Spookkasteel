/*
 * FUN_005ac570 at 005ac570
 * undefined FUN_005ac570(void)
 * Address ranges: 005ac570-005ac599
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005ac570(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_006cad90 != param_1) {
    iVar3 = *(int *)(DAT_006cad90 + 0x48);
    iVar2 = DAT_006cad90;
    while (iVar1 = iVar3, iVar1 != param_1) {
      iVar2 = iVar1;
      iVar3 = *(int *)(iVar1 + 0x48);
    }
    *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_1 + 0x48);
    return;
  }
  DAT_006cad90 = *(undefined4 *)(param_1 + 0x48);
  return;
}

