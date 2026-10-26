/*
 * FUN_004383fc at 004383fc
 * undefined __register FUN_004383fc(int * param_1, int param_2, int param_3, int param_4, int param_5)
 * Address ranges: 004383fc-004384d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004383fc(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  LONG *pLVar4;
  RECT *pRVar5;
  byte bVar6;
  LONG local_40 [4];
  WINDOWPLACEMENT local_30;
  
  bVar6 = 0;
  if ((((param_2 == param_1[0xc]) && (param_3 == param_1[0xd])) && (param_5 == param_1[0xe])) &&
     (param_4 == param_1[0xf])) {
    return;
  }
  bVar1 = FUN_00438c84((int)param_1);
  if ((bVar1) && (BVar2 = IsIconic((HWND)param_1[0x53]), BVar2 == 0)) {
    SetWindowPos((HWND)param_1[0x53],(HWND)0x0,param_2,param_3,param_5,param_4,0x14);
  }
  else {
    param_1[0xc] = param_2;
    param_1[0xd] = param_3;
    param_1[0xe] = param_5;
    param_1[0xf] = param_4;
    bVar1 = FUN_00438c84((int)param_1);
    if (bVar1) {
      local_30.length = 0x2c;
      GetWindowPlacement((HWND)param_1[0x53],&local_30);
      FUN_0043211c((int)param_1,local_40);
      pLVar4 = local_40;
      pRVar5 = &local_30.rcNormalPosition;
      for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
        pRVar5->left = *pLVar4;
        pLVar4 = pLVar4 + (uint)bVar6 * -2 + 1;
        pRVar5 = (RECT *)((int)pRVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
      SetWindowPlacement((HWND)param_1[0x53],&local_30);
    }
  }
  FUN_00431e58((int)param_1);
  FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  return;
}

