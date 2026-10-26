/*
 * Catch@005aba74 at 005aba74
 * undefined Catch@005aba74(void)
 * Address ranges: 005aba74-005abb45
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Catch_005aba74(void)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int unaff_EBP;
  int iVar6;
  
  piVar1 = *(int **)(unaff_EBP + -0x20);
  iVar2 = (**(code **)(*piVar1 + 4))();
  if (iVar2 == 0) {
    pcVar3 = s_no_info_0069797c;
  }
  else {
    pcVar3 = (char *)(**(code **)(*piVar1 + 4))();
  }
  puVar5 = *(undefined1 **)(*(int *)(unaff_EBP + 0xc) + 4);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_0064a3b4;
  }
  uVar4 = FUN_005ae390(unaff_EBP + -0x88,s_CDaviObject__MemReport___s____ca_006a8e14,puVar5,pcVar3);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a8ca0,0xf0,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004040a0(1);
  iVar6 = -1;
  for (iVar2 = *(int *)(unaff_EBP + -0x18); iVar2 != 0; iVar2 = **(int **)(iVar2 + 0xc)) {
    FUN_0060a613(iVar2);
    uVar4 = FUN_0060b060();
    uVar4 = FUN_005ae390(unaff_EBP + -0x88,s_Object___d_____d_______s_006a8df8,
                         *(undefined4 *)(iVar2 + 0x10),iVar6,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a8ca0,0xf9,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_004040a0(1);
    iVar6 = iVar6 + -1;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

