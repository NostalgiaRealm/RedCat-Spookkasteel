/*
 * FUN_00433298 at 00433298
 * undefined4 __register FUN_00433298(int * param_1, int * param_2, int param_3, undefined1 param_4)
 * Address ranges: 00433298-0043346a;00433472-0043347d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00433298(int *param_1,int *param_2,int param_3,undefined1 param_4)

{
  HWND pHVar1;
  int iVar2;
  int iVar3;
  undefined3 extraout_var;
  undefined3 uVar5;
  undefined4 uVar4;
  int *piVar6;
  tagPOINT *ptVar7;
  int *in_FS_OFFSET;
  byte bVar8;
  HWND hWndTo;
  UINT UVar9;
  int local_38 [4];
  int local_28;
  int local_24;
  tagPOINT local_20 [2];
  int *local_10;
  char local_9;
  int local_8;
  
  bVar8 = 0;
  local_8 = param_3;
  if ((param_2 == (int *)0x0) || (param_2 == (int *)0xffffffff)) {
    iVar2 = param_1[0x24];
    if (((iVar2 == 0) || (*(char *)(iVar2 + 0x17c) == '\0')) || (*(int *)(iVar2 + 0x148) == 0)) {
      FUN_0041160c(param_1[0xc],param_1[0xd],&local_28);
      local_20[0].x = local_28;
      local_20[0].y = local_24;
      if ((int *)param_1[9] != (int *)0x0) {
        FUN_0043228c((int *)param_1[9],&local_20[0].x,&local_28);
        local_20[0].x = local_28;
        local_20[0].y = local_24;
      }
    }
    else {
      (**(code **)(**(int **)(iVar2 + 0x148) + 0x14))(*(int **)(iVar2 + 0x148),param_1,local_20);
      UVar9 = 2;
      ptVar7 = local_20;
      hWndTo = (HWND)0x0;
      pHVar1 = (HWND)FUN_00438988((int *)param_1[0x24]);
      MapWindowPoints(pHVar1,hWndTo,ptVar7,UVar9);
    }
    iVar2 = FUN_004326a4((int)param_1);
    piVar6 = local_38;
    iVar3 = FUN_004326b8((int)param_1);
    FUN_00411640(local_20[0].x,local_20[0].y,iVar3,piVar6,iVar2);
    piVar6 = local_38;
    ptVar7 = local_20;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      ptVar7->x = *piVar6;
      piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
      ptVar7 = (tagPOINT *)&ptVar7[-(uint)bVar8].y;
    }
    local_9 = FUN_00433480(param_1,&local_20[0].x);
    uVar5 = extraout_var;
    goto LAB_00433472;
  }
  iVar2 = FUN_00433734(param_1);
  if (param_1[0x24] == 0) {
LAB_004333a2:
    uVar5 = (undefined3)((uint)iVar2 >> 8);
    local_9 = '\x01';
  }
  else {
    iVar2 = FUN_00403270((int *)param_1[0x24],param_2,param_1);
    if ((char)iVar2 != '\0') goto LAB_004333a2;
    local_9 = '\0';
    uVar5 = 0;
  }
  if (local_9 != '\0') {
    local_10 = FUN_0043009c((int *)&PTR_FUN_0042dc04,'\x01',(int)param_1);
    *in_FS_OFFSET = (int)&stack0xffffffb0;
    if ((int *)param_1[0x24] == (int *)0x0) {
      pHVar1 = (HWND)0x0;
    }
    else {
      pHVar1 = (HWND)FUN_00438988((int *)param_1[0x24]);
    }
    FUN_0043211c((int)param_1,&local_20[0].x);
    if (pHVar1 != (HWND)0x0) {
      MapWindowPoints(pHVar1,(HWND)0x0,local_20,2);
    }
    local_10[1] = (int)param_2;
    *(undefined1 *)(local_10 + 0x15) = param_4;
    local_10[0x16] = local_8;
    ptVar7 = local_20;
    piVar6 = local_10 + 0x11;
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar6 = ptVar7->x;
      ptVar7 = (tagPOINT *)&ptVar7[-(uint)bVar8].y;
      piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
    }
    UVar9 = 1;
    ptVar7 = local_20;
    pHVar1 = (HWND)FUN_00438988(param_2);
    MapWindowPoints((HWND)0x0,pHVar1,ptVar7,UVar9);
    FUN_00403270(param_2,local_10,local_20[0].x);
    *in_FS_OFFSET = local_20[0].y;
    uVar4 = FUN_00403094(local_10);
    return uVar4;
  }
LAB_00433472:
  return CONCAT31(uVar5,local_9);
}

