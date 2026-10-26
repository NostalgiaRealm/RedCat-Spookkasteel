/*
 * Catch@00504f77 at 00504f77
 * undefined Catch@00504f77(void)
 * Address ranges: 00504f77-00505041
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 Catch_00504f77(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int unaff_EBP;
  
  puVar7 = *(undefined1 **)(unaff_EBP + -0xd0);
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  if (puVar7 == (undefined1 *)0x0) {
    puVar7 = &DAT_0064a3b4;
  }
  puVar6 = *(undefined1 **)(unaff_EBP + -0xe0);
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = &DAT_0064a3b4;
  }
  puVar3 = *(undefined1 **)(unaff_EBP + -0xc0);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = &DAT_0064a3b4;
  }
  uVar4 = FUN_005ae390(unaff_EBP + -0x50,s_Couldn_t_Fire_event__Runtime_Err_0069e000,puVar3,puVar6,
                       puVar7,*(undefined4 *)(unaff_EBP + -0xb4));
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  pcVar5 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069d990,0x48c,
                                uVar4);
  (*pcVar5)();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_004040a0(1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_004040a0(1);
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_004040a0(1);
  iVar2 = *(int *)(unaff_EBP + -0xe0);
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

