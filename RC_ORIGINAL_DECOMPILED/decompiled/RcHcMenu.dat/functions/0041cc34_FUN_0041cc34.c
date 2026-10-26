/*
 * FUN_0041cc34 at 0041cc34
 * undefined __register FUN_0041cc34(int * param_1, int param_2, int param_3, undefined * param_4)
 * Address ranges: 0041cc34-0041ccbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041cc34(int *param_1,int param_2,int param_3,undefined *param_4)

{
  undefined4 uVar1;
  LONG LVar2;
  UINT c;
  LPCSTR lpString;
  INT *lpDx;
  
  (**(code **)(*param_1 + 0x10))();
  FUN_0041d040(param_1,0xb);
  uVar1 = FUN_0041cc08(param_1);
  if ((char)uVar1 == '\x01') {
    LVar2 = FUN_0041cda8(param_1,param_4);
    param_2 = param_2 + LVar2 + 1;
  }
  lpDx = (INT *)0x0;
  c = FUN_00404030((int)param_4);
  lpString = FUN_004041f4(param_4);
  ExtTextOutA((HDC)param_1[1],param_2,param_3,param_1[0x15],(RECT *)0x0,lpString,c,lpDx);
  LVar2 = FUN_0041cda8(param_1,param_4);
  FUN_0041cad0(param_1,LVar2 + param_2,param_3);
  (**(code **)(*param_1 + 0xc))();
  return;
}

