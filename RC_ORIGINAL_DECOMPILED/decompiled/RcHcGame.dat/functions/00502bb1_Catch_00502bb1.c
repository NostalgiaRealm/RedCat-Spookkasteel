/*
 * Catch@00502bb1 at 00502bb1
 * undefined Catch@00502bb1(void)
 * Address ranges: 00502bb1-00502c62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Catch_00502bb1(void)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EBP;
  char *pcVar5;
  
  *(undefined1 *)(unaff_EBP + -0x34) = *(undefined1 *)(unaff_EBP + 0xb);
  FUN_004040a0(0);
  uVar4 = 0xffffffff;
  pcVar5 = s_caught_exception_during_CAdamGO__0069da88;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_004040f0(s_caught_exception_during_CAdamGO__0069da88,~uVar4 - 1);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x15a,unaff_EBP + -0x34);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004040a0(1);
  puVar2 = *(undefined1 **)(*(int *)(unaff_EBP + -0x18) + 0x60);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  FUN_0060a613(*(int *)(unaff_EBP + -0x18),puVar2);
  uVar3 = FUN_0060b060();
  uVar3 = FUN_005ae390(unaff_EBP + -0x34,s_Caught_exception_during__s__OnSu_0069da4c,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x15b,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_004040a0(1);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

