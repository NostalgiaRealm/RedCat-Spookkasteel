/*
 * FUN_00438580 at 00438580
 * undefined __register FUN_00438580(int * param_1, int param_2, int param_3)
 * Address ranges: 00438580-00438657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00438580(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  if ((HWND)param_1[0x53] != (HWND)0x0) {
    BVar2 = IsWindowVisible((HWND)param_1[0x53]);
    if (BVar2 != 0) {
      bVar1 = true;
      goto LAB_004385aa;
    }
  }
  bVar1 = false;
LAB_004385aa:
  if (bVar1) {
    ScrollWindow((HWND)param_1[0x53],param_2,param_3,(RECT *)0x0,(RECT *)0x0);
  }
  iVar3 = FUN_0043579c((int)param_1);
  if (-1 < iVar3 + -1) {
    iVar6 = 0;
    do {
      piVar4 = (int *)FUN_00435760((int)param_1,iVar6);
      uVar5 = FUN_0040320c(piVar4,(int)&PTR_FUN_0042ebec);
      if (((char)uVar5 == '\0') || (piVar4[0x53] == 0)) {
        piVar4[0xc] = piVar4[0xc] + param_2;
        piVar4[0xd] = piVar4[0xd] + param_3;
      }
      else if (!bVar1) {
        SetWindowPos((HWND)piVar4[0x53],(HWND)0x0,piVar4[0xc] + param_2,piVar4[0xd] + param_3,
                     piVar4[0xe],piVar4[0xf],0x14);
      }
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0043532c(param_1);
  return;
}

