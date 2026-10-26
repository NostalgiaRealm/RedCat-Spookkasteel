/*
 * FUN_00405f98 at 00405f98
 * undefined __register FUN_00405f98(int param_1, undefined1 * param_2, undefined4 param_3, int param_4, uint param_5)
 * Address ranges: 00405f98-00406054
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00405f98(int param_1,undefined1 *param_2,undefined4 param_3,int param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int extraout_EDX;
  uint extraout_EDX_00;
  int iVar4;
  char acStack_26 [33];
  char local_5;
  
  local_5 = 0x7fffffff < param_5;
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    uVar2 = FUN_004075dd(param_4,param_5,param_3,10,0);
    cVar1 = (char)uVar2;
    if (extraout_EDX < 0) {
      cVar1 = -cVar1;
    }
    acStack_26[iVar3 + 1] = cVar1 + '0';
    iVar4 = iVar3 + 1;
    param_4 = FUN_004074ea(param_4,param_5,extraout_ECX,10,0);
    param_3 = extraout_ECX_00;
    param_5 = extraout_EDX_00;
  } while ((extraout_EDX_00 != 0) || (param_4 != 0));
  if (local_5 != '\0') {
    acStack_26[iVar3 + 2] = '-';
    iVar4 = iVar3 + 2;
  }
  if (0xff < param_1) {
    param_1 = 0xff;
  }
  iVar3 = 1;
  if (0 < param_1 - iVar4) {
    do {
      param_2[iVar3] = 0x20;
      iVar3 = iVar3 + 1;
    } while (iVar3 <= param_1 - iVar4);
  }
  for (; 0 < iVar4; iVar4 = iVar4 + -1) {
    param_2[iVar3] = acStack_26[iVar4];
    iVar3 = iVar3 + 1;
  }
  FUN_00402ab4(param_2,(char)iVar3 + -1);
  return;
}

