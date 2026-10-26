/*
 * FUN_004f8ee7 at 004f8ee7
 * undefined FUN_004f8ee7(void)
 * Address ranges: 004f8ee7-004f9029
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f8ee7(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 uVar7;
  undefined3 extraout_var_01;
  int unaff_EBX;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBP + -4) = 6;
  iVar2 = FUN_00515db0();
  iVar4 = *(int *)(iVar2 + 100);
  if (iVar4 == -0x80000000) {
    puVar3 = *(undefined1 **)(iVar2 + 0x18);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar3);
    *(int *)(iVar2 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    puVar3 = &DAT_0064a3b4;
    if (*(undefined1 **)(unaff_EBX + 0x3b8) != (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(unaff_EBX + 0x3b8);
    }
    puVar5 = *(undefined1 **)(unaff_EBP + -0x30);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_0064a3b4;
    }
    uVar6 = FUN_005ae390(unaff_EBP + -0xac,s_Loaded_script_from___s_____s___0069ce0c,puVar5,puVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_005aff00(uVar6);
    *(undefined1 *)(unaff_EBP + -4) = 6;
    FUN_004040a0(1);
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_004040a0(1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_004040a0(1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_004040a0(1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_004040a0(1);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_004040a0(1);
  iVar4 = *(int *)(unaff_EBP + -0x44);
  uVar7 = extraout_var;
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0(iVar4 + -1);
      uVar7 = extraout_var_00;
    }
    else {
      *(char *)(iVar4 + -1) = cVar1 + -1;
    }
  }
  iVar4 = *(int *)(unaff_EBP + -0x30);
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  if (iVar4 != 0) {
    cVar1 = *(char *)(iVar4 + -1);
    if ((cVar1 != '\0') && (cVar1 != -1)) {
      *(char *)(iVar4 + -1) = cVar1 + -1;
      ExceptionList = *(void **)(unaff_EBP + -0xc);
      return CONCAT31(uVar7,1);
    }
    FUN_005fe5f0(iVar4 + -1);
    uVar7 = extraout_var_01;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return CONCAT31(uVar7,1);
}

