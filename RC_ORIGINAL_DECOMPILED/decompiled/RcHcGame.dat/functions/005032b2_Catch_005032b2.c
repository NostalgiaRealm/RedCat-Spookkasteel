/*
 * Catch@005032b2 at 005032b2
 * undefined Catch@005032b2(void)
 * Address ranges: 005032b2-00503396
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Catch_005032b2(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBP;
  char *pcVar6;
  
  *(undefined1 *)(unaff_EBP + -0x2c) = *(undefined1 *)(unaff_EBP + 0xb);
  uVar5 = 0xffffffff;
  pcVar6 = s_caught_exception_during_CAdamGO__0069dc20;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  FUN_004040f0(s_caught_exception_during_CAdamGO__0069dc20,~uVar5 - 1);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x28e,unaff_EBP + -0x2c);
  iVar2 = *(int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
  puVar3 = *(undefined1 **)(*(int *)(unaff_EBP + -0x14) + 0x60);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  FUN_0060a613(*(int *)(unaff_EBP + -0x14),puVar3);
  uVar4 = FUN_0060b060();
  uVar4 = FUN_005ae390(unaff_EBP + -0x2c,s_Caught_exception_during__s__OnCo_0069dbec,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x28f,uVar4);
  iVar2 = *(int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(iVar2 + -1));
    }
    else {
      *(char *)(iVar2 + -1) = cVar1 + -1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

