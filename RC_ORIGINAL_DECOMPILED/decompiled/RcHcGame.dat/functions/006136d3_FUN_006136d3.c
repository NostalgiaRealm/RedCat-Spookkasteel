/*
 * FUN_006136d3 at 006136d3
 * undefined FUN_006136d3(void)
 * Address ranges: 006136d3-006137b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_006136d3(undefined4 param_1)

{
  bool bVar1;
  char *pcVar2;
  DName *pDVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 local_24 [16];
  DName local_14 [8];
  undefined1 local_c [4];
  byte local_8;
  
  bVar1 = true;
  FUN_00614dc3();
  do {
    if ((local_8 & 0xf) != 0) {
LAB_006137a1:
      FUN_00614df0(local_c);
      return param_1;
    }
    if ((*DAT_00710054 == '@') || (*DAT_00710054 == 'Z')) goto LAB_006137a1;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      FUN_006152a2(0x2c);
    }
    pcVar2 = DAT_00710054;
    if (*DAT_00710054 == '\0') {
      FUN_006153d7(2);
      goto LAB_006137a1;
    }
    iVar5 = *DAT_00710054 + -0x30;
    if ((iVar5 < 0) || (9 < iVar5)) {
      uVar4 = FUN_00614dc3();
      uVar4 = FUN_0061349a(local_24,uVar4);
      FUN_00614df0(uVar4);
      if ((1 < (int)DAT_00710054 - (int)pcVar2) && (*(int *)DAT_00710030 != 9)) {
        Replicator::operator+=(DAT_00710030,local_14);
      }
      pDVar3 = local_14;
    }
    else {
      DAT_00710054 = DAT_00710054 + 1;
      pDVar3 = Replicator::operator[](DAT_00710030,iVar5);
    }
    FUN_00615373(pDVar3);
  } while( true );
}

