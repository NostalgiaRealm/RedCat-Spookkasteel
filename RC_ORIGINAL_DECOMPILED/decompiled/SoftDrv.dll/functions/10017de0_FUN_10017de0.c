/*
 * FUN_10017de0 at 10017de0
 * undefined FUN_10017de0(void)
 * Address ranges: 10017de0-10017e32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10017de0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  _DAT_1020e898 = (float)param_1;
  iVar4 = 1;
  puVar2 = &DAT_1020e698;
  do {
    puVar3 = puVar2 + 1;
    lVar1 = (longlong)iVar4;
    iVar4 = iVar4 + 1;
    *puVar2 = (int)(0x10000 / lVar1);
    puVar2 = puVar3;
  } while ((int)puVar3 < 0x1020e898);
  DAT_1020e68c = param_2;
  DAT_1020e688 = param_3;
  _DAT_1020e8a0 = param_4;
  return;
}

