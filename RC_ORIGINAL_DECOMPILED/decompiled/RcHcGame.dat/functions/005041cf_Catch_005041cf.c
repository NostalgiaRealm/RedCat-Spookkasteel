/*
 * Catch@005041cf at 005041cf
 * undefined Catch@005041cf(void)
 * Address ranges: 005041cf-005042bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Catch_005041cf(void)

{
  int iVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBP;
  char *pcVar7;
  char *pcVar8;
  
  *(undefined1 *)(unaff_EBP + -0x28) = *(undefined1 *)(unaff_EBP + 0x13);
  FUN_004040a0(0);
  uVar5 = 0xffffffff;
  pcVar7 = s_caught_exception_during_CAdamGO__0069de54;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar2 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  uVar5 = ~uVar5 - 1;
  cVar2 = FUN_00401940(uVar5,1);
  if (cVar2 != '\0') {
    pcVar7 = s_caught_exception_during_CAdamGO__0069de54;
    pcVar8 = *(char **)(unaff_EBP + -0x24);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar8 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar8 = pcVar8 + 1;
    }
    *(uint *)(unaff_EBP + -0x20) = uVar5;
    *(undefined1 *)(uVar5 + *(int *)(unaff_EBP + -0x24)) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x3ad,unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_004040a0(1);
  puVar3 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 0x60);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  FUN_0060a613(*(int *)(unaff_EBP + -0x14),puVar3);
  uVar4 = FUN_0060b060();
  uVar4 = FUN_005ae390(unaff_EBP + -0x48,s_Caught_exception_during__s__OnDa_0069de20,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x3ae,uVar4);
  iVar1 = *(int *)(unaff_EBP + -0x44);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar1 != 0) {
    cVar2 = *(char *)(iVar1 + -1);
    if ((cVar2 == '\0') || (cVar2 == -1)) {
      FUN_005fe5f0((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = cVar2 + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

