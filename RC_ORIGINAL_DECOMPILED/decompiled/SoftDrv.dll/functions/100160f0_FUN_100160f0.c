/*
 * FUN_100160f0 at 100160f0
 * undefined FUN_100160f0(void)
 * Address ranges: 100160f0-10016129
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100160f0(int param_1,int param_2)

{
  int *piVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_LAB_100213f0 + param_1;
  piVar1 = &DAT_100213ec;
  ppuVar2 = &PTR_LAB_100213f0 + param_1 + param_2 * 2;
  do {
    *piVar1 = (int)*ppuVar3;
    if (*ppuVar2 != (undefined *)0x0) {
      *piVar1 = (int)*ppuVar2;
    }
    piVar1 = piVar1 + 8;
    ppuVar3 = ppuVar3 + 8;
    ppuVar2 = ppuVar2 + 8;
  } while ((int)piVar1 < 0x100217ec);
  return 1;
}

