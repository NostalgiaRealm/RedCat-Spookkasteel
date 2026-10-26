/*
 * FUN_0053a720 at 0053a720
 * undefined FUN_0053a720(void)
 * Address ranges: 0053a720-0053a84f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_0053a720(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_retaddr;
  
  if ((*(char *)(param_1 + 0x28) == '\0') && (*(int *)(param_1 + 0x18) != 0)) {
    iVar5 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
    iVar6 = iVar5 >> 0x1f;
    if (iVar5 / 0x1c + iVar6 != iVar6) {
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18)) / 0x1c;
      }
      iVar6 = *(int *)(param_1 + 0x18) + -0x1c + iVar6 * 0x1c;
      if (DAT_006b915c == 0) {
        FUN_004bc480();
      }
      piVar3 = (int *)FUN_0051d750();
      cVar2 = (**(code **)(*piVar3 + 0x3c))(0x1b);
      if (cVar2 != '\0') {
        FUN_00537ee0(2);
        FUN_0053a560();
        return 1;
      }
      iVar5 = FUN_0053b650(unaff_retaddr);
      if (iVar5 == 0x26) {
        uVar4 = 0;
        iVar6 = *(int *)(iVar6 + 0x18) + -1;
      }
      else {
        if (iVar5 != 0x28) {
          iVar5 = *(int *)(iVar6 + 0x18);
          if (-1 < iVar5) {
            iVar1 = *(int *)(*(int *)(iVar6 + 0x14) + 0x44);
            if (iVar1 == 0) {
              iVar6 = 0;
            }
            else {
              iVar6 = *(int *)(*(int *)(iVar6 + 0x14) + 0x48) - iVar1 >> 2;
            }
            if (iVar5 < iVar6) {
              piVar3 = (int *)FUN_0053a850(iVar5);
              uVar4 = (**(code **)(*piVar3 + 4))(unaff_retaddr,param_1);
              return uVar4;
            }
          }
          return 0;
        }
        uVar4 = 1;
        iVar6 = *(int *)(iVar6 + 0x18) + 1;
      }
      FUN_0053b6b0(iVar6,uVar4);
      FUN_00537ee0(4);
      return 1;
    }
  }
  return 0;
}

