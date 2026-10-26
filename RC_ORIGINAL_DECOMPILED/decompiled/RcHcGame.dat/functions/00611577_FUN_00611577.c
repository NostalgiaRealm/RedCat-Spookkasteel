/*
 * FUN_00611577 at 00611577
 * undefined FUN_00611577(void)
 * Address ranges: 00611577-0061162f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00611577(undefined4 param_1)

{
  char *pcVar1;
  int iVar2;
  DName *pDVar3;
  undefined4 uVar4;
  undefined1 local_14 [8];
  DName local_c [8];
  
  iVar2 = *DAT_00710054 + -0x30;
  if ((iVar2 < 0) || (9 < iVar2)) {
    FUN_00614dc3();
    if (*DAT_00710054 == '?') {
      uVar4 = FUN_00611e27(local_14);
      FUN_006154c8(uVar4);
      pcVar1 = DAT_00710054 + 1;
      if (*DAT_00710054 != '@') {
        FUN_00615520((*DAT_00710054 == '\0') + '\x01');
        pcVar1 = DAT_00710054;
      }
    }
    else {
      uVar4 = FUN_00614ebc(&DAT_00710054,0x40);
      FUN_006154c8(uVar4);
      pcVar1 = DAT_00710054;
    }
    DAT_00710054 = pcVar1;
    if (*(int *)DAT_0071004c != 9) {
      Replicator::operator+=(DAT_0071004c,local_c);
    }
    pDVar3 = local_c;
  }
  else {
    DAT_00710054 = DAT_00710054 + 1;
    pDVar3 = Replicator::operator[](DAT_0071004c,iVar2);
  }
  FUN_00614df0(pDVar3);
  return param_1;
}

