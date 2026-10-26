/*
 * FUN_00430b24 at 00430b24
 * undefined __register FUN_00430b24(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00430b24-00430c93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00430b24(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  HWND pHVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar4;
  
  DAT_00573760 = param_1;
  param_1[1] = 0;
  GetCursorPos((LPPOINT)&DAT_0057376c);
  piVar1 = DAT_00573760;
  DAT_00573760[3] = DAT_0057376c;
  piVar1[4] = DAT_00573770;
  DAT_00573774 = GetCursor();
  DAT_00573768 = FUN_0042fe18();
  DAT_00573778 = param_3;
  uVar2 = FUN_0040320c(param_1,(int)&PTR_FUN_0042dc04);
  if ((char)uVar2 == '\0') {
    if (param_2 == '\0') {
      DAT_0057377c = '\0';
    }
    else {
      DAT_0057377c = '\x01';
    }
  }
  else {
    iVar4 = param_1[0x11];
    if (param_1[0x13] == iVar4 || param_1[0x13] - iVar4 < 0) {
      param_1[8] = 0;
      param_1[9] = 0;
    }
    else {
      *(double *)(param_1 + 8) =
           (double)(param_1[3] - iVar4) / (double)(param_1[0x13] - param_1[0x11]);
    }
    if (param_1[0x14] - param_1[0x12] < 1) {
      param_1[10] = 0;
      param_1[0xb] = 0;
    }
    else {
      *(double *)(param_1 + 10) =
           (double)(param_1[4] - param_1[0x12]) / (double)(param_1[0x14] - param_1[0x12]);
    }
    if (param_2 == '\0') {
      DAT_0057377c = '\0';
    }
    else {
      DAT_0057377c = '\x02';
      (**(code **)(*param_1 + 0x2c))();
    }
  }
  DAT_00573780 = (int *)(**(code **)(*DAT_00573760 + 8))();
  uVar2 = extraout_ECX;
  if (DAT_00573780 != (int *)0x0) {
    iVar4 = DAT_00573770;
    pHVar3 = GetDesktopWindow();
    FUN_0043a18c(DAT_00573780,pHVar3,DAT_0057376c,iVar4);
    uVar2 = extraout_ECX_00;
  }
  DAT_00573788 = FUN_00403064((int *)&PTR_FUN_0042fc6c,'\x01',uVar2);
  if (DAT_0057377c != '\0') {
    FUN_00430850((POINT *)&DAT_0057376c);
  }
  return;
}

