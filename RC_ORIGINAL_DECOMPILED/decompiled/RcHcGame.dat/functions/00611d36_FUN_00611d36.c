/*
 * FUN_00611d36 at 00611d36
 * undefined FUN_00611d36(void)
 * Address ranges: 00611d36-00611dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00611d36(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  cVar1 = *DAT_00710054;
  if (cVar1 == '\0') {
LAB_00611d46:
    uVar3 = 2;
  }
  else {
    if (('/' < cVar1) && (cVar1 < ':')) {
      cVar1 = *DAT_00710054;
      DAT_00710054 = DAT_00710054 + 1;
      uVar3 = FUN_00614f76(cVar1 + -0x2f);
      FUN_00614df0(uVar3);
      return param_1;
    }
    iVar2 = 0;
    while (cVar1 != '@') {
      if (cVar1 == '\0') goto LAB_00611d46;
      if ((cVar1 < 'A') || ('P' < cVar1)) goto LAB_00611daa;
      DAT_00710054 = DAT_00710054 + 1;
      iVar2 = iVar2 * 0x10 + -0x41 + (int)cVar1;
      cVar1 = *DAT_00710054;
    }
    cVar1 = *DAT_00710054;
    DAT_00710054 = DAT_00710054 + 1;
    if (cVar1 == '@') {
      FUN_00614f76(iVar2);
      return param_1;
    }
LAB_00611daa:
    uVar3 = 1;
  }
  FUN_00614fc6(uVar3);
  return param_1;
}

