/*
 * Catch@004f8d5e at 004f8d5e
 * undefined Catch@004f8d5e(void)
 * Address ranges: 004f8d5e-004f8e9a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * Catch_004f8d5e(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  uint uVar8;
  int unaff_EBP;
  int *piVar9;
  
  iVar2 = *(int *)(unaff_EBP + -0x38);
  pcVar4 = s_several_DaviScript_link_errors_0069cec4;
  if (*(uint *)(iVar2 + 8) < 2) {
    pcVar4 = s_a_DaviScript_link_error_0069ceac;
  }
  FUN_005ae390(unaff_EBP + -0x24,s_Found__s__0069ce9c,pcVar4);
  piVar3 = *(int **)(iVar2 + 4);
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  piVar9 = (int *)*piVar3;
  if (piVar9 != piVar3) {
    do {
      uVar5 = FUN_005ae390(unaff_EBP + -0xbc,s_DaviScript_Link_Error__d___0069ce7c,piVar9[0xe]);
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_0045db40(uVar5,0,0xffffffff);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_004040a0(1);
      if (piVar9[4] != 0) {
        FUN_0045db40(piVar9 + 2,0,0xffffffff);
      }
      if (piVar9[8] != 0) {
        puVar6 = (undefined1 *)piVar9[7];
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        uVar5 = FUN_005ae390(unaff_EBP + -0xac,s__for_class__s__0069ce6c,puVar6);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_0045db40(uVar5,0,0xffffffff);
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        FUN_004040a0(1);
      }
      uVar8 = 0xffffffff;
      pcVar4 = &DAT_0069ce68;
      do {
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00484c30(&DAT_0069ce68,~uVar8 - 1);
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)*(int *)(*(int *)(unaff_EBP + -0x38) + 4));
  }
  pcVar7 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Adam_0069c628,0x564,
                                unaff_EBP + -0x24);
  (*pcVar7)();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_004040a0(1);
  return &DAT_004f8ee4;
}

