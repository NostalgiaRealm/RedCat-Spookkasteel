/*
 * FUN_0041ccc0 at 0041ccc0
 * undefined __register FUN_0041ccc0(int * param_1, LONG * param_2, int param_3, undefined * param_4, int param_5)
 * Address ranges: 0041ccc0-0041cd5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041ccc0(int *param_1,LONG *param_2,int param_3,undefined *param_4,int param_5)

{
  undefined4 uVar1;
  LONG LVar2;
  UINT c;
  LPCSTR lpString;
  int iVar3;
  RECT *pRVar4;
  UINT options;
  INT *lpDx;
  RECT local_18;
  int local_8;
  
  pRVar4 = &local_18;
  for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
    pRVar4->left = *param_2;
    param_2 = param_2 + 1;
    pRVar4 = (RECT *)&pRVar4->top;
  }
  local_8 = param_3;
  (**(code **)(*param_1 + 0x10))();
  FUN_0041d040(param_1,0xb);
  options = param_1[0x15] | 4;
  uVar1 = FUN_0041c42c(param_1[5]);
  if ((char)uVar1 != '\x01') {
    options = options + 2;
  }
  if ((*(byte *)(param_1 + 0x15) & 0x80) != 0) {
    uVar1 = FUN_0041cc08(param_1);
    if ((char)uVar1 == '\x01') {
      LVar2 = FUN_0041cda8(param_1,param_4);
      local_8 = local_8 + LVar2 + 1;
    }
  }
  lpDx = (INT *)0x0;
  c = FUN_00404030((int)param_4);
  lpString = FUN_004041f4(param_4);
  ExtTextOutA((HDC)param_1[1],local_8,param_5,options,&local_18,lpString,c,lpDx);
  (**(code **)(*param_1 + 0xc))();
  return;
}

