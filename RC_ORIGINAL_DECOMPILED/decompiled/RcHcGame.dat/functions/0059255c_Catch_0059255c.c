/*
 * Catch@0059255c at 0059255c
 * undefined Catch@0059255c(void)
 * Address ranges: 0059255c-005925b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * Catch_0059255c(void)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x18);
  iVar2 = (**(code **)(*piVar1 + 4))();
  if (iVar2 == 0) {
    pcVar3 = s_no_info_0069797c;
  }
  else {
    pcVar3 = (char *)(**(code **)(*piVar1 + 4))();
  }
  uVar4 = FUN_005ae390(unaff_EBP + -0x48,s_WinMain___caught_VC_RTL_exceptio_006a6454,pcVar3);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  FUN_0040cc00(uVar4,0,0xffffffff);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  FUN_004040a0(1);
  return &DAT_005925ef;
}

