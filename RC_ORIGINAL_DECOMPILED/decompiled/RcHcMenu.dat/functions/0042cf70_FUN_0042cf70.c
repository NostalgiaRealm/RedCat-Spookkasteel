/*
 * FUN_0042cf70 at 0042cf70
 * undefined __register FUN_0042cf70(int * param_1, int param_2, LONG * param_3, undefined2 param_4)
 * Address ranges: 0042cf70-0042d071
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042cf70(int *param_1,int param_2,LONG *param_3,undefined2 param_4)

{
  char cVar1;
  LPCSTR lpchText;
  HDC hdc;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  RECT *pRVar3;
  undefined4 *in_FS_OFFSET;
  uint format;
  undefined4 in_stack_ffffffc0;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined *local_20;
  int local_1c;
  RECT local_18;
  uint local_8;
  
  puStack_30 = &stack0xfffffffc;
  local_20 = (undefined *)0x0;
  local_1c = 0;
  pRVar3 = &local_18;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    pRVar3->left = *param_3;
    param_3 = param_3 + 1;
    pRVar3 = (RECT *)&pRVar3->top;
  }
  puStack_34 = &LAB_0042d072;
  puStack_38 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_38;
  if (*(short *)((int)param_1 + 0x222) == 0) {
    FUN_0041c9f8((int *)param_1[0x7e],&local_18);
    iVar2 = (**(code **)(*(int *)param_1[0x7c] + 0x14))();
    if (param_2 < iVar2) {
      local_8 = FUN_00434648(param_1,0x824,extraout_ECX);
      cVar1 = FUN_00403270(param_1,extraout_EDX,extraout_ECX_00);
      if (cVar1 == '\0') {
        local_18.left = local_18.left + 2;
      }
      else {
        local_18.right = local_18.right + -2;
      }
      pRVar3 = &local_18;
      format = local_8;
      (**(code **)(*(int *)param_1[0x7c] + 0xc))((int *)param_1[0x7c],param_2,&local_1c);
      iVar2 = FUN_00404030(local_1c);
      (**(code **)(*(int *)param_1[0x7c] + 0xc))((int *)param_1[0x7c],param_2,&local_20);
      lpchText = FUN_004041f4(local_20);
      hdc = (HDC)FUN_0041cf6c((int *)param_1[0x7e]);
      DrawTextA(hdc,lpchText,iVar2,pRVar3,format);
    }
  }
  else {
    in_stack_ffffffc0 = CONCAT22((short)((uint)&local_18 >> 0x10),param_4);
    puStack_30 = &stack0xfffffffc;
    (*(code *)param_1[0x88])(param_1[0x89],param_1,param_2,in_stack_ffffffc0,&local_18);
  }
  *in_FS_OFFSET = in_stack_ffffffc0;
  puStack_38 = &LAB_0042d079;
  FUN_00403dd4((int *)&local_20,2);
  return;
}

