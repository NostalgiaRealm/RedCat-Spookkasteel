/*
 * FUN_0044b10c at 0044b10c
 * undefined __register FUN_0044b10c(int * param_1, int param_2, uint param_3)
 * Address ranges: 0044b10c-0044b1a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044b10c(int *param_1,int param_2,uint param_3)

{
  bool bVar1;
  HWND pHVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint dwNewLong;
  uint local_10;
  
  local_10 = param_3;
  FUN_00449b48(param_1,param_2);
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    iVar6 = -0x14;
    pHVar2 = (HWND)FUN_00438988(param_1);
    local_10 = GetWindowLongA(pHVar2,iVar6);
    local_10 = local_10 & 0xffff8fff;
    FUN_00435890(param_1,&local_10);
    iVar6 = -0x14;
    dwNewLong = local_10;
    pHVar2 = (HWND)FUN_00438988(param_1);
    SetWindowLongA(pHVar2,iVar6,dwNewLong);
  }
  iVar6 = FUN_00419530((int)param_1);
  if (-1 < iVar6 + -1) {
    iVar5 = 0;
    do {
      piVar3 = (int *)FUN_00419504((int)param_1,iVar5);
      uVar4 = FUN_0040320c(piVar3,(int)&PTR_FUN_004400d4);
      if ((char)uVar4 != '\0') {
        piVar3 = (int *)FUN_00419504((int)param_1,iVar5);
        FUN_00444df0(piVar3);
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

