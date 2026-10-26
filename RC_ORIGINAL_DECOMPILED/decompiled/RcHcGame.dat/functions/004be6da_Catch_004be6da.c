/*
 * Catch@004be6da at 004be6da
 * undefined Catch@004be6da(void)
 * Address ranges: 004be6da-004be733
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * Catch_004be6da(void)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x28);
  iVar2 = (**(code **)(*piVar1 + 4))();
  if (iVar2 == 0) {
    pcVar3 = s_no_info_0069797c;
  }
  else {
    pcVar3 = (char *)(**(code **)(*piVar1 + 4))();
  }
  uVar4 = FUN_005ae390(unaff_EBP + -0x48,s_CAdamApplication__Start___caught_00697944,pcVar3);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_005aff20(s_D__Work_RCHorror_AdamSource_Adam_006975f0,0x241,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_004040a0(1);
  *(undefined1 *)(unaff_EBP + -0x11) = 1;
  return &DAT_004be7b7;
}

