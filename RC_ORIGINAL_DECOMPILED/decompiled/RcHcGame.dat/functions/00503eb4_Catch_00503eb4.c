/*
 * Catch@00503eb4 at 00503eb4
 * undefined Catch@00503eb4(void)
 * Address ranges: 00503eb4-00503f98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Catch_00503eb4(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBP;
  char *pcVar6;
  
  *(undefined1 *)(unaff_EBP + -0x30) = *(undefined1 *)(unaff_EBP + 0xf);
  uVar5 = 0xffffffff;
  pcVar6 = s_caught_exception_during_CAdamGO__0069dd90;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  FUN_004040f0(s_caught_exception_during_CAdamGO__0069dd90,~uVar5 - 1);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x36c,unaff_EBP + -0x30);
  iVar2 = *(int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
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
  uVar4 = FUN_005ae390(unaff_EBP + -0x40,s_Caught_exception_during__s__OnCo_0069dd5c,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x36d,uVar4);
  iVar2 = *(int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
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

