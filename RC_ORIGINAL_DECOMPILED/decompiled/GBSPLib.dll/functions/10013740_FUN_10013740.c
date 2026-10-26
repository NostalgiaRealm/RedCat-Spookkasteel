/*
 * FUN_10013740 at 10013740
 * undefined FUN_10013740(void)
 * Address ranges: 10013740-10013886
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10013740(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_104e98b0 != 0) {
    FUN_10014360(DAT_104e98b0);
    _DAT_1003fde8 = 0;
  }
  DAT_104e98b0 = 0;
  DAT_1014e308 = 0;
  DAT_1014e2b0 = 0;
  if (DAT_104e98b4 != 0) {
    iVar2 = 0;
    if (0 < DAT_104e98c8) {
      iVar3 = 0;
      do {
        FUN_1000c2e0(*(undefined4 *)(iVar3 + 4 + DAT_104e98b4));
        iVar1 = *(int *)(iVar3 + 0x30 + DAT_104e98b4);
        if (iVar1 != 0) {
          FUN_10014360(iVar1);
          *(undefined4 *)(iVar3 + 0x30 + DAT_104e98b4) = 0;
          _DAT_1003fde8 = *(undefined4 *)(iVar3 + 0x30 + DAT_104e98b4);
        }
        iVar1 = *(int *)(iVar3 + 0x2c + DAT_104e98b4);
        if (iVar1 != 0) {
          FUN_10014360(iVar1);
          *(undefined4 *)(iVar3 + 0x2c + DAT_104e98b4) = 0;
          _DAT_1003fde8 = *(undefined4 *)(iVar3 + 0x2c + DAT_104e98b4);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x44;
      } while (iVar2 < DAT_104e98c8);
    }
    FUN_10014360(DAT_104e98b4);
    DAT_104e98b4 = 0;
    _DAT_1003fde8 = 0;
  }
  if (DAT_104e98b8 != 0) {
    FUN_10014360(DAT_104e98b8);
    DAT_104e98b8 = 0;
    _DAT_1003fde8 = 0;
  }
  if (DAT_104e98d4 != 0) {
    FUN_10014360(DAT_104e98d4);
    DAT_104e98d4 = 0;
    _DAT_1003fde8 = 0;
  }
  if (DAT_104e98d0 != 0) {
    FUN_10014360(DAT_104e98d0);
    _DAT_1003fde8 = 0;
  }
  DAT_104e98b4 = 0;
  DAT_104e98b8 = 0;
  DAT_104e98d4 = 0;
  DAT_104e98d0 = 0;
  FUN_100052c0();
  return;
}

