/*
 * FUN_10011fa0 at 10011fa0
 * undefined FUN_10011fa0(void)
 * Address ranges: 10011fa0-10012060
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10011fa0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  DAT_103df888 = DAT_103df888 + DAT_103df880;
  if (DAT_103df880 == *(int *)(param_1 + 0x34)) {
    return 1;
  }
  if (((&DAT_10313090)[*(int *)(param_1 + 0x14) * 0x10] & 1) == 0) {
    if (((&DAT_10313090)[*(int *)(param_1 + 0x14) * 0x10] & 4) == 0) {
      if (*(int *)(param_1 + 0x2c) != 0) {
        FUN_10014360(*(int *)(param_1 + 0x2c));
        *(undefined4 *)(param_1 + 0x2c) = 0;
        _DAT_1003fde8 = 0;
      }
      uVar2 = FUN_10014310(DAT_103df880 << 2);
      *(undefined4 *)(param_1 + 0x2c) = uVar2;
      iVar3 = 0;
      if (0 < DAT_103df880) {
        do {
          iVar1 = iVar3 + param_2;
          iVar3 = iVar3 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0x2c) + -4 + iVar3 * 4) =
               (&DAT_103de87c)[iVar1 % DAT_103df880];
        } while (iVar3 < DAT_103df880);
      }
      *(int *)(param_1 + 0x34) = DAT_103df880;
      DAT_103df88c = DAT_103df88c + 1;
      return 1;
    }
    return 1;
  }
  return 1;
}

