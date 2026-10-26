/*
 * Catch@005abb46 at 005abb46
 * undefined Catch@005abb46(void)
 * Address ranges: 005abb46-005abbfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void Catch_005abb46(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int iVar4;
  
  puVar2 = *(undefined1 **)(*(int *)(unaff_EBP + 0xc) + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  uVar3 = FUN_005ae390(unaff_EBP + -0x88,s_CDaviObject__MemReport___s____un_006a8dc8,puVar2);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a8ca0,0x104,uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004040a0(1);
  iVar4 = -1;
  for (iVar1 = *(int *)(unaff_EBP + -0x18); iVar1 != 0; iVar1 = **(int **)(iVar1 + 0xc)) {
    FUN_0060a613(iVar1);
    uVar3 = FUN_0060b060();
    uVar3 = FUN_005ae390(unaff_EBP + -0x88,s_Object___d_____d_______s_006a8df8,
                         *(undefined4 *)(iVar1 + 0x10),iVar4,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_005aff20(s_D__Work_RCHorror_AdamSource_Davi_006a8ca0,0x10d,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_004040a0(1);
    iVar4 = iVar4 + -1;
  }
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(0,0);
}

