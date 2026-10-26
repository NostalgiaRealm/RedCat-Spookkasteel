/*
 * Catch@00505042 at 00505042
 * undefined Catch@00505042(void)
 * Address ranges: 00505042-005050c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Catch_00505042(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  int unaff_EBP;
  
  puVar3 = *(undefined1 **)(*(int *)(unaff_EBP + 8) + 4);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  FUN_0060a613(*(undefined4 *)(unaff_EBP + -0x18),puVar3);
  uVar4 = FUN_0060b060();
  uVar4 = FUN_005ae390(unaff_EBP + -0x50,s_Couldn_t_Fire_event___s__s___Unh_0069dfcc,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  pcVar5 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x492,
                                uVar4);
  (*pcVar5)();
  iVar2 = *(int *)(unaff_EBP + -0x4c);
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      return 0x504e23;
    }
    FUN_005fe5f0((char *)(iVar2 + -1));
  }
  return 0x504e23;
}

